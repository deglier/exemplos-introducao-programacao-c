#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    O metodo scanf é uma método de entrada de dados
    ele captura o valor que o usario digita e armazena na variavel atrelada
    */


    // RECEBENDO UM VALOR APENAS
    char nome[10];
    printf("Digite seu nome primeiro nome:");
    scanf("%s", &nome);
    printf("Nome digitado: %s", nome);

    //RECEBENDO MAIS DE UM VALOR PARA MAIS DE UMA VARIAVEL
    char primeiroNome[10];
    char sobrenome[10];
    printf("Digite seu primeiro nome e seu sobrenome:");
    scanf("%s %s", &primeiroNome, &sobrenome);
    printf("Nomes digitados: %s %s", primeiroNome, sobrenome);

    return 0;
}
