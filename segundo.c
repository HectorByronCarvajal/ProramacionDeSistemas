/* */
#include <stdio.h>
#include <string.h>
#define MAX 100 

char* func(char* nombre);

int main(){
	int i,j;
	char nombre[100]; 
	char res;
	printf("Ingrese la palabra a cifrar:");
	scanf("%s",nombre);
	func(nombre);
	printf("%s", nombre);
	return 0;
}

char* func(char* nombre){
	for (int i=0; i<strlen(nombre);i++){
		if (nombre[i]=='\0'){
			break;
		} 	
		if(((int)nombre[i]>=65 && (int)nombre[i]<90) || ((int)nombre[i]>=97 && (int)nombre[i]<122)){ 
		
				nombre[i]= (int)nombre[i]+3;
		
		}
		else if ( (int)nombre[i]== 90){
			nombre[i]=65;	
		
		}else if ((int)nombre[i]==122){
			nombre[i]=97;	
	
		}	

		}
	return nombre;
}

