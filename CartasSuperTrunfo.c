

#include <stdio.h>

int main() {

    char codigoCarta[3]; // Letra do estado + número
    char estado;
    char nomeCidade[50];
    int populacao;
    float areaKm2;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pidperCapita;

    
    char codigoCarta1[3]; // Letra do estado + número
    char estado1;
    char nomeCidade1[50];
    int populacao1;
    float areaKm21;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pidperCapita1;
    
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
    
    
 
    printf("\nCadastro da segunda carta:\n");
    
    
    
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

    densidadePopulacional1 = (float) populacao1 / areaKm21;
    pidperCapita1 = pib1 / (float)populacao1;
    
    
    
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
    

    printf("\nCarta: %s\n", codigoCarta1);

    printf("Estado: %c\n", estado1);

    printf("Nome da Cidade: %s\n", nomeCidade1);

    printf("População: %d\n", populacao1);

    printf("Área em km²: %.2f\n", areaKm21);

    printf("PIB: %.2f\n", pib1);

    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);

    printf("PIB per Capita: %.2f\n", pidperCapita1);


}
