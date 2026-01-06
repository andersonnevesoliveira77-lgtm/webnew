#include <stdio.h>

int main(){
int opcao;

printf("Escolha uma opção: \n");
printf("1. Verificar Saldo\n");
printf("2. Fazer depósito\n");
printf("3.Fazer Saque\n");
scanf("%d", &opcao);

switch (opcao){
case 1:
    printf("Saldo atual: R$ 1000,00\n");
    break;
case 2:
    printf("Depósito realizado com sucesso!\n");
    break;
    printf("Deposito realizado com sucesso!\n");
case 3:
    printf("Saque realizado com sucesso!\n");
    break;
default:
    printf("Opção inválida. Tente novamente.\n");
}
return 0;

}