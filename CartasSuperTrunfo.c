#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Carta 1
    char Estado;
    char Codigo[5];
    char Nome[50];
    int Populacao;
    float Area;
    float PIB;
    int Pontos;

    // Carta 2
    char Estado2;
    char Codigo2[5];
    char Nome2[50];
    int Populacao2;
    float Area;
    float PIB2;
    int Pontos2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Entrada da Carta 1
    printf("Carta 1\nDigite a letra que represente o estado da sua carta:\n");
    scanf("%s",Estado);

    printf("Digite o código da sua carta (letra do estado + número de 01 a 04):\n");
    scanf("%s",Codigo);

    printf("Digite o nome da Cidade:\n");
    scanf("%s",Nome);

    printf("Digite a massa popular da sua Cidade:\n");
    scanf("%i",&Populacao);

    printf("Digite o tamangho da sua Cidade em km²:\n");
    scanf("%f",&Area);

    printf("Digite o PIB que represente sua Cidade:\n");
    scanf("%f",&PIB);

    printf("Digite quantos pontos turísticos tem na sua Cidade:\n");
    scanf("%i",&Pontos);

    // Entrada da Carta 2
    print("\nCarta 2\nDigite a letra que represente o estado da sua carta:\n");
    scanf("%s",Estado2);

    printf("Digite o código da sua carta (letra do estado + número de 01 a 04):\n");
    scanf("%s",Codigo2);

    printf("Digite o nome da Cidade:\n");
    scanf("%s",Nome2);

    printf("Digite a massa popular da sua Cidade:\n");
    scanf("%i",&Populacao2);

    printf("Digite o tamanho da sua Cidade em km²:\n");
    scanf("%f",Area2);

    printf("Digite o PIB que represente sua Cidade:\n");
    scanf("%f",&PIB2);

    printf("Digite quantos pontos turísticos tem na sua Cidade:\n");
    scanf("%i",&Pontos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Saída das duas cartas
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", Nome);
    printf("População: %i\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    print("Pontos Turísticos: %i\n", Pontos);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Nome2);
    printf("População: %i\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    print("Pontos Turísticos: %i\n", Pontos2);

    return 0;
}
