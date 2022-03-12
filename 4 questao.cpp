#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int raio_esfera(int r) {
	int v;
	v = 4/3 * (r * r * r);
	return v;
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil: ");
	
	int raio, resultado;
	
	printf("Digite o raio da esfera: ");
	scanf("%d", &raio);
	
	resultado = raio_esfera(raio);
	
	printf("\nO volume do raio %d ficara: %d", raio, resultado);
	
	return 0;
}
