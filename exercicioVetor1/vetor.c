#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "");
	setlocale(LC_NUMERIC, "en_US.UTF-8");

	// Crie um algoritmo que leia 3 valores para um vetor de 3 posições
	// e depois calcule a média dos valores acessando o vetor

	int tamanho;
	printf("Qual será o tamanho do vetor: ");
	scanf_s("%d", &tamanho);

	float* vetor = (float*)malloc(tamanho * sizeof(float));
	if (vetor == NULL) {
		printf("Erro ao alocar memória.\n");
		return 1;
	}

	float soma = 0.0; 
	
	for (int i = 0; i < tamanho; i++) {
		printf("Digite um valor no índice %d: ", i);
		scanf_s("%f", &vetor[i]);
		soma += vetor[i];
	}

	for (int i = 0; i < tamanho; i++) {
		printf("\nvetor[%d] = %.1f\n", i,vetor[i]);
	}

	printf("\nA média dos valores é: %.2f", soma / tamanho);

	free(vetor); // Libera a memória alocada
}