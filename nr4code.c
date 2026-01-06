#include <stdio.h> 

int main(){
    int idade;
    
    printf("Digite a idade: \n");
    scanf("%d", &idade);

    if (idade < 0) {
        printf("Idade inválida.\n");
    } else if (idade < 12) {
        printf("Criança\n");
    } else if (idade < 18) {
        printf("Adolescente\n");
    } else {
        printf("Adulto\n");
    }


}