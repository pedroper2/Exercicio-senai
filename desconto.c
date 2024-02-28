#include <stdio.h>
int main (){
	float numero, resultado,desconto;
printf("escreva um numero");
scanf("%f",&numero);

desconto= numero * 0.1;
resultado= numero - desconto; 

printf("O numero com um desconto de 10 porcento vai ficar: %.2f ",resultado);

return 0;
}
