#include <stdio.h>
#include <stdlib.h>

int main(){

    int v1[10], v2[10];
    int i, j, k = 0;
	
	for(i=0; i<10; i++){
		scanf("%d", &v1[i]);
	}
 
    for( i=0; i<10; i++){
        for(j=0; j<k; j++){
            if( v1[i] == v2[j])
                break;
        }

        if(j == k){
            v2[k] = v1[i];
            k++;
        }
    }

    printf("\nVetor 1: ");
    for(i=0; i<10; i++)
        printf("%d ", v1[i] );
    	
	printf("\nVetor 2: ");
    for(i=0; i<k; i++)
        printf("%d ", v2[i] );
		    
	return 0;
}
