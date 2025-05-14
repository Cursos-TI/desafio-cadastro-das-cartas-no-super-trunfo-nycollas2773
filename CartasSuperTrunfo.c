#include <stdio.h>
    
    int main (){
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
         
         // carta1

    printf("Cadastro da primeira carta:\n");
    printf("Qual é o seu Estado?");
    scanf("%c", &estado_1);
    printf("Código do Estado:");
    scanf("%s", &codigo_1);
    printf("Nome da cidade:");
    scanf("%s\n", &cidade_1);
    printf("Digite a populacao:");
    scanf("%d", &populacao_1);
    printf("Digite a área:");
    scranf("%f", &area_1);
    printf("Digite o pib:");
    scranf("%f", &pib_1);
    printf("Digite o nome dos pontos_turisticos:")
    scranf("%d", &pontos_turisticos_1);

          // carta2

    printf("Cadastro da primeira carta:\n");
    printf("Qual é o seu Estado?");
    scanf("%c", &estado_2);
    printf("Código do Estado:");
    scanf("%s", &codigo_2);
    printf("Nome da cidade:");
    scanf("%s\n", &cidade_2);
    printf("Digite a populacao:");
    scanf("%d", &populacao_2);
    printf("Digite a area:");
    scranf("%f", &area_2);
    printf("Digite o pib:");
    scranf("%f", &pib_2);
    printf("Digite o nome dos pontos_turisticos:")
    scranf("%d", &pontos_turisticos_2);
    }

    printf("\n");

    //Dados das Cartas cadastradas
   
    printf("Carta 1\n");
    printf("Estado: %c\n", estado_1);
    printf("Codigo do Estado: %c\n", codigo_1);
    printf("Nome da cidade: %s\n", cidade_1)
    printf("Populacao: %d habitantes\n", populacao_1);
    printf("Area: %.2f km²\n", area_1);
    printf("Pib: %2.f bilhoes de reais\n", pib_1);
    printf("Numeros de pontos turisticos: %d\n", pontos_turisticos_1);
    
     printf("Carta 2\n");
    printf("Estado: %c\n", estado_2);
    printf("Codigo do Estado: %c\n", codigo_2);
    printf("Nome da cidade: %s\n", cidade_2)
    printf("Populacao: %d habitantes\n", populacao_2);
    printf("Area: %.2f km²\n", area_2);
    printf("Pib: %2.f bilhoes de reais\n", pib_2);
    printf("Numeros de pontos turisticos: %d\n", pontos_turisticos_2);
    