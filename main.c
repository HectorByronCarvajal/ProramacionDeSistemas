#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones_cripto.h"

#define MAX 100
/*
Hector Carvajal
Xavier Idrovo
*/
int main(){
	char nombre[MAX]; 
	int avance;
	printf("Ingrese la palabra a cifrar:\t\t");
	scanf("%s",nombre);
	printf("\nIngrese el avance que le quiere dar:\t");
	scanf("%d", &avance);	
	cifrado_ciclico(nombre,avance);
	printf("Ciclico:\t%s\n", nombre);
	printf("Codigo morse: \t"); stringToMorse(nombre);
	printf("\n");
	printf("\n");
/*
Parte 3 solo le agrege un valor por defecto que es 3
*/
	cifrado_aciclico(nombre);
	printf("aCiclico:\t%s\n", nombre);
	printf("Codigo morse: \t"); stringToMorse(nombre);
	printf("\n");


/*
Parte 1
*/

	int i,j; 
	char res;
	printf("La palabra cifrada es :");
	func(nombre);
	printf("%s", nombre);
	printf("\n");
	
	return 0;

}
