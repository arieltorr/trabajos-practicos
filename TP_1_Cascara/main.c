#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int numero1,numero2;
    int bandera1,bandera2;

    while(seguir=='s')
    {
        if (bandera1 ==1)
        {
         printf("1- Ingresar 1er operando (A=%d)\n", numero1);
        }
        else
        {
         printf("1- Ingresar 1er operando (A=x)\n");
        }

        if (bandera2 ==1)
        {
          printf("2- Ingresar 2do operando (B=%d)\n", numero2);
        }
        else
        {
          printf("2- Ingresar 2do operando (B=y)\n");
        }


        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        system("cls");

        switch(opcion)
        {
        case 1:
            printf("ingrese un numero: ");
            scanf("%d", &numero1);
            bandera1=1;


            system("cls");
            break;
        case 2:
            printf("ingrese un numero: ");
            scanf("%d", &numero2);
            bandera2=1;

            system("cls");
            break;
        case 3:

            if(bandera1==1 && bandera2==1 )
            {
                printf("la suma de ambos numeros es : %d \n", suma(numero1,numero2));
            }
            else
            {
                printf("reingrese un valor para poder efectuar la suma : \n");
            }
            system("PAUSE");
            system("cls");

            break;
        case 4:

            if(bandera1==1 && bandera2==1 )
            {
                printf("la resta de ambos numeros es : %d \n", resta(numero1,numero2));
            }
            else
            {
                printf("reingrese un valor para poder efectuar la resta : \n");
            }
            system("PAUSE");
            system("cls");
            break;
        case 5:

            if(bandera1==1 && bandera2==1 )

            {
                if(numero2==0)
                {
                printf("Error. no se puede dividir por 0, reingrese un segundo numero: \n");

                }
                else
                {
                printf("la division de ambos numeros es : %.2f \n", dividir(numero1,numero2));
                }

            }
            else
                {
                 printf("reingrese un valor para poder efectuar la division : \n");
                }

            system("PAUSE");
            system("cls");
            break;
        case 6:

            if(bandera1==1 && bandera2==1 )
            {
                printf("el producto de ambos numeros es : %d \n", producto(numero1,numero2));
            }
            else
            {
                printf("reingrese un valor para poder efectuar el producto : \n");
            }
            system("PAUSE");
            system("cls");
            break;
        case 7:

            if(bandera1==1)
            {
                printf("el factorial es: %d\n", factorial(numero1));
            }
            else
            {
                printf("reingrese un valor para poder efectuar el factorial : \n");
            }
            system("PAUSE");
            system("cls");
            break;
        case 8:

            if(bandera1==1 && bandera2==1 )
            {
                printf("la suma de ambos numeros es : %d \n", suma(numero1,numero2));
                printf("la resta de ambos numeros es : %d \n", resta(numero1,numero2));
                printf("la division de ambos numeros es : %.2f \n", dividir(numero1,numero2));
                printf("el producto de ambos numeros es : %d \n", producto(numero1,numero2));
                printf("el factorial es: %d\n", factorial(numero1));
            }
            else
            {
                printf("reingrese un valor para poder efectuar las operaciones : \n");
            }

            system("PAUSE");
            system("cls");

            break;
        case 9:
            seguir = 'n';
            break;
        }



    }
    return 0;
}

