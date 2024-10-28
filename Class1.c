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
	bool ativo = false;
	int i;
	
	// Estruturas de repetição
	// Função | Métedo
	for(i = 0; i <= 10; i++) {
	    printf("%d\n", i);
	}
	
	while(!ativo){
	    printf("Olá, você está ativo");
		ativo = true;
	}
}