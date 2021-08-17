#include <stdio.h>
#include <stdlib.h>


int main() {

	//int vetor_x [10];
	
	int *vetor_x;
	vetor_x = (int *) malloc (10 * sizeof(int *));
	
	vetor_x [5] = 18;
	
	printf("%d\n", vetor_x[5]);
	
	//matriz_x [2][3];
	
	int **matriz_x, i;
	
	matriz_x = (int **) malloc (2 * sizeof(int *));
	
	for(i = 0; i < 3; i++) {
		matriz_x [i] = (int *) malloc (3 * sizeof(int));
	}
	
	matriz_x[0][1] = 876;
	
	printf("%d", matriz_x[0][1]);
	
	
	return 0;
}
