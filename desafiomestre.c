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
    
// BOAS VINDAS E TUTORIAL PARA O USUÁRIO.

    printf ("*#*# BEM VINDO AO SUPER TRUNFO #*#* \n");
    printf ("\n");
    printf ("Primeiro passo será cadastrar as cartas, VAMOS LÁ? \n");
    printf ("\n");
    printf ("O Super Trunfo é um jogo no qual os jogadores comparam as propriedades de suas cartas\n"); 
    printf ("para determinar quem tem a mais forte. Cada carta representa um objeto com várias propriedades.\n"); 
    printf ("O tema do jogo será Países, e as cartas serão divididas por estados,\n"); 
    printf ("com cada estado tendo quatro cartas que representam diferentes cidades.\n");
    printf ("Cada país será dividido em oito estados, identificados pelas letras de A a H.\n"); 
    printf ("Cada estado terá quatro cidades, numeradas de 1 a 4. A combinação da letra do estado e o número\n"); 
    printf ("da cidade define o código da carta (por exemplo, A01, A02, B01, B02). \n");
    printf ("\n");
    
//SOLICITAÇÃO AO USUÁRIO INFORMAÇÕES DAS CARTAS E COLETA DOS DADOS.

//CARTA 1

    printf ("CADASTRE A CARTA 1 \n");
    printf("\n");

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
    printf("\n");

//CARTA 2

    printf ("CADASTRE A CARTA 2 \n");
    printf("\n");

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


//RESUMO DAS CARTAS PARA O USUÁRIO.
//INCLUINDO, CÁLCULOS PARA DEFINIÇÃO DE: DENSIDADE, PIB PER CAPTA E SUPERPODER.

//CARTA 1

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

//CARTA 2

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

    printf("Densidade populacional: %d \n", densidade1 < densidade2);

    printf("Populção: %d \n", populacao1 > populacao2);

    printf("Área em Km²: %d \n", area1 > area2);

    printf("PIB: %d \n", pib1 > pib2);

    printf("PIB per capta: %d \n", pibpercapta1 > pibpercapta2);

    printf("Pontos turísticos: %d \n", pontoturistico1 > pontoturistico2);

    printf("Super poder: %d \n", superpoder1 > superpoder2);

    printf("\n");

    printf("OBRIGADO POR JOGAR!!!");

    
    
    return 0;
}
