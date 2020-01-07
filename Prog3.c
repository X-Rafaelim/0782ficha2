#include <stdio.h>

int main(){
    float euro = 1.45204;
    float UsdDollar = 1.119090;
    float cad;
    int menu;
    float conver;
    float conta;

    printf("-------------------Menu-------------------\n");
    printf("1- Euro - USD Dollar\n");
    printf("2- USD Dollar - Euro\n");
    printf("3- Euro - CAD\n");
    printf("4- CAD - Euro \n");
    scanf(" %d", &menu);

    // menu de escolha
    if (menu == 1)
    {
        printf("Introduza a quantidade \n");
        scanf(" %f", &conver);
        //conversão
        conta = conver * UsdDollar;
        printf("Introduziste %f euros e converteu para %f USD Dollar \n", conver,conta);
    }
    else if (menu == 2)
    {
        printf("Introduza a quantidade \n");
        scanf(" %f", &conver);
        //conversão
        conta = conver / UsdDollar;
        printf("Introduziste %f USD Dollar e converteu para %f euros \n", conver,conta);
    }
    else if (menu == 3)
    {
        printf("Introduza a quantidade \n");
        scanf(" %f", &conver);
        //conversão
        conta = conver * euro;
        printf("Introduziste %f euro e converteu para %f cad \n", conver,conta);


    }
    else if (menu == 4)
    {
        printf("Introduza a quantidade \n");
        scanf(" %f", &conver);
        //conversão
        conta = conver / euro;
        printf("Introduziste %f Cad e converteu para %f euro \n", conver,conta);
    }
    else
    {
        printf("Opção invalida, Obrigado \n");
    }

    return 0;
    
    
    
    
    
}