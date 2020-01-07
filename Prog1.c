#include <stdio.h>

int main(){
    float kg;
    float lb = 2.2;
    float montante;
    int menu;
    float conta;

    printf("------------------Menu-----------------\n");
    printf("1- Quilogramas para Libras\n");
    printf("2- Libras para quilograma\n");
    scanf(" %d", &menu);
    //menu de escolha
    if (menu == 1)
    {
        printf("Diga quantas Kg\n");
        scanf(" %f", &montante);
        //conversão
        conta = montante * lb;
        printf("Corresponde a %f lb\n",conta);
    }
    else if (menu == 2)
    {
        printf("Diga quantos Lb(inserir numero diferente de 1)\n");
        scanf(" %f", &montante);
        //conversão
        conta = montante / lb;
        printf("Corresponde a %f", conta);
    }
    else
    {
        printf("Essa opçao nao existe corra o programa novamente\n");
    }
    
    
    


    return 0;
}