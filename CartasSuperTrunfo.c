#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    
    char Estado[50]; 
    char codigo[20]; 
    char cidade[40];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;


    printf ("BEM VINDO AO SUPER TRUNFO \n");

    printf ("Primeiro passo será cadastrar as cartas, vamos lá? \n");


// CARTA 1

    printf("Digite o Estado: ");
    scanf("%s", &Estado);

    printf("Digite o Código da carta: ");
    scanf("%s", &codigo);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &cidade);

    printf("Digite sua populção: ");
    scanf("%d", &populacao);

    printf("Digite a área em Km²: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos ");
    scanf("%d", &pontos_turisticos);
    

    return 0;
}
