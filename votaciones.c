/*
Programa en c que calcule las votaciones en tiempo real de 3 comunidades cada voto se da por el ID del candidato ejemplo:

candidato1: 3345
candidato2: 3848
candidato3: 1059

La votacion termina cuando el ID es cero se presenta mostar resultado de elecciones por candidato, el total y pedir nombres y id.
*/

#include <stdio.h>
#include <windows.h>

int main() {
	
	int voto, nvoto = 0, id1, id2, id3, conteo1, conteo2, conteo3, nulo;
	
	char candidato1 [10];
	char candidato2 [10];
	char candidato3 [10];
	
	printf("Ingrese el nombre del candidato 1 \n\n");
	scanf("%s",candidato1);
	printf("Ingrese el ID del candidato 1 \n\n");
	scanf("%d",&id1);
	printf("Ingrese el nombre del candidato 2 \n\n");
	scanf("%s",candidato2);
	printf("Ingrese el ID del candidato 2 \n\n");
	scanf("%d",&id2);
	printf("Ingrese el nombre del candidato 3 \n\n");
	scanf("%s",candidato3);
	printf("Ingrese el ID del candidato 3 \n\n");
	scanf("%d",&id3);
	
	printf("Este programa lleva  el registro de votaciones en tiempo real para contar su voto debe ingresar el ID del candidato por el que va a votar. \n\n");
	printf("La lista de candidatos es: \n\n");
	printf("Nombre: %s ID: %d \n\n", candidato1, id1);
	printf("Nombre: %s ID: %d \n\n", candidato2, id2);
	printf("Nombre: %s ID: %d \n\n", candidato3, id3);
	
	do{
		printf("A continuacion ingresa el ID del candidato a votar. Ingresa 0 cuando termines. \n\n");
		scanf("%d",&voto);
		if(voto == id1){
			conteo1++;
		}
		else if(voto == id2){
			conteo2++;
		}
		else if(voto == id3){
			conteo3++;
		}
		else if(voto != 0){
			nulo++;
		}
	} while(voto !=0);
	nvoto = conteo1 + conteo2 + conteo3;
	printf("El numero de votos fue: %d \n\n", nvoto);
	
	system ("pause");
	return 0;
}
