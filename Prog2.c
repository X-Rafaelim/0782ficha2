#include <stdio.h>

int main(){
    int n1;
    int n2;
    int total;

    printf("Introduza um numero\n");
    scanf(" %d", &n1);
    printf("Introduza um segundo numero\n");
    scanf(" %d", &n2);
    // comparação 
    if (n1 > n2)
    {
        //conta
        total = n1 + n2;
        printf(" %d e o maior numero e a soma dos dois numeros e %d",n1,total);
    }
    else if (n1 < n2)
    {
        //conta
        total = n1 + n2;
        printf("%d e o maior numero e a soma dos dois numeros e %d",n2,total);
    }
    else
    {
        printf("Erro");
    }
    
    return 0;
}