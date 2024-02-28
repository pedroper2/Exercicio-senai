#include <stdio.h>
int main(){
	float salario,minimo,quantidadeSalario;
	
	printf("digite seu salario ");
	scanf("%f",&salario);
	
	minimo= 1412;
	quantidadeSalario= salario/minimo;
	
	printf("voce ganha : %.0f",quantidadeSalario);
	
}
