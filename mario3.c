#include <cs50.h>
#include <stdio.h>

void escalera(int ancho); 

int main(void)
{
    
    int altura = get_int("Seleccione una altura: ");
    escalera(altura + 1); // básicamente le agregué uno más porque por alguna razón que no entiendo me estaba dando una hilera menos, así que esto fue como arreglarlo con cinta.

}

void escalera(int ancho){  
   for(int fila = 1; ancho > fila ; fila++){ // altura = ancho, porque es un cuadrado básicamente 
        for (int bloques = 1; ancho > bloques; bloques++){ //si el ancho es mayor a la cantidad de bloques entonces se le suma 1 bloque
            if (ancho - bloques > fila) { //ancho - bloques = número de espacios 
                printf(" ");
            }
            else{
                printf("█");
            }         
        } 
        printf("\n");
    }  
}

