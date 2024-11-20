#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <locale.h>

// Sistema de banco de dados simples, seleciona vendedores por região.

int main (int argc, char *argv[]) {

    setlocale(LC_ALL,"portuguese");

    char regiao, vendedor;
    printf ("Regiões: Leste, Oeste, e Norte (L/O/N)\n");
    printf ("Informe a primeira letra da região: ");
    regiao = getche(); // Semelhante ao scanf
    regiao = toupper (regiao);
    printf ("\n");

    switch (regiao)
    {
        case 'L':
            printf ("\nVendedores: Ricardo, Yuri, João, Felipe.\n");
            printf ("\nInforme a primeira letra do vendedor: \n");
            vendedor = toupper (getche());
            printf ("\n");


            switch (vendedor) // switch aninhado
            {
                case 'R':
                    printf ("Vendas: R$%d\n", 5000);
                    break;
                case 'J':
                    printf ("Vendas: R$%d\n", 15000);
                    break;
                case 'Y':
                    printf ("Vendas: R$%d\n", 18000);
                    break;
                case 'F':
                    printf ("Vendas: R$%d\n", 19000);
                    break;
                default: printf("\nInválido!\n");


            }

            break;

        case 'O':
            printf ("\nVendedores: Márcio,Hugo,Ferdinando.\n\n");
            printf ("\nInforme a primeira letra do vendedor: ");
            vendedor = toupper (getche());
            printf ("\n");

                switch (vendedor) // outro switch aninhado, segue roteiro.
                {
                    case 'M':
                        printf ("Vendas: R$%d\n", 6000);
                        break;

                    case 'Y':
                        printf("Vendas: R$%d\n", 4500);
                        break;

                    case 'J':
                        printf ("Vendas: R$%d\n", 8700);
                        break;

                    case 'H':
                        printf ("Vendas: R$%d\n", 16500);
                        break;

                    default: printf("\nInválido!\n");

                }

                break;

        case 'N':
            printf ("\nVendedores: Leandro, Otávio, Pedro\n\n");
            printf ("\nInforme á primeira letra do vendedor: ");
            vendedor = toupper (getche());
            printf ("\n");

                switch (vendedor)
                {
                    case 'L':
                        printf("\nVendas: R$%d", 9800);
                        break;

                    case 'O':
                        printf("\nVendas: R$%d", 18990);
                        break;
                    case 'P':
                        printf("\nVendas: R$%d", 8800);
                        break;

                    default: printf("\nInválido!\n");
                }

                break;

    }

    char tecla;

    while (0) {
    printf("\nPressione R para continuar....\n");
    tecla = getch();
    tecla = toupper;

    if (tecla == 'r') {
        break;
    }
    return 0;
    }
    system("PAUSE");

}
