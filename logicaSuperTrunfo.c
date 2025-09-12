 #include <stdio.h>

int main(){
// carta 1
    char letra[100];
    char codigo[100];
    char cidade[100];
    unsigned long int população;
    float area;
    float PIB;
    int  pontoturistico;
    float densidadepopulacional; 
    float pibpercapita; 
    float SuperPoder1;
    
  

    //carta 2
    char letra2[100];
    char codigo2[100];
    char cidade2[100];
    unsigned long int população2;
    float area2;
    float PIB2;
    int pontoturistico2;
    float densidadepopulacional2;
    float pibpercapita2;
    float SuperPoder2;




 // informaçãoes sobre a primeira carta~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    printf("Carta 1\n");
    printf("\n");
 
    printf("\ndigite a letra do estado:");
    scanf("%s", letra);

    printf("\ndigite o codigo da carta:");
    scanf("%s",  codigo);

    printf("\ndigite o nome da cidade:");
    scanf("%s", cidade);

    printf("\ndigite o numero de habitantes: ");
    scanf("%lu", &população);

    printf("\ndigite a area em km:");
    scanf("%f", &area);

    printf("\ndigite o PIB:");
    scanf("%f", &PIB);

    printf("\ndigite o numero de ponto turisticos:");
    scanf("%d", &pontoturistico);

//calculo da densidade populacional e pib per capita

densidadepopulacional = população / area;

pibpercapita = PIB / população;

// calculo do super porder

SuperPoder1 = população + area + PIB + pibpercapita + pontoturistico + ( 1 / densidadepopulacional);

printf("\n");

// informacões da segunda carta~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    printf(" Carta 2\n");
    printf("\n");

    printf(" \ndigite a letra do estado:");
    scanf("%s", letra2);

    printf(" \ndigite o codigo da carta:");
    scanf("%s", codigo2);

    printf( " \ndigite o nome da cidade:");
    scanf("%s", cidade2);

    printf( " \ndigite o numero de habitantes:");
    scanf("%lu", &população2);

    printf("\ndigite a area em km:");
    scanf("%f", &area2);

    printf("\ndigite o PIB:");
    scanf("%f", &PIB2);

    printf("\ndigite o numero de ponto turisticos:");
    scanf("%d", &pontoturistico2);

// calculo da densidade populacional e pib per capita

densidadepopulacional2 = população2 / area2;

pibpercapita2 = PIB2 / população2;

// calculo do super poder2

SuperPoder2 = população2 + area2 + PIB2 + pibpercapita2 + pontoturistico2 + ( 1 / densidadepopulacional2);

    printf("\n");

// painel de amostra das duas cartas

// primeira carta
printf("primeira carta ");
printf(" \na letra do estado:%s", letra);
printf(" \ncodigo da carta:%s", codigo);
printf(" \nnome da cidade:%s", cidade);
printf(" \nnumero de habitantes:%lu", população);
printf(" \na area é:%.5f km", area);
printf(" \nPIB:%.5f bilhoês de reais", PIB);
printf(" \nnumero de pontos turisticos:%d", pontoturistico);
printf(" \ndensidade populacional:%.2f hab/km ", densidadepopulacional);
printf(" \nPIB per Capita: %.2f  reais", pibpercapita);
printf(" \n super poder = %f", SuperPoder1);

printf("\n");

// segunda carta
printf(" \nsegunda carta");
printf(" \na letra do estado:%s", letra2);
printf(" \ncodigo da carta:%s", codigo2);
printf(" \nnome da cidade:%s", cidade2);
printf(" \nnumero de habitantes:%lu", população2);
printf(" \na area é:%.5f km", area2);
printf(" \nPIB:%.5f bilhoês de reais", PIB2);
printf(" \nnumero de pontos turisticos:%d", pontoturistico2);
printf(" \ndensidade populacional:%.2f hab/km ", densidadepopulacional2);
printf(" \nPIB per Capita: %.2f reais", pibpercapita2);
printf(" \nsuper poder = %f", SuperPoder2);

printf("\n");

// resultado e  comparação

if (SuperPoder1 > SuperPoder2) {
    printf(" o super poder 1 é maior \n");
    printf(" carta 1 vence\n");
}else { 
    printf(" super poder 2 é maior\n");
    printf ( " carta 2 vence\n ");

}
    return 0;







}







// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);


