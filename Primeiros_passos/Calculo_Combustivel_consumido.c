#include <stdio.h>
#include <stdlib.h>
#define consumo 12  //Consumo médio do veículo.

int main(){
	int tempo, velocidade, distancia, litros_usados, consumo_medio;

//Input
	puts("Quanto tempo durou a viagem?");
	scanf("%d", &tempo);
	fflush(stdin);
	puts("Qual a velocidade media durante a viagem?");
	scanf("%d", &velocidade);
	fflush(stdin);

//Data Processing
	distancia = tempo * velocidade;
	litros_usados = distancia / consumo;
	consumo_medio = distancia / litros_usados;
    
//Output
	printf("A viagem durou %d horas.\n", tempo);
	printf("A velocidade media foi de %d km/h.\n", velocidade);
	printf("A distancia percorrida foi de %d km.\n", distancia);
	printf("O veiculo consumiu %d litros de gasolina.\n", litros_usados);

	system("pause");
	return 0;

}