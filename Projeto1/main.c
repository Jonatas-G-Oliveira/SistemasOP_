#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<time.h>

//Definindo a estrutura da conta
struct c{
        int saldo;
};
typedef struct c conta;


//Definindo as variaveis globais
conta from,to;		//Duas contas
int valor;		//Valor que vai ser passado
int transacoes;		//quantidade de transações
pthread_mutex_t mutex;  



void  *transferencia(void *threadId){
        long tid = (long)threadId;
        printf("--- Thread %ld em execução ---\n ", pthread_self());

        int aleatorio = rand() % 2; //0 From --> TO senao To >> from

        //Bloqueando a região crítica
        pthread_mutex_lock(&mutex);

	transacoes++;
        if(from.saldo >= valor && aleatorio == 0){
                printf("Conta FROM -->> %d -->>  Conta TO\n",valor);
                from.saldo -= valor;
                to.saldo += valor;
                printf("Saldo da conta FROM %d\n",from.saldo);
                printf("Saldo da conta TO  %d\n\n",to.saldo);
        }
        if(to.saldo >= valor && aleatorio == 1){
                printf("Conta TO  -->> %d -->>  Conta FROM\n",valor);
                to.saldo -= valor;
                from.saldo += valor;
                printf("Saldo da conta FROM %d\n",from.saldo);
                printf("Saldo da conta TO  %d\n\n",to.saldo);
        }

        //Desbloqueando região critica
        pthread_mutex_unlock(&mutex);
}




int main(int argc, char* argv[]){
	//Se o usuario não passar a quantidade certa de argumento
	if(argc != 2){
		fprintf(stderr,"Numero de argumentos inválidos \n"); 
	}	

	//Arg1 define o numero de threads que serão usadas
        int THREADS = atoi(argv[1]);
        if(THREADS  > 100){
                printf("O numero de threads  excedeu o limite de operações[max 100]");
                return 1;
        }

        //Criando um vetor de THREADS dinamico
        pthread_t* thread = malloc(THREADS  * sizeof(pthread_t));

        srand(time(NULL));
        pthread_mutex_init(&mutex,NULL);
        long t;

        //Inicializado os valores
        from.saldo = 100;
        to.saldo = 100;
        valor = 10;

        //Criando multiplas Threads
        for(t = 0;t < THREADS;t++){
                if(pthread_create(&thread[t],NULL,&transferencia,(void*)t)!=0){
                        printf("Falha ao criar a Thread %d\n",t);
                        return 2;
                }
        }

        //Evitando problemas com Threads
        for(t = 0;t < THREADS;t++){
                if(pthread_join(thread[t],NULL) != 0){
                        printf("Falha ao encerrar a Thread %d\n",t);
                        return 3;
                }
        }

	
        //Liberando Memória
        free(thread);
        pthread_mutex_destroy(&mutex);
	printf("Quantidade de transações = %d\n",transacoes);
        printf("Fim das transações\n");
        return 0;
}
