#include <stdio.h>
int main (){
	int numero;
	
	printf("escreva um numeiro inteiro");
	scanf("%i",&numero);
	
	if (numero %2 == 0){
	
		printf("o numero e par");
	}
	else{
	
		printf("o numero e impar");
	}
	return 0;
}
