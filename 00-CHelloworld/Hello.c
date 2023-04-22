#include <stdio.h> 
#include <stdlib.h>

main() { 
    FILE *archivo;
    char caracter;
    
    archivo=fopen("output.txt", "r");
    if(archivo==NULL){
    	printf("Error en la apertura del archivo\n");
	} else {
		while(feof(archivo)==0){
			caracter=fgetc(archivo);
			printf("%c", caracter);
		}
	}
	fclose(archivo);
	getch();
	return 0;
}
