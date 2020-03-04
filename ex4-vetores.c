#include<stdio.h>
#include<stdlib.h>

int main(){
	int vetor[40];
	int i, j, aux;
	
	for(i=0; i<40; i++){
		printf("Digite o %d valor: ", i + 1);
		scanf("%d", &vetor[i]);
	}
	
	for(i=0; i<40; i++){
		for (j=0; j<40; j++){
			if(vetor[j] > vetor[j + 1]){
				aux = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j + 1] = aux;
			}
		}
	}
	printf("\nNuemros ordenados:");
	for(i=0; i<40; i++){
		printf(" %d ", vetor[i]);
	}
	
	
	
	return 0;
	
}
