#include <stdio.h>

int main(void) 
{
	int a, b, i, aux;
	int VEC_SIZE;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &VEC_SIZE);

	int vetor[VEC_SIZE];
	
	//inserir dados no vetor
	for(i=0; i<VEC_SIZE; i++)
	{	
		printf("Digite o %d numero:", i);
		scanf("%d", &vetor[i]);
		
	}
	
	for(a=VEC_SIZE-1; a>0; a--)
	{
		printf("\n vetor[%d]", a);
		
		for(b=0; b<a; b++)
		{
			printf("%d, ", b);
		
			if(vetor[b] > vetor[b+1])
			{
				aux = vetor[b];
				vetor[b] = vetor[b+1];
				vetor[b+1] = aux;
			}	
		}	
			
	}
	
	printf("\n\nVetor ordenado \n\n");
	
	for(i=0; i<VEC_SIZE; i++)
	{	
		printf("\nvetor [%d] = %d", i, vetor[i]);
		
	}

}
