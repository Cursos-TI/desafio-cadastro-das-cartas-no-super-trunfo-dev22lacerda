#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*Inicialização de variáveis*/
    char estado1, estado2, cidade1[50], cidade2[50], codigo1[50], codigo2[50];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2; 


    /*Apresentação do jogo*/
    printf("Super Trunfo - Cidades do Brasil \n\n");


    /*Coleta de dados do cliente - Carta 01*/
    printf("Para comercarmos o jogo, insira os dados solicitados abaixo. \n\n");
    printf("Dados da carta 01: \n");

    printf("Qual e o nome da cidade? \n");
    scanf("%s", cidade1);

    printf("Ela pertence a qual estado? (Digite uma letra de A a H para representar) \n");
    scanf(" %c", &estado1); // nota o espaço antes do %c

    printf("Qual o codigo da carta? (Digite um numero de dois digitos entre 01 a 08) \n");
    scanf("%s", codigo1);

    printf("Qual e a populacao dessa cidade? \n");
    scanf("%d", &populacao1);

    printf("Qual e a area (em km2)? \n");
    scanf("%f", &area1);

    printf("Qual e o PIB? (reais) \n");
    scanf("%f", &pib1);

    printf("Quantos pontos turisticos ela tem? \n");
    scanf("%d", &pontos_turisticos1);

    //Espaçamento
    printf("\n");

    /*Coleta de dados do cliente - Carta 02*/
    printf("Agora, insira os dados da segunda carta. \n\n");
    printf("Dados da carta 02: \n");

    printf("Qual e o nome da cidade? \n");
    scanf("%s", cidade2);

    printf("Ela pertence a qual estado? (Digite uma letra de A a H para representar) \n");
    scanf(" %c", &estado2); // nota o espaço antes do %c

    printf("Qual o codigo da carta? (Digite um numero de dois digitos entre 01 a 08) \n");
    scanf("%s", codigo2);

    printf("Qual e a populacao dessa cidade? \n");
    scanf("%d", &populacao2);

    printf("Qual e a area (em km2)? \n");
    scanf("%f", &area2);

    printf("Qual e o PIB? (Reais) \n");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos ela tem? \n");
    scanf("%d", &pontos_turisticos2);

    //Espaçamento
    printf("\n");

    printf("Vamos ao resultado? Saiba qual carta ganhou!\n\n");

    //Calculando Densidade Populacional, PIB per capita e o Super Poder
    float densidade1 = populacao1 / area1;
    float pibpercapita1 = pib1 / populacao1;

    float densidade2 = populacao2 / area2;
    float pibpercapita2 = pib2 / populacao2; 

    float superpoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pibpercapita1 - densidade1;
    float superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pibpercapita2 - densidade2;

    //Print da carta 01
    printf("Carta 01 \n"); 
    printf("--------------------------------\n");
    printf("%s [ %c%s ] \n", cidade1, estado1, codigo1);
    printf("--------------------------------\n");
    printf("Populacao: %d pessoas\n", populacao1);
    printf("Area: %.2f km2 \n", area1);
    printf("PIB: %.2f Reais \n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f Reais\n", pibpercapita1);
    printf("--------------------------------\n\n");  

    //Print da carta 02
    printf("Carta 02 \n"); 
    printf("--------------------------------\n");
    printf("%s [ %c%s ] \n", cidade2, estado2, codigo2);
    printf("--------------------------------\n");
    printf("Populacao: %d pessoas\n", populacao2);
    printf("Area: %.2f km2 \n", area2);
    printf("PIB: %.2f Reais \n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km\n", densidade2);
    printf("PIB per Capita: %.2f Reais\n", pibpercapita2);
    printf("--------------------------------\n\n");

    printf("--------------------------------\n");
    printf("Comparacao\n");
    printf("--------------------------------\n\n");

    //Print e aplicação da comparação
    printf("Codigo da carta vencedora:\n");
    printf("Se o resultado for (1), a Carta 01 venceu.\n");
    printf("Se o resultado for (0), a Carta 02 venceu.\n\n");

    printf("Populacao: Codigo da carta vencedora = (%d)\n", populacao1 > populacao2);
    printf("Area: Codigo da carta vencedora = (%d)\n", area1 > area2);
    printf("PIB: Codigo da carta vencedora = (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Codigo da carta vencedora = (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Codigo da carta vencedora = (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Codigo da carta vencedora = (%d)\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: Codigo da carta vencedora = (%d)\n", superpoder1 > superpoder2);

    printf("\n\n");

    //Mensagem de encerramento
    printf("..:Parabens por ganhar essa rodada!:..");
    printf("\n\n");
    printf(".:Obrigado por jogar!:.");
    printf("\n\n");
    printf("..:Game Over:..");
    printf("\n\n");

    return 0;
}
