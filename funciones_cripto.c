#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* cifrado_ciclico(char* nombre, int avance){
	
	int fixedAdvance = avance;
	//Esto evitara el sobrepase del vocabulario.
	while (fixedAdvance > 25){
		fixedAdvance = fixedAdvance - 25;
	}
	for (int i=0; i<strlen(nombre);i++){
		if (nombre[i]=='\0'){
			break;
		}
		 	
		if(((int)nombre[i]>=65 && (int)nombre[i]<90) || ((int)nombre[i]>=97 && (int)nombre[i]<122)){ 
		
			nombre[i]= (int)nombre[i] + fixedAdvance;
		
		}
		if( ( (int)nombre[i] >= 90 && (int)nombre[i] < 97 ) || (int)nombre[i] > 122){
			nombre[i] = (int)nombre[i] - 25;
		}	
	}
	return nombre;
}


char* cifrado_aciclico(char* nombre){
	
	int fixedAdvance = 3;
	//Esto evitara el sobrepase del vocabulario.
	while (fixedAdvance > 25){
		fixedAdvance = fixedAdvance - 25;
	}
	for (int i=0; i<strlen(nombre);i++){
		if (nombre[i]=='\0'){
			break;
		}
		 	
		if(((int)nombre[i]>=65 && (int)nombre[i]<90) || ((int)nombre[i]>=97 && (int)nombre[i]<122)){ 
		
			nombre[i]= (int)nombre[i] + fixedAdvance;
		
		}
		if( ( (int)nombre[i] >= 90 && (int)nombre[i] < 97 ) || (int)nombre[i] > 122){
			nombre[i] = (int)nombre[i] - 25;
		}	
	}
	return nombre;
}



char* charToMorse(char letra){
	switch (letra){
	
		case 'A':
			return ".-";
		case 'B': 
			return "-...";
		case 'C': 
			return "-.-.";
		case 'D': 
			return "-..";
		case 'E': 
			return ".";
		case 'F': 
			return "..-.";
		case 'G': 
			return "--.";
		case 'H': 
			return "....";
		case 'I': 
			return "..";
		case 'J': 
			return ".---";
		case 'K': 
			return "-.-";
		case 'L': 
			return ".-..";
		case 'M': 
			return "--";
		case 'N': 
			return "-.";
		case 'O': 
			return "---";
		case 'P': 
			return ".--.";
		case 'Q': 
			return "--.-";
		case 'R': 
			return ".-.";
		case 'S': 
			return "...";
		case 'T': 
			return "-";
		case 'U': 
			return "..-";
		case 'V': 
			return "...-";
		case 'W': 
			return ".--";
		case 'X': 
			return "-..-";
		case 'Y': 
			return "-.--";
		case 'Z': 
			return "--..";
		case '0':
			return "-----";
		case '1': 
			return ".----";
		case '2': 
			return "..---";
		case '3': 
			return "...--";
		case '4': 
			return "....-";
		case '5': 
			return ".....";
		case '6': 
			return "-....";
		case '7': 
			return "--...";
		case '8': 
			return "---..";
		case '9': 
			return "----.";	
		default:
			return "\n";
		}
	}
void stringToMorse(char* Palabra){
	for(int x = 0; x < strlen(Palabra); x++){			
		printf("%s", charToMorse( (char)toupper((int)Palabra[x]) ) );
		printf("/");
	}
	return;
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



