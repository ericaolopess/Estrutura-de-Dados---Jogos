#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//criar duas variáveis que serão ordenadas
	int a, b, c;
	
	printf("Digite um numero:");
	scanf("%d", &a);
	
	printf("Digite outro numero:");
	scanf("%d", &b);
	
	printf("Digite mais um numero:");
	scanf("%d", &c);
	
	printf("\n\n**** Ordenacao em ordem crescente ****\n\n");

	if(a<=b && b<=c)
	{
		printf("%d - %d - %d", a, b, c);
	}
	else if(a<=c && c<=b)
	{
		printf("%d - %d - %d", a, c, b);
	}
	else if (b<=a && a<=c)
	{
		printf("%d - %d - %d", b, a, c);
	}	
	else if (b<=c && c<=a)
	{
		printf("%d - %d - %d", b, c, a);
	}	
	else if (c<=a && a<=b)
	{
		printf("%d - %d - %d", c, a, b);
	}	
	else
	{
		printf("%d - %d - %d", c, b, a);
	}
	
	return 0;
}




