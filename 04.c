#include <stdio.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");

	int c;
	float p;
	char x;
	
	printf("\nDigite 'r' para selcionar Residencia");
	printf("\nDigite 'i' para selcionar Industria");
	printf("\nDigite 'c' para selcionar Comercio");
	printf("\nDigite sua opcao:");
	x= getchar();
	switch(x){
		case'R':
		case'r':
			printf("\nEscolheu Residencia");
			printf("\nInforme o consumo de KWh: ");
			scanf("%d", &c);
		if(c <= 500){
			p = c * 0.4;
			printf("\nPreco a ser pago: %.2f", p);	
		}
		if(c > 500){
		p= c * 0.65;
		printf("\nPreco a ser pago: %.2f", p);
		}
	break;
		case'I':
		case'i':
			printf("\nEscolheu Industria");
			printf("\nInforme o consumo de KWh: ");
			scanf("%d", &c);
			p = c * 0.55;
		if(c <= 1000){
			p = c * 0.55;
			printf("\nPreco a ser pago: %.2f", p);
		}
		if(c > 1000){
		p = c * 0.6;
		printf("\nPreco a ser pago: %.2f", p);
		}
	break;
		case'C':
		case'c':
			printf("\nEscolheu Comercio");
			printf("\nInforme o consumo de KWh: ");
			scanf("%d", &c);
			p = c * 0.55;
		if(c <= 5000){
			p = c * 0.55;
			printf("\nPreco a ser pago: %.2f", p);
		}
		if(c > 5000){
		p = c * 0.6;
		printf("\nPreco a ser pago: %.2f", p);
		}
	break;
		default:
		printf("\nOpcao invalida! Tente novamente.");
			
}
}
