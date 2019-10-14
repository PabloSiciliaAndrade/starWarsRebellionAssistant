#include <stdio.h>

int TirarDadosMision(int NumeroDeDados, int puntos);
int TirarDadosCombate(int Dados);
int combate();

int Op,i;
int DadosRojosAtacante, DadosNegrosAtacante, DadosAtacante, PuntosAtacante;
int DadosRojosDefensor, DadosNegrosDefensor, DadosDefensor, PuntosDefensor;

int main(int argc, char const *argv[])
{
	printf("1: intentar mision \n");
	printf("2: combate \n");
	scanf("%d", &Op);
	if (Op == 1)
	{
		printf("con cuantos dados atacas?\n");
		scanf("%d",&DadosAtacante);
		printf("con cuantos defiendes?\n");
		scanf("%d",&DadosDefensor);
		printf("cuantos puntos bonus tiene el atacante?\n");
		scanf("%d",&PuntosAtacante);
		printf("cuantos puntos bonus tiene el defensor?\n");
		scanf("%d",&PuntosDefensor);
		printf("los resultados de los dados del atcante son:\n %d \n", TirarDadosMision(DadosAtacante, PuntosAtacante));
		printf("los resultados de los dados del defensor son:\n %d \n", TirarDadosMision(DadosDefensor, PuntosDefensor));
		system("PAUSE");
	}else{
		if (Op == 2)
		{
			printf("inicio de ronda espacial\n");
			system("PAUSE");
			combate();

			printf("inicio de ronda terrestre\n");
			system("PAUSE");
			combate();

		}
	}
	return 0;
}
int combate(){
	printf("dados rojos y negros del atacante: \n");
	scanf("%d %d",&DadosRojosAtacante, &DadosNegrosAtacante);

	printf("dados rojos del defensor:\n");
	scanf("%d",&DadosRojosDefensor);
	printf("dados negros del defensor:\n");
	scanf("%d",&DadosNegrosDefensor);


	printf("los dados rojos del atacante fueron:\n");
	TirarDadosCombate(DadosRojosAtacante);
	printf("los dados negros del atacante fueron:\n");
	TirarDadosCombate( DadosNegrosAtacante);

	printf("los dados rojos del defensor fueron:\n");
	TirarDadosCombate( DadosRojosDefensor);
	printf("los dados negros del defensor fueron:\n");
	TirarDadosCombate( DadosNegrosDefensor);


}

int TirarDadosCombate(int Dados){
	for ( i = 0; i < Dados; ++i){
		int DiceResult = rand() % 6;
		switch(DiceResult){
			case 0:
				printf("fallo \n");
				break;
			case 1:
				printf("fallo \n");
				break;
			case 2:
				printf("daño \n");
				break;
			case 3:
				printf("daño \n");
				break;
			case 4:
				printf("impacto directo \n");
				break;
			case 5:
				printf("especial \n");
				break;
		}
	}
	return 0;	
}





int TirarDadosMision(int NumeroDeDados, int puntos){
	for ( i = 0; i < NumeroDeDados; ++i){
		int DiceResult = rand() % 6;
		switch(DiceResult){
			case 0:
				printf("fallo\n");
				break;
			case 1:
				printf("fallo\n");
				break;
			case 2:
				printf("un punto\n");
				puntos += 1;
				break;
			case 3:
				printf("un punto\n");
				puntos += 1;
				break;
			case 4:
				printf("un punto\n");
				puntos += 1;
				break;
			case 5:
				printf("dos puntos\n");
				puntos += 2;
				break;
		}
	}
	return puntos;	
}
