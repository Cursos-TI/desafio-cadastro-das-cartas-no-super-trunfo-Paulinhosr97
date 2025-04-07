#include <stdio.h>

int main() {
    // Variáveis para duas cidades
    char estado1[3], estado2[3];
    int codCarta1, codCarta2;
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Leitura dos dados da primeira cidade
    printf("Informe o estado (UF) da primeira cidade: ");
    scanf("%s", estado1);
    printf("Informe o código da carta: ");
    scanf("%d", &codCarta1);
    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", cidade1); // Lê nome com espaço
    printf("Informe a população: ");
    scanf("%d", &populacao1);
    printf("Informe a área (km²): ");
    scanf("%f", &area1);
    printf("Informe o PIB: ");
    scanf("%f", &pib1);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da segunda cidade
    printf("\nInforme o estado (UF) da segunda cidade: ");
    scanf("%s", estado2);
    printf("Informe o código da carta: ");
    scanf("%d", &codCarta2);
    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", cidade2); // Lê nome com espaço
    printf("Informe a população: ");
    scanf("%d", &populacao2);
    printf("Informe a área (km²): ");
    scanf("%f", &area2);
    printf("Informe o PIB: ");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // Exibição dos resultados
    printf("\n--- INFORMAÇÕES DA PRIMEIRA CIDADE ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %d\n", codCarta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    printf("\n--- INFORMAÇÕES DA SEGUNDA CIDADE ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %d\n", codCarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    return 00;

}