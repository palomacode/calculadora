// Calculadora usando switch case e laço de exclusão

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função Principal
int main( ) {
    // Idioma em pt-br
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    //  Variáveis
    int opcao, x, y;

    // Menu Principal
    printf("Menu Principal\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Divisao (nao dividir por 0)\n");
    printf("4 - Multiplicacao\n");
    printf("5 - Resto da divisao\n");
    printf("0 - Sair\n");
    scanf("%d", &opcao);

    // Lê o valor das variáveis
    printf("Informe os valores de X e Y: ");
    scanf("%d %d", &x, &y);

    // Switch case
    switch (opcao) {
        // Soma
        case 1:
            printf("Soma: %d\n", x + y);
            break;

        // Subtração
        case 2:
            printf("Subtracao: %d\n", x - y);
            break;

        // Divisão
        case 3: 
            // Divisor igual a zero
            if(y == 0)
                printf("Nao e possivel dividir por 0\n");
            // Divisao diferente de zero
            else
                printf("Divisao: %.1f\n", x / (float)y);
            break;

        // Multiplicação
        case 4:
            printf("Multiplicacao: %d\n", x * y);
            break;

        // Resto da divisão
        case 5:
            printf("Resto da divisao: %d\n\n", x % y);
            break;

        // Saída
        case 6:
            printf("Saindo...\n");
            break;

        // Opção Inválida
        default:
            printf("Opcao invalida\n");
            break;
    }

    return 0;
}