#include <stdio.h>

int TirarDadosMision(int NumeroDeDados, int puntos);
int TirarDadosCombate(int DadosRojos, int DadosNegros);
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
			do{
			printf("inicio de ronda espacial\n");
			system("PAUSE");
			printf("dados rojos del atacante:\n");
			scanf("%d",&DadosRojosAtacante);
			printf("dados negros del atacante:\n");
			scanf("%d",&DadosNegrosAtacante);

			printf("dados rojos del defensor:\n");
			scanf("%d",&DadosRojosDefensor);
			printf("dados negros del defensor:\n");
			scanf("%d",&DadosNegrosDefensor);

			printf("inicio de ronda terrestre\n");
			system("PAUSE");
			

			}while();

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