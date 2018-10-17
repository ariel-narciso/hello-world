#include <stdio.h>
#include <stdlib.h>

int *novo(int *vetor, int h, int l) {
	
	int i, *p, m;
	
	for (i = m = 0, p = (int *)realloc(NULL, sizeof(int)); i < 10; i++) {
		
		if (*(vetor + i) >= l && *(vetor + i) <= h) {
		
			*p += 1;
		
			p = (int *)realloc(p, sizeof(int));
			*(p + ++m) = *(vetor + i);
		}
	}
	
	return (p);
}

int main(void) {
	
	int v[10], i, *n, max, min;
	
	for (i = 0; i < 10; i++) {
		
		printf("Digite o %do. valor do vetor: ", i + 1);
		scanf("%d", v + i);
	}
	
	printf("Digite o valor maximo: ");
	scanf("%d", &max);
	printf("Digite o valor minimo: ");
	scanf("%d", &min);
	
	n = novo(v, max, min);
	
	for (i = 0; i < *n; i++) {
		printf("Valor do %do. elemento do novo vetor: %d\n", i + 1, *(n + i + 1));
	}
	
	return (0);
}












