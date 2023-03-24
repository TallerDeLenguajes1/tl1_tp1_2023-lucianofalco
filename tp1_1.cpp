#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = 123 ;
    int * punteroA;
    punteroA = &a ;

    printf(" \n\npuntos 1), 2), 3), 4), 5)");
    printf("\n\nEl contenido del puntero es %p: \n" , punteroA);
    printf("La direccion de memoria almacenada en el puntero es: ----->  %p  <-----\n" , &a);
    printf("\nla dirección de memoria de la variable es %p: \n" , &punteroA);
    printf("\nla dirección de memoria del puntero es. %p: \n" , &punteroA);
    printf("El tamanio de memoria de 'a' es  : ---->%d<---- \n\n" , sizeof(&a) );


    return 0;
}
 

