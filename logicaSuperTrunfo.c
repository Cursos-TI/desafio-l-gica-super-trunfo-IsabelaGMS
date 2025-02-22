#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.






struct Carta {
    char estado[30];
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};


void calcularIndicadores(struct Carta *carta) {
    carta->densidadePopulacional = carta->populacao / carta->area;
    carta->pibPerCapita = carta->pib / carta->populacao;
}

int main() {
   
    struct Carta carta1, carta2;

    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado: ");
    scanf(" %[^\n]s", carta1.estado);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", carta1.nomeCidade);
    printf("Digite a população: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a área: ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB: ");
    scanf("%f", &carta1.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);
    calcularIndicadores(&carta1);

    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado: ");
    scanf(" %[^\n]s", carta2.estado);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", carta2.nomeCidade);
    printf("Digite a população: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a área: ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB: ");
    scanf("%f", &carta2.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);
    calcularIndicadores(&carta2);

    
    printf("\nComparação de cartas\n");
    printf("Carta 1 - Estado: %s, Código: %s, População: %d\n", carta1.estado, carta1.codigo, carta1.populacao);
    printf("Carta 2 - Estado: %s, Código: %s, População: %d\n", carta2.estado, carta2.codigo, carta2.populacao);

    
    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 é a vencedora!\n");
    } else if (carta1.populacao < carta2.populacao) {
        printf("Resultado: Carta 2 é a vencedora!\n");
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
