#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float deposito, juros, total, rendimento;
	
	printf("Valor deposito: ");
		scanf("%f", &deposito);
	printf("Taxa de juros: ");
		scanf("%f", &juros);
	rendimento=deposito*juros/100;
		total=deposito+rendimento;
	
	printf("\n \n \n Rendimento: %.2f \n\%", rendimento);
	printf("Total pos rendimento: %.2f", total);
	return 0;
}

