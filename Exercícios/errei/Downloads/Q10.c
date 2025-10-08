#include <stdio.h>
#include <math.h>
int main() {
	double a, b, c, delta, x1, x2;
	 printf("Digite o valor de a: ");
    scanf("%lf", &a);

    printf("Digite o valor de b: ");
    scanf("%lf", &b);

    printf("Digite o valor de c: ");
    scanf("%lf", &c);
    
    if (a == 0) {
        printf("Nao eh uma equacao do segundo grau.\n");
    } else {
    delta= b*b-4*a*c;
    
    if(delta>0){
		x1= (-b+ sqrt(delta))/ (2*a);
		x2= (-b- sqrt(delta))/ (2*a);
		printf("Duas raizes reais: %.2lf e %.2lf\n", x1, x2);
	} else if(delta==0){
		x1= -b/ (2*a);
		printf("Uma raiz real: %.2lf\n", x1);
	} else {
		 printf("Nao existem raizes reais.\n");
	}
	}
	return 0;
}