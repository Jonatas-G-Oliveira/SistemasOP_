#Lab 02 - Processos

##Exercicio 1
Rode o programa anterior para valores grandes de n. As mensagens sempre estarão ordenadas pelo valor de i?

	As mensagens sempre são ordenada,pois ao fim de um processo é executado outro de forma subsequente e
	como o valor de i esta sendo incrementado,podemos dizer que ambos seguem um sentido crescente de ordem.		

![Ex1](https://github.com/Jonatas-G-Oliveira/SistemasOP_/assets/130922069/bb4f0a59-f7af-4524-a4c2-a0f9aa75c0d0)

##Exercicio 2
O que acontece se o programa anterior escreve-se as mensagens para sys.stdout, usando print, ao inves de para sys.stderr?

	Ao substituir os comando stderr por stdout no programa não houve muita alteração porém um fato que que ocorre nesta
	aplicação é que a saída do programa padrao(stdout)não esta recebendo os prints da aplicação,os prints estao caindo
 	diretamente na saida de err (stderr),isso é constado ao utilizar condutores enviando relatorios para os arquivos 
	stdout.log e stderr.log.Para mais informações olhar os prints.

Exemplo de saida antes de alterar o parametro 
![Ex2_Antes](https://github.com/Jonatas-G-Oliveira/SistemasOP_/assets/130922069/820d1b76-4a9b-47bc-b83c-907748d7b899)

