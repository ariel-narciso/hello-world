#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int i, *v, n;
	
	v = (int *)malloc(5 * sizeof(int));
	
	for (i = 0; i < 5; i++) {
		
		printf("Digite o %d-esimo valor: ", i + 1);
		scanf("%d", v + i);
	}
	
	printf("Digite a quantidade de novos elemento: ");
	scanf("%d", &n);
	
	if (n > 0) {
		
		v = (int *)realloc(v, n * sizeof(int));
		
		for (; i < 5 + n; i++) {
			
			printf("Digite o %d-esimo valor: ", i + 1);
			scanf("%d", v + i);
		}
	}
	
	for (i = 0; i < 5 + n; i++) {
		
		printf("Valor do %do. elemento: %d\n", i + 1, *(v + i));
	}
	
	return (0);
}
