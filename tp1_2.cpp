#include<stdio.h>
#include<stdlib.h>

float cuadrado(float numero);
void cuadrado_2 ();
void Invertir(int a, int b);
void orden(int a, int b);

int main(int argc, char const *argv[])
{
    float x , resultado ; 
    int a , b ;
    /*system("cls");
    printf("\nIngrese un numero para calcular su cuadrado\n");
    scanf("%f" , &x);
    resultado = cuadrado(x);
    printf("El resultado es : %f \n" , resultado);*/
    //cuadrado_2();
    printf("\nnigrese el primer valor\n");
    scanf("%d" , &a);
    printf("\ningrese el segundo valor\n");
    scanf("%d" , &b);
    Invertir(a,b);
    orden(a , b);

    return 0;
}

float cuadrado(float numero){
    float auxiliar ;
    auxiliar = numero * numero ;
    return auxiliar;
}
void cuadrado_2 (){
    float x , resultado ;

    printf("\nIngrese un numero para calcular su cuadrado\n");
    scanf("%f" , &x);
    resultado = x * x ;
    printf("El resultado es : %f \n" , resultado);
}
void Invertir(int a, int b){
    int auxiliar ;
    printf("\nLos valores dados son:(%d , %d)\n" , a , b);
    auxiliar = a ; 
    a= b;
    b= auxiliar ;
    printf("\nLos valores invertidos son:(%d , %d)\n" , a , b);
}

void orden(int a, int b){
    if (a <= b)
    {
        printf ("(%d , %d)" , a , b);
    }
    else printf("(%d , %d)",  b, a );
    
}