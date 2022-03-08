#include "stdio.h"

int numeromayor (int, int);
int numeromenor (int, int);

#define N 10

int main()
{
    int numero, mayor=0, menor=0;

    mayor = numeromayor(numero, mayor);
    menor = numeromenor(numero, menor);

    printf("El mayor es: %d\n", mayor);
    printf("El menor es: %d", menor);
1
    return 0;

}


int numeromayor (int numero, int mayor)
{


    printf("Numero:");
    scanf("%d", &numero);
    printf("%d\n",numero);

    mayor = numero;

    for( int i=2; i <= N; i++ )
    {
        printf("Numero:");
        scanf("%d", &numero);
        printf("%d\n",numero);


        if ( numero > mayor)
        {
            mayor = numero;
        }

    }
    return mayor;
}

int numeromenor (int numero, int menor)
{


    printf("Numero:");
    scanf("%d", &numero);
    printf("%d\n",numero);

    menor = numero;

    for( int i=2; i <= N; i++ )
    {
        printf("Numero:");
        scanf("%d", &numero);
        printf("%d\n",numero);


        if (numero < menor)
        {
            menor = numero;
        }

    }
    return menor;
}

