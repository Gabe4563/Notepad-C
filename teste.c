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
	scanf("%s", &name); //%c para CARACTER e "&" � o endere�o da mem�ria da vari�vel

	printf("Digite uma palavra: ");
	scanf("%s", &word); // %s STRING

    printf("O nome �: %s\n", name);
	printf("A palavra �: %s\n", word);

	strcpy(word, name); // Vari�vel de destino vai receber o conte�do da vari�vel de origem

	printf("O nome �: %s\n", name);
	printf("A palavra �: %s\n", word);


	system("pause");
	return 0;
}
