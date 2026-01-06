#include <stdio.h>

int main() {
    int idade = 15;
    float altura = 1.75;

    if (idade >= 18 && altura >= 1.5) {
        printf("A pessoa é adulta e tem altura suficiente.\n");
    } else {
        printf("A pessoa não atende aos critérios.\n");
    }
}