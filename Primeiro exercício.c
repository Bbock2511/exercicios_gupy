#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	int indice = 13; 
	int soma = 0;
	int k = 0;
	
	while (k < indice){
		k = k+1;
		soma = soma + k;
	}
	
	printf("%d", soma);
	return 0;
}
