#include <stdio.h>

int main(){
	int n1,n2,Adicao;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	Adicao=n1+n2;
	
	if (Adicao>50){
		printf("Resultado= %d", Adicao);
	}
	
	return 0;
}