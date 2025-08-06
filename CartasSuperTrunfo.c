// Desafio Super Trunfo - Países
// aquui será o codigo para cadastro e exibição de informações de países
/*
Estado: uma letra de 'A' a 'H' tipo char
Código da Carta: a letra do estado seguida de uma número de 1 a 4. Tipo Char
Nome da cidade: tipo char string
População: tipo int
Área em km²: tipo float
Pib: tipo float 
Numero de pontos turisticos: tipo int

*/

#include <stdio.h>

int main() {

    char codigoCarta[3]; // Letra do estado + número
    char estado;
    char nomeCidade[50];
    int populacao;
    float areaKm2;
    float pib;
    int pontosTuristicos;

    char codigoCarta1[3]; // Letra do estado + número
    char estado1;
    char nomeCidade1[50];
    int populacao1;
    float areaKm21;
    float pib1;
    int pontosTuristicos1;

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
    
    // Exibição dos dados
 
    printf("\nCarta: %s\n", codigoCarta);
    printf("Estado: %c\n", estado);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área em km²: %.2f\n", areaKm2);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

    printf("\nCarta: %s\n", codigoCarta1);
    printf("Estado: %c\n", estado1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f\n", areaKm21);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);


}
