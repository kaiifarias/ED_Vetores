#include<stdio.h>
#include<stdlib.h>

 int main(){
	
	int i, maior=0, vetor[10];
	
	printf("Digite o 1 valor: ");
	scanf("%d", &vetor[0]);
	maior = vetor[0];
	
	for(i=1; i<10; i++){
		printf("Digite o %d valor: ", i + 1);
		scanf("%d", &vetor[i]);
		if (vetor[i] > maior )
			maior = vetor[i];
	}
	
	printf("\nMaior valor: %d", maior);
	return 0;
}
