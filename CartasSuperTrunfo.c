

#include <stdio.h>

int main() {

    char codigoCarta[3]; // Letra do estado + número
    char estado;
    char nomeCidade[50];
    unsigned int populacao;
    float areaKm2;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float inversoDensidade;
    float pidperCapita;
    long double superpoder;
    // Cadastro
    printf("Cadastro da primeira carta:\n");
    
    printf("Digite a primeira letra do Estado (A-H):\n");
    scanf(" %c", &estado);
    
    printf("Digite o código da Carta (letrado do estado + número de 01 a 04):\n");
    scanf(" %s", &codigoCarta);
    
    printf("Digite o nome da capital do estado:\n");
    scanf(" %s", &nomeCidade);
    
    printf("Digite a área em km²:\n");
    scanf(" %f", &areaKm2);
    
    printf("Digite a população:\n");
    scanf(" %d", &populacao);
    
    printf("Digite o PIB:\n");
    scanf(" %f", &pib);
    
    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontosTuristicos);
    
    densidadePopulacional = (float) populacao / (float) areaKm2;
    pidperCapita = (float) pib / (float) populacao;
    inversoDensidade = (float) areaKm2 / (float) populacao;
    superpoder = populacao + areaKm2 + pib + pontosTuristicos + inversoDensidade + densidadePopulacional + pidperCapita;


    char codigoCarta1[3]; // Letra do estado + número
    char estado1;
    char nomeCidade1[50];
    unsigned int populacao1;
    float areaKm21;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float inversoDensidade1;
    float pidperCapita1;
    long double superpoder1;
    // Cadastro
    printf("Cadastro da primeira carta:\n");
    
    printf("Digite a primeira letra do Estado (A-H):\n");
    scanf(" %c", &estado1);
    
    printf("Digite o código da Carta (letrado do estado + número de 01 a 04):\n");
    scanf(" %s", &codigoCarta1);
    
    printf("Digite o nome da capital do estado:\n");
    scanf(" %s", &nomeCidade1);
    
    printf("Digite a área em km²:\n");
    scanf(" %f", &areaKm21);
    
    printf("Digite a população:\n");
    scanf(" %d", &populacao1);
    
    printf("Digite o PIB:\n");
    scanf(" %f", &pib1);
    
    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontosTuristicos1);
    
    densidadePopulacional1 = (float) populacao1 / (float) areaKm21;
    pidperCapita1 = (float) pib1 / (float) populacao1;
    inversoDensidade1 = (float) areaKm21 / (float) populacao1;
    superpoder1 = populacao1 + areaKm21 + pib1 + pontosTuristicos1 + inversoDensidade1 + densidadePopulacional1 + pidperCapita1;

    // Exibição dos dados
    
    printf("\nCarta: %s\n", codigoCarta);

    printf("Estado: %c\n", estado);

    printf("Nome da Cidade: %s\n", nomeCidade);

    printf("População: %d\n", populacao);

    printf("Área em km²: %.2f\n", areaKm2);

    printf("PIB: %.2f\n", pib);

    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);

    printf("PIB per Capita: %.2f\n", pidperCapita);

    printf("superpoder: %.2d\n", superpoder);

//
    printf("\nCarta: %s\n", codigoCarta1);

    printf("Estado: %c\n", estado1);

    printf("Nome da Cidade: %s\n", nomeCidade1);

    printf("População: %d\n", populacao1);

    printf("Área em km²: %.2f\n", areaKm21);

    printf("PIB: %.2f\n", pib1);

    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);

    printf("PIB per Capita: %.2f\n", pidperCapita1);

    printf("superpoder: %.2d\n", superpoder1);
    




    // comparar
    printf("Para sabermos os vencedores vamos dizer que %s é '1' e %s é '0'\n", codigoCarta, codigoCarta1);
   
    printf("no quesito população o vencedor é: %d\n", populacao> populacao1);
    printf("no quesito área em km² o vencedor é: %d\n", areaKm2 > areaKm21);
    printf("no quesito PIB o vencedor é: %d\n", pib > pib1);
    printf("no quesito pontos turísticos o vencedor é: %d\n", pontosTuristicos > pontosTuristicos1);
    printf("no quesito densidade populacional o vencedor é: %d\n", densidadePopulacional < densidadePopulacional1);
    printf("no quesito PIB per Capita o vencedor é: %d\n", pidperCapita > pidperCapita1);
    printf("no quesito superpoder o vencedor é: %d\n", superpoder > superpoder1);
    return 0;
 
}
