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

    printf("Qual e o PIB? \n");
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

    printf("Qual e o PIB? \n");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos ela tem? \n");
    scanf("%d", &pontos_turisticos2);

    //Espaçamento
    printf("\n");

    printf("Vamos ao resultado? Compare as cartas!\n\n");

    //Print da carta 01
    printf("Carta 01 \n"); 
    printf("--------------------------------\n");
    printf("%s [ %c%s ] \n", cidade1, estado1, codigo1);
    printf("--------------------------------\n");
    printf("Populacao: %d pessoas\n", populacao1);
    printf("Area: %f km2 \n", area1);
    printf("PIB: %f Reais \n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);
    printf("--------------------------------\n\n");  

    //Print da carta 02
    printf("Carta 02 \n"); 
    printf("--------------------------------\n");
    printf("%s [ %c%s ] \n", cidade2, estado2, codigo2);
    printf("--------------------------------\n");
    printf("Populacao: %d pessoas\n", populacao2);
    printf("Area: %f km2 \n", area2);
    printf("PIB: %f Reais \n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);
    printf("--------------------------------\n");

    //Mensagem de encerramento
    printf("\n\n");
    printf("Obrigado por jogar!");
    printf("\n\n");
    printf("..:Game Over:..");
    printf("\n\n");

    return 0;
}
