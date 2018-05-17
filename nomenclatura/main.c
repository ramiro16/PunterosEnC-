#include <stdio.h>
#include <stdlib.h>

int main()
{
    //punteros
    int *punteroNumero; //No es un entero es un puntero a entero
    int numero;
    int numeroDos;

    numero = 66;
    numeroDos = &numero;

    //*punteroNumero = &numero;
    //*punteroNumero = 55;

    //numeroDos = &numero;//asignacion de memoria
    //printf("\n a- %d",numeroDos);

    //numeroDos = *punteroNumero; //asignacion de valor
    //printf("\n b- %d",numeroDos);

    printf("\n%d",numero);
    printf("\n%d",numeroDos);
    printf("\n%d",&numero);
    printf("\n%d",punteroNumero);
    printf("\n%d",&punteroNumero);
    //printf("\n%d",*punteroNumero);
    //printf("%d",*punteroNumero);



    /*printf("\n\n%p",&numero); //%p muestra la direccion del puntero, (en notacion de puntero) en hexadecimal
    printf("\n%p",punteroNumero);
    printf("\n%p",&punteroNumero);
    */

   //SI EL PUNTERO APUNTA A UNA DIRRECION QUE INICIALIZAMOS SIN VALOR PINCHA EL PROGRAMA. SE DEBE INICIALIZAR EN NULL

    return 0;
}
