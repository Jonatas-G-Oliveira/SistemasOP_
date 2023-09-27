# Projeto Bimestral - Condição de Corrida[Conta Bancária]

# Integrantes
 - Jônatas Garcia de Oliveira - TIA: 42181232
 - Pablo Borba Leal           - TIA: 42145333

## Sobre o projeto
Para este projeto tivemos como objetivo resolver uma condição de corrida que estava ocorrendo entre as trasnsações de duas contas.
O problema do código principal estava no fato de que as threads podiam alterar o valor da variavel saldo simultanemate r,gerando uma condição de corrida e instabilidade no código.
Para resolver o problema utilizamos mutex.Os mutex são controladores para regiões criticas de memória,permitindo o bloqueio de uma variavel enquanto uma thread esta utilizando-a.

## Como compilar o programa
	` gcc main.c -o <nomedoarquivo>.<extensao>`

## Como executar o programa
	Para este programa é necessário passar o número de threads desejada por linha de código
	`./<nomedoArquivoGerado>.<extensao>` <numeroDeThreads>


## Testes
	Transferindo 10 reais  entre as duas contas aleatoriamente
 ![Ex1](https://github.com/Jonatas-G-Oliveira/SistemasOP_/Projeto1/Assets/130922069/bb4f0a59-f7af-4524-a4c2-a0f9aa75c0d0)

 <img src="/Assets/teste.jpg">
