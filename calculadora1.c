// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função Principal
int main( ) {
    // Seleção de idioma para pt-br
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    int x, y;

    // Lê o valor da variável X
    printf("Informe o valor de x:");
    scanf("%d", &x);

    // Lê o valor da variável Y
    printf("Informe o valor de y:");
    scanf(" %d", &y); // limpa o buffer do teclado

    // Título sobre o resultado das operações mostrando os valores inseridos pelo usuário
    printf("\nResultado das operacoes de %d e %d:\n", x, y);

    // Soma
    printf("Soma: %d\n", x + y);

    // Subtração
    printf("Subtracao: %d\n", x - y);

    // Divisão
    printf("Divisao: %.1f\n", x / (float)y);
        //.1 só aparece um número depois do ponto ( . )

    // Multiplicação
    printf("Multiplicacao: %d\n", x * y);

    // Resto da divisão
    printf("Resto da divisao: %d\n\n", x % y);

    return 0;
}