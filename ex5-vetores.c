#include<stdio.h>
#include<stdlib.h>

int main(){
	int i, vetor[5]; 
	float media=0;
	
	for(i=0; i<5; i++){
		printf("Digite o %d valor: ",i+1);
		scanf("%d", &vetor[i]);
		media += vetor[i];
	} 
	
	media = media/i;
	printf("\nMedia: %.2f", media);
	
	
	return 0;
}
