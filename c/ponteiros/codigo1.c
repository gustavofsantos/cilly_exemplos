#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* ptr_a: ponteiro para um endereço de um inteiro */
    int *ptr_a;

    /* aloca um espaço de um inteiro na memória e aponta
     * ptr_a para este endereço */
    ptr_a = (int *) malloc(sizeof(int));

    /* atribui o valor numérico 4 a este espaço de memória
     * criado no comando acima */
    *ptr_a = 4;

    printf("Valor de ptr_a:    %d\n", *ptr_a);
    printf("Endereço de ptr_a: %x\n", ptr_a);

    /* libera os recursos alocados para o ptr_a */
    free(ptr_a);

    /* qualquer acesso a ptr_a após a linha anterior
     * irá causar falha de segmentação, pois este ponteiro
     * não existe mais */

    return 0;
}