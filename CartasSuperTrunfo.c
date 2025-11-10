#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
 #include <cstdio>
int main() {
    // Pega o Estado da carta
    //carta 1
    char estadoCarta1, estadoCarta2;
    printf("Digite uma letra de A a H: ");
    scanf(" %c", &estadoCarta1);
    //carta 2
    printf("Digite uma letra de A a H: ");
    scanf(" %c", &estadoCarta2);

    // Pega o código da carta
    //carta 1
    char codigoCarta1[4], codigoCarta2[4];
    printf("Digite o codigo da carta: ");
    scanf("%s", codigoCarta1);
    //carta 2
    printf("Digite o codigo da carta: ");
    scanf("%s", codigoCarta2);

    //Pega o nome da cidade
    //carta 1
    char nomeCidadeCarta1[30], nomeCidadeCarta2[30];
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidadeCarta1);
    //carta 2
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidadeCarta2);

    //Pega o numero de habitantes
    //carta 1
    int populacaoCidadeCarta1, populacaoCidadeCarta2;
    printf("Digite o numero de habitantes da cidade: ");
    scanf("%d", &populacaoCidadeCarta1);
    //carta 2
    printf("Digite o numero de habitantes da cidade: ");
    scanf("%d", &populacaoCidadeCarta2);

    //Pega área da cidade
    //carta 1
    float areaCidadeCarta1, areaCidadeCarta2;
    printf("Digite o área da cidade em quilõmetros quadrados: ");
    scanf("%f", &areaCidadeCarta1);
    //carta 2
    printf("Digite o área da cidade em quilõmetros quadrados: ");
    scanf("%f", &areaCidadeCarta2);

    //Pega o PIB da cidade
    //carta 1
    float pibCarta1, pibCarta2;
    printf("Digite o produto interno bruto (PIB) da cidade: ");
    scanf("%f", &pibCarta1);
    //carta 2
    printf("Digite o produto interno bruto (PIB) da cidade: ");
    scanf("%f", &pibCarta2);

    //Pega o numero de pontos turisticos
    //carta 1
    int pontosTuristicosCarta1, pontosTuristicosCarta2;
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicosCarta1);
    //carta 2
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicosCarta2);

    //saida de dados das cartas
    //carta 1
    printf("Carta 1 \n ");
    printf("Estado: %c\n", estadoCarta1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome: %s\n", nomeCidadeCarta1);
    printf("Populacao: %d\n", populacaoCidadeCarta1);
    printf("Area: %f\n", areaCidadeCarta1);
    printf("PIB: %f\n", pibCarta1);
    printf("Pontos turisticos: %d\n", pontosTuristicosCarta1);
    //carta 2
    printf("Carta 2 \n");
    printf("Carta 1 \n ");
    printf("Estado: %c\n", estadoCarta2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome: %s\n", nomeCidadeCarta2);
    printf("Populacao: %d\n", populacaoCidadeCarta2);
    printf("Area: %f\n", areaCidadeCarta2);
    printf("PIB: %f\n", pibCarta2);
    printf("Pontos turisticos: %d\n", pontosTuristicosCarta2);

    return 0;
}

