#include <stdio.h>
#include <stdlib.h>

void opera_ptr(int *ptr);

int main()
{
    int *p = (int *) malloc(sizeof(int));

    *p = 3;

    printf("*p = %d\n", *p);

    opera_ptr(p);

    printf("*p = %d\n", *p);

    free(p);

    return 0;
}

void opera_ptr(int *ptr)
{
    *ptr = 5;
}