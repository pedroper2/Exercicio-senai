#include <stdio.h>
void cabecalho(){
	system ("cls || clear"); // limpar terminal
	printf(" \n === Senai === \n");
}
int main (){
	
	//declarando variavél
	char nome [200];
	float primeiraNota,segundaNota,terceiraNota,quartaNota,soma,med;
	//coletando informação
	cabecalho();
	printf("escreva seu nome ");
	scanf("%s",nome); 
	
	cabecalho();
	printf("escreva a primeira nota");
	scanf("%f",&primeiraNota);
	
	printf("escreva a segunda nota");
	scanf("%f",&segundaNota);
	
	printf("escreva a terceira nota");
	scanf("%f",&terceiraNota);
	
	printf("escreva a quarta nota");
	scanf("%f",&quartaNota);
	cabecalho();
	//calculo
	soma= primeiraNota + segundaNota + terceiraNota + quartaNota;
	med= soma / 4;
	//declarando resultado
	printf("sua media é : %f",med);
	
	return 0;
	
}
