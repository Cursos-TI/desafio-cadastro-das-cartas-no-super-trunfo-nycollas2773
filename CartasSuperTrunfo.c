#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado_1;
    char codigo_1[8];
    char cidade_1[30];
    int populacao_1;
    float area_1;
    float pib_1;
    int pontos_turisticos_1;

    // Variáveis da Carta 2 
    char estado_2;
    char codigo_2[8];
    char cidade_2[30];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontos_turisticos_2;

    // Carta 1
    printf("Cadastro da primeira carta:\n");
    printf("Qual é o seu Estado (apenas uma letra): ");
    scanf(" %c", estado_1); // espaço antes do %c limpa o buffer
    printf("Código do Estado: ");
    scanf("%s", codigo_1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade_1);
    printf("Digite a população: ");
    scanf("%d", &populacao_1);
    printf("Digite a área: ");
    scanf("%f", &area_1);
    printf("Digite o PIB: ");
    scanf("%f", &pib_1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_1);

    // Carta 2
    printf("\nCadastro da segunda carta:\n");
    printf("Qual é o seu Estado (apenas uma letra): ");
    scanf(" %c", estado_2); // espaço antes do %c limpa o buffer
    printf("Código do Estado: ");
    scanf("%s", codigo_2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade_2);
    printf("Digite a população: ");
    scanf("%d", &populacao_2);
    printf("Digite a área: ");
    scanf("%f", &area_2);
    printf("Digite o PIB: ");
    scanf("%f", &pib_2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_2);

    // Dados das Cartas cadastradas
    printf("\n=== Dados das Cartas Cadastradas ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código do Estado: %s\n", codigo_1);
    printf("Nome da cidade: %s\n", cidade_1);
    printf("População: %d habitantes\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos_1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código do Estado: %s\n", codigo_2);
    printf("Nome da cidade: %s\n", cidade_2);
    printf("População: %d habitantes\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos_2);

    return 0;
}