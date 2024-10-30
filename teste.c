#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Strings


int main(){

    setlocale(LC_ALL, "Portuguese");

	char name[10];
	char word[10];

	printf("Digite o seu nome: ");
	scanf("%s", &name); //%c para CARACTER e "&" é o endereço da memória da variável

	printf("Digite uma palavra: ");
	scanf("%s", &word); // %s STRING

    printf("O nome é: %s\n", name);
	printf("A palavra é: %s\n", word);

	strcpy(word, name); // Variável de destino vai receber o conteúdo da variável de origem

	printf("O nome é: %s\n", name);
	printf("A palavra é: %s\n", word);


	system("pause");
	return 0;
}
