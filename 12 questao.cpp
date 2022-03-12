#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int elev(int x, int z){
	int numero = 1;
	for(int i = 0; i < z; i++){
	numero *= x;
}
	return numero;
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil: ");
	
	int x, z, resposta;
	
	printf("Digite o primeiro valor:");
	scanf("%d", &x);
	
	printf("\nDigite o valor que sera elevado:");
	scanf("%d", &z);
	
	resposta = elev(x, z);
	
	printf("\t\nResposta: %d", resposta);
	
	return 0;
}

