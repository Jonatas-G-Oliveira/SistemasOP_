<h1>#Lab 02 - Processos

##Exercicio 1
Rode o programa anterior para valores grandes de n. As mensagens sempre estarão ordenadas pelo valor de i?

	As mensagens são ordenadas,pois ao fim de um processo é executado outro de forma subsequente e
	como o valor de i está sendo incrementado,podemos dizer que ambos seguem um sentido crescente de execução.		

![Ex1](https://github.com/Jonatas-G-Oliveira/SistemasOP_/assets/130922069/bb4f0a59-f7af-4524-a4c2-a0f9aa75c0d0)

##Exercicio 2
O que acontece se o programa anterior escreve-se as mensagens para sys.stdout, usando print, ao inves de para sys.stderr?

	Ao substituir os comando stderr por stdout,para a execução do programa não houve muita diferença, porém um fato que que 
 	ocorre nesta aplicação é que a saída do padrao do linux(stdout)não recebe os prints da aplicação,os prints estao sendo
 	enviados diretamente para a saida de erro (stderr),isso é observado ao utilizarmos condutores auxiliares para realizar o
  	relatório de execução. Os arquivos de sucesso são gravados em stdout.log e os de erro em stderr.log.Informações adicionais
   	nos prints abaixo:

	Exemplo de saída antes de alterar o parametro do print stderr
![Ex2_Antes](https://github.com/Jonatas-G-Oliveira/SistemasOP_/assets/130922069/820d1b76-4a9b-47bc-b83c-907748d7b899)

	Exemplo de saide depois de alterar para o parametro para stdout

![Ex2_Alteracao](https://github.com/Jonatas-G-Oliveira/SistemasOP_/assets/130922069/ca3287ab-ca7e-4f1d-bbc9-b949c2dc6760)
![Ex2_Saida](https://github.com/Jonatas-G-Oliveira/SistemasOP_/assets/130922069/7ad7338d-d3f6-4f03-a10f-f5456ff8d9b4)
