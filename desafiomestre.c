#include <stdio.h>
int main() {
    
    char estado1[50], estado2[50];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    int pontoturistico1, pontoturistico2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float pibpercapta1, pibpercapta2;
    unsigned long int populacao1, populacao2;
    float superpoder1, superpoder2;
    
    
    
    
// VARIÁVEIS DE BOAS VINDAS E APRESENTAÇÃO AO USUÁRIO.


    printf ("*#*# BEM VINDO AO SUPER TRUNFO #*#* \n");
    printf ("\n");
    printf ("Primeiro passo será cadastrar as cartas, VAMOS LÁ? \n");
    printf ("\n");
    

// ** CARTA 1 **
// VARIÁVEIS PARA SOLICITAR E RECEBER DO USUÁRIO AS INFORMAÇÕES DAS CARTAS.


    printf ("CADASTRE A CARTA 1 \n");

    printf("Digite o Estado: \n");
    fgets(estado1, sizeof(estado1), stdin);

    printf("Digite o Código da carta: \n");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: \n");
    getchar();
    fgets(cidade1, sizeof(cidade1), stdin);

    printf("Digite sua populção: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área em Km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos \n");
    scanf("%d", &pontoturistico1);


    // RESUMO DA CARTA E CONFIRMAÇÃO AO USUÁRIO.


    printf("Estado: %s\n Codigo: %s\n Cidade: %s\n ", estado1, codigo1, cidade1);
    printf("Populacao: %lu\n Area: %f Km²\n Pib: %f\n Pontos Turisticos: %d\n", populacao1, area1, pib1, pontoturistico1);
    
    densidade1 = populacao1 / area1;
    printf("Densidade Populacional: %f Pessoas/km²\n", densidade1);

    pibpercapta1 = pib1 / populacao1;
    printf("PIB per capta: %f Reais\n", pibpercapta1);

    superpoder1 = (pontoturistico1 + area1 + pib1 + densidade1 + pibpercapta1);
    printf("Super poder: %f \n", superpoder1);

    printf("\n");

    printf("CARTA 1 CADASTRADA COM SUCESSO!!!\n");

    printf("\n");


// ** CARTA 2 **
// VARIÁVEIS PARA SOLICITAR E RECEBER DO USUÁRIO AS INFORMAÇÕES DAS CARTAS.

    printf ("CADASTRE A CARTA 2 \n");

    printf("Digite o Estado: \n");
    getchar();
    fgets(estado2, sizeof(estado2), stdin);

    printf("Digite o Código da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: \n");
    getchar();
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Digite sua populção: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área em Km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos \n");
    scanf("%d", &pontoturistico2);


    // RESUMO DA CARTA E CONFIRMAÇÃO AO USUÁRIO.


    printf("Estado: %s\n Codigo: %s\n Cidade: %s\n ", estado2, codigo2, cidade2);
    printf("Populacao: %lu\n Area: %f\n Pib: %f\n Pontos Turisticos: %d\n", populacao2, area2, pib2, pontoturistico2);
    
    densidade2 = populacao2 / area2;
    printf("Densidade Populacional: %f Pessoas/Km²\n ", densidade2);

    pibpercapta2 = pib2 / populacao2;
    printf("PIB per capta: %f Reais\n", pibpercapta2);

    superpoder2 = (pontoturistico2 + area2 + pib2 + densidade2 + pibpercapta2);
    printf("Super poder: %f \n", superpoder2);

    printf("\n");

    printf("CARTA 2 CADASTRADA COM SUCESSO!!!\n");

    printf("\n");


    //COMPARATIVO ENTRE CARTAS, PARA DEFINIÇÃO DA VENCEDORA.

    printf("CONFIRA AGORA A CARTA VENCEDORA!\n");

    printf("Se o resultado do quesito for 1, a carta 1 ganhou; se o resultado for 0, a carta 2 ganhou.\n");

    printf("\n");

    printf("Densidade populacional: %d \n", (densidade1 < densidade2)? 1 : 0);

    printf("Populção: %d \n", populacao1 > populacao2);

    printf("Área em Km²: %d \n", (area1 > area2)? 1 : 0);

    printf("PIB: %d \n", (pib1 > pib2)? 1 : 0);

    printf("PIB per capta: %d \n", (pibpercapta1 > pibpercapta2)? 1 : 0);

    printf("Pontos turísticos: %d \n", (pontoturistico1 > pontoturistico2)? 1 : 0);

    printf("Super poder: %d \n", (superpoder1 > superpoder2)? 1 : 0);

    printf("\n");

    printf("OBRIGADO POR JOGAR!!!");

    
    
    return 0;
}
