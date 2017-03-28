#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
     Para retornar o valor de uma variável é usado o método "printf" que retorna uma string, junto dela uma referência, que poder ser
        %d - para variaveis inteiras
        %f - para variaveis reais
        %c - para variaveis de tipo caracter
        %s - para uma cadeia de caracteres
    */

    int i = 10; // número inteiro
    printf("\nNumero inteiro: %i", i);

    float f = 2.4; // número real: 5.4
    printf("\nNumero real: %f", f);

    char c = "n"; // armazena um caracter.
    printf("\nCaracter: %c", c);

    char name[10] = "Deglier"; // armazena uma cadeia de caracteres
    printf("\nCadeia de caracteres: %s", name);

    return 0;
}
