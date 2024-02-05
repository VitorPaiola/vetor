#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "");
	setlocale(LC_NUMERIC, "en_US.UTF-8");

	// Crie um algoritmo que leia 3 valores para um vetor de 3 posi��es
	// e depois calcule a m�dia dos valores acessando o vetor

	int tamanho;
	printf("Qual ser� o tamanho do vetor: ");
	scanf_s("%d", &tamanho);

	float* vetor = (float*)malloc(tamanho * sizeof(float));
	if (vetor == NULL) {
		printf("Erro ao alocar mem�ria.\n");
		return 1;
	}

	float soma = 0.0; 
	
	for (int i = 0; i < tamanho; i++) {
		printf("Digite um valor no �ndice %d: ", i);
		scanf_s("%f", &vetor[i]);
		soma += vetor[i];
	}

	for (int i = 0; i < tamanho; i++) {
		printf("\nvetor[%d] = %.1f\n", i,vetor[i]);
	}

	printf("\nA m�dia dos valores �: %.2f", soma / tamanho);

	free(vetor); // Libera a mem�ria alocada
}