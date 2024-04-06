#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char palavra[120];
	int tamanho;
	
	printf("Digite a palavra que deseja inverter: ");
	fgets(palavra, sizeof(palavra), stdin);
	
	tamanho = strlen(palavra);
	
	for(int i = tamanho - 1; i >= 0; i--){
		printf("%c", palavra[i]);
	}
	printf("\n");
	
	return 0;
}
