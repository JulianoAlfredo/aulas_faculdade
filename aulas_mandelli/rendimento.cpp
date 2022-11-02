#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int ano_nascimento, ano_previsao, idade_prevista, idade_programada;

	printf("Digite o ano de nascimento: ");
		scanf("%d", &ano_nascimento);
	printf("Digite o ano de previsao de idade: ");
		scanf("%d", &ano_previsao);
		
	idade_prevista=ano_previsao - ano_nascimento;
	idade_programada=2040-ano_nascimento;
	
	printf("A idade prevista no ano previsto: %d", idade_prevista);
	printf("\n A idade prevista em 2040: %d", idade_programada);
	
}


/*   RENDIMENTO DO BANCO
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
*/
