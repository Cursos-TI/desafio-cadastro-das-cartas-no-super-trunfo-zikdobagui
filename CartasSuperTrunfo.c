#include <stdio.h>

#define NUM_ESTADOS 8
#define NUM_CIDADES 4

typedef struct {
    char codigo[4]; // Código da carta (e.g. A01)
    int populacao;
    float area; // área em km²
    float pib; // PIB em milhões
    int pontos_turistico;
} Carta;

int main() {
    Carta cartas[NUM_ESTADOS][NUM_CIDADES];
    char estados[NUM_ESTADOS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

    for (int i = 0; i < NUM_ESTADOS; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            // Criação do código da carta
            snprintf(cartas[i][j].codigo, sizeof(cartas[i][j].codigo), "%c%02d", estados[i], j + 1);

            // Entrada dos dados
            printf("Cadastro da cidade %s:\n", cartas[i][j].codigo);
            printf("População: ");
            scanf("%d", &cartas[i][j].populacao);
            printf("Área (km²): ");
            scanf("%f", &cartas[i][j].area);
            printf("PIB (em milhões): ");
            scanf("%f", &cartas[i][j].pib);
            printf("Número de pontos turísticos: ");
            scanf("%d", &cartas[i][j].pontos_turistico);
            printf("\n");
        }
    }

    // Exibição dos dados cadastrados
    printf("Cartas cadastradas:\n");
    for (int i = 0; i < NUM_ESTADOS; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            printf("Cidade: %s\n", cartas[i][j].codigo);
            printf("População: %d\n", cartas[i][j].populacao);
            printf("Área: %.2f km²\n", cartas[i][j].area);
            printf("PIB: %.2f milhões\n", cartas[i][j].pib);
            printf("Pontos turísticos: %d\n", cartas[i][j].pontos_turistico);
            printf("-------------------------\n");
        }
    }

    return 0;
}