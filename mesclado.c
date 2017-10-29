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
/*parte2*/
	int i,j;
	char nombre[100]; 
	char res;
	printf("Ingrese la palabra a cifrar:");
	scanf("%s",nombre);
	func(nombre);
	printf("%s", nombre);
	return 0;
}
