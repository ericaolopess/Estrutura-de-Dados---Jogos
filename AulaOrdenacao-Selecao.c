#include <stdio.h>

int main(void) 
{
	int i, j, indice, maior;
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
	
	for(i=VEC_SIZE-1; i>0; i--)
	{
		maior= vetor[0];
		indice = 0;
		
		for(j=1; j<= i; j++)
		{
			if(vetor[j] > maior)
			{
				maior = vetor[j];
				indice = j;
			}	
		}
		
		vetor[indice] = vetor[i];
		vetor[i] = maior;
	}

	printf("\n\n***********************\n\n");
	
	for(i=0; i<VEC_SIZE; i++)
	{	
		printf("\nvetor [%d] = %d", i, vetor[i]);
		
	}

}
