#include <stdio.h>

int main()
{
    /* aloca um espaço para um inteiro (4 bytes) na memoria */ 
    int a;

    /* lê o valor de um inteiro da entrada padrão */
    scanf("%d", &a);

    printf("Eco! %d\n", a);
    
    return 0;
}