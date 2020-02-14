#include<stdio.h>

int main() {
	int d, p;

	printf("-Entrada: ");
	scanf("%i", &d);

	if(d<=0&&d>=2000) {
		printf("\n-ERRO FATAL! Valor Inválido!");
	}

	else {
		if(d<=800) {
			p = 1;
		}

		else if(d<=1400&&d>800) {
			p = 2;
		}

		else {
			p = 3;
		}
		printf("\n-Saída: %i ", p);
	}
	printf("\n");

	return 0;
}
