#include <stdio.h>

/* declaração da função, para ser acessada por qualquer
 * outra função presente no arquivo de texto */
int quadrado(int x);

int main()
{
    int a, quad;

    scanf("%d", &a);

    /* chama a função passando como parâmetro, o valor
     * armazenado na variável a, lida do teclado */
    quad = quadrado(a);

    printf("Eco!   %d\n", a);
    printf("Eco^2! %d\n", quad);
    
    return 0;
}

/* quadrado: recebe um inteiro e retorna o valor deste
 * inteiro multiplicado por ele mesmo */
int quadrado(int x)
{
    return x*x;
}