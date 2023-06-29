//bibliotecas
#include <stdio.h>

//funcoes
int somar(int a, int b){
	return a+b;
}

//codigo main
int main(){
	//declaracao de variaveis
	int a, b;
	
	//entrada dos dados
	printf("Entre com o primeiro digito: ");
	scanf("%d",&a);
	printf("Entre com o segundo digito: ");
	scanf("%d",&b);
	
	//visualizacao do resultado
	printf("Resultado: %d",somar(a,b));
	
	return 0;
}
