#include <stdio.h>


main(){

        int A, *B, **C, ***D;

        B = &A;
        C = &B;
        D = &C;


        printf("\n Digite um valor: ");
        scanf("%i", &A);


        printf("\n\n O dobro: %d", *B * 2);


        printf("\n\n O triplo: %d", **C * 3);


        printf("\n\n O quadruplo: %d", ***D * 4);
}

