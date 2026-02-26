#include <stdio.h>
#include "operations.h"

int main() {
    int a = 10;
    int b = 5;

    printf("Addition de %d et %d = %d\n", a, b, addition(a, b));
    printf("Soustraction de %d et %d = %d\n", a, b, soustraction(a, b));

    afficher_cle();

    return 0;
}
