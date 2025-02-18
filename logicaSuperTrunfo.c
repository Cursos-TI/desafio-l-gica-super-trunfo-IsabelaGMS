#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
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
    

    return 0;
}
