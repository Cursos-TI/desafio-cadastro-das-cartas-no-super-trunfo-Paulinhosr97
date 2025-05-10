#include <string.h>

// Estrutura que representa uma carta do Super Trunfo
struct Carta {
    char estado[30];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

// Função para calcular os atributos derivados
void calcularDados(struct Carta *carta) {
    if (carta->area > 0 && carta->populacao > 0) {
        carta->densidadePopulacional = carta->populacao / carta->area;
        carta->pibPerCapita = carta->pib / carta->populacao;
    } else {
        carta->densidadePopulacional = 0;
        carta->pibPerCapita = 0;
    }
}

// Função para comparar cartas usando o atributo População
void compararCartas(struct Carta c1, struct Carta c2) {
    printf("Comparação de cartas (Atributo: População):\n\n");

    printf("Carta 1 - %s (%s): %d\n", c1.cidade, c1.estado, c1.populacao);
    printf("Carta 2 - %s (%s): %d\n", c2.cidade, c2.estado, c2.populacao);

    if (c1.populacao > c2.populacao) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", c1.cidade);
    } else if (c2.populacao > c1.populacao) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", c2.cidade);
    } else {
        printf("\nResultado: Empate!\n");
    }
}

int main() {
    // Cadastro manual das duas cartas
    struct Carta carta1 = {"SP", "001", "São Paulo", 12300000, 1521.11, 780000000000.0, 15};
    struct Carta carta2 = {"RJ", "002", "Rio de Janeiro", 6000000, 1182.30, 400000000000.0, 12};

    // Calcula os dados derivados
    calcularDados(&carta1);
    calcularDados(&carta2);

    // Exibe os dados calculados (opcional)
    printf("Densidade Populacional e PIB per capita calculados:\n");
    printf("Carta 1 - %s: Densidade = %.2f, PIB per capita = %.2f\n", carta1.cidade, carta1.densidadePopulacional, carta1.pibPerCapita);
    printf("Carta 2 - %s: Densidade = %.2f, PIB per capita = %.2f\n\n", carta2.cidade, carta2.densidadePopulacional, carta2.pibPerCapita);

    // Compara as cartas pelo atributo populacao
    compararCartas(carta1, carta2);

    return 0;
}
