#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Heroi{
	
	int id;
	int hp; // 50-100
	int atk; // 1-20
	int def; // 1-20
	int spd; // 1-20
};

int comparacao(const void *, const void *);
int busca(int *v, int t, int k);

int main(void) {
	
	int n, i;
	struct Heroi *boku;
	srand(time(0));
	
	printf("Digite a quantidade de herois: ");
	scanf("%d", &n);
	
	boku = (struct Heroi *)malloc(n * sizeof(struct Heroi));
	
	for (i = 0; i < n; i++) {
		
		printf("Digite o ID do %do. heroi: ", i+1);
		scanf("%d", &(*(boku + i)).id);
		
		if (busca(boku, i, (*(boku + i)).id) == -1) {
			i--;
			continue;
		}		
		
		(*(boku + i)).hp = 50 + rand() % 51;
		(*(boku + i)).atk = 1 + rand() % 21;
		(*(boku + i)).def = 1 + rand() % 21;
		(*(boku + i)).spd = 1 + rand() % 21;
	}
	
	return (0);
}

int comparacao(const void *a, const void *b) {
	
	return *(int *)a - *(int *)b;
}


int busca(int *v, int t, int k) {
	
	int i;
	for (i = 0; i < t; i++) {
		
		if (*(v + i) == k) {
			return (i);
		}
	}
	
	return (-1);
}

