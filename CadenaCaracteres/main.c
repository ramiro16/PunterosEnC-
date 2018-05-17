#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char nombre[11]="MiNombre";
    char *apellido="MiApellido";
    char *puntero;

    puntero = nombre;

    printf("\n%s",nombre);
    printf("\n%s",apellido);

   //printf("\n%s",*puntero);//no se puede mostrar con %s
    printf("\n%s\n\n",puntero);

    for(i=0;*(apellido+i)!= '\0';i++)
    {

            printf("\n%c",*(apellido+i));

    }


    printf("\n\n%s\n\n",apellido);
    return 0;
}
