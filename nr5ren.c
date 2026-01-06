#include <stdio.h>

int main( ) {
    int idade;
    float renda;

    printf("Digite a idade:");
    scanf("%d", &idade);
    printf("digite a sua renda mensal:");
    scanf("%f", &renda);

    if (idade < 18 || idade > 60){
        if (renda < 2000) {
            printf("Você está qualificado para o desconto especial\n");
        } else {
            printf("Você não está qualificado para o desconto devido à renda\n");
