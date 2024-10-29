//Comentário
/*
 Comentário com mais linhas
 */
 
// Biblioteca / Library

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>    
// tipos primitivos
// int,float,char, bool


// variáveis de escapo global
int numGlobal;

// Função / Método principal
int main(){
	// Variáveis de escopo local
	float numQuebrado;
	
	// inicialização de variáveis com valores
	char letter = 'a';
	bool ativo = true;
	int i;
	
	// Estruturas de repetição
	// Função | Métedo
	for(i = 0; i <= 10; i++) {
	    printf("%d", i);
	}
	
	while(ativo){
	    printf("\nAtivo"); // "\n" =Pular linha
		ativo = false;
	}
	
	do{
		printf("\nVai executar independente da condição");
	}while(ativo);
	
	if(ativo ==true){
	    printf("\nAtivo");
	}else{  
	    printf("\nInativo");
	}

    int opcao;
    printf("\n Bem vindo ao sistema C")
    printf("\n Digite a opção desejada")
    printf("\n 1-Cadastro")
    printf("\n 2-Login")
    printf("\n 3-Sair")
    printf("\n Digite a opção desejada")
    scanf("d%, opcao")

	switch(opacao){
	    case 1:
	        printf("Olá, Você pode se cadastrar..")
	        break;
	    case 2:
	        break;
	    case 3:
	        break;
	    default:
	       printf("Erro");
	}
}