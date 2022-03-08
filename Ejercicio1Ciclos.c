#include <stdio.h>

int perfecto(int);

int maindgd()
{

    int numerop;

    do
    {
        printf("Tu numero es:");
        scanf("%d", &numerop);

        perfecto(numerop);

        if (perfecto(numerop) == 1)
            printf("El numero %d es perfecto\n", numerop);
        else
            printf("El numero %d no es perfecto\n", numerop);
    }
    while (numerop != 0);

    return 0;

}

int perfecto (int numerop)
{
    int calculo=0;
    for(int i=1; i < numerop; i++)
    {
        if(numerop %i == 0)
        calculo = calculo+i;
    }
    if (calculo == numerop)
        return 1;
    else
        return 0;
}


