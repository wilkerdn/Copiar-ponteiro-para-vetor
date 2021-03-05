#include <stdio.h>

int main(){
	int i;
	int *ponteiro;
	int vetor[5];
	
	ponteiro = vetor;
	
	for (i = 0; i < 5; i++){
		scanf("%d",&ponteiro[i]);
	}
	
	printf("vetor: ");
	for (i = 0; i < 5; i++){
		printf("%d ", vetor[i]);
	}
	
	printf("\nponteiro: ");
	for (i = 0; i < 5; i++){
		printf("%d ", *(ponteiro + i));
	}
	printf("\n");
	
	return 0;
}