#include <stdio.h>
#include "operations.h"

int addition(int a, int b) {
    return a + b;
}

int soustraction(int a, int b) {
    return a - b;
}

void afficher_cle() {
    unsigned char cle_hash[] = {
        0x24, 0x00, 0x37, 0x32, 0x27, 0x66, 0x46, 0x20,
        0x36, 0x27, 0x00, 0x66, 0x26, 0x01, 0x26, 0x00,
        0x28
    };
    unsigned char cle_dehash[18];
    unsigned char cle_key[] = {
        0x63, 0x49, 0x63, 0x49, 0x6A, 0x55, 0x14, 0x67,
        0x05, 0x78, 0x52, 0x55, 0x13, 0x31, 0x6A, 0x55,
        0x55
    };

    for (int i = 0; i < 17; i++) {
        cle_dehash[i] = cle_hash[i] ^ cle_key[i];
    }
    cle_dehash[17] = '\0';

    printf("\nVoici ta clé : %s\n", cle_dehash);
}
