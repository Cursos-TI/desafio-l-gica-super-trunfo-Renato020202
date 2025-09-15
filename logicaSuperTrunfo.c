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
printf ("\n");

// menu interativo 
 int escolhajogador;

printf(" escolha um dos atributos de comparação :\n");
printf("1. area\n");
printf("2. população\n");
printf("3. PIB\n");
printf("4. ponto turistico\n");
printf("5. densidade populacional\n");
printf(" escolha uma das opções de 1 a 5\n");
scanf("%d", &escolhajogador);
printf("\n");
// cada case corresponte um atributo e sua comparação
// mostra dos resultados

switch (escolhajogador)
{
case 1:
    printf( " você escolheu a area\n");
   if (area > area2) {
    printf( "******parabens carta 1 venceu******\n");
    printf(" cidada : %s\n", cidade);
    printf(" area da carta  1 : %.5f km\n", area);
     printf(" area da carta 2 : %.5f km\n", area2);

   }else if ( area < area2){
    printf( "*******parabens carta 2 venceu******\n");
    printf(" cidada : %s\n", cidade2);
    printf(" area da carta  1 : %.5f km\n", area);
     printf(" area da carta 2 : %.5f km\n", area2);

   }else {
    printf(" o jogo impatou\n");
   }
   break;

case 2:
    printf( " você escolheu a população\n");
   if (população > população2) {
    printf( "*******parabens carta 1 venceu*******\n");
    printf(" cidada : %s\n", cidade);
    printf(" população carta  1 : %lu\n", população);
     printf(" população da carta 2 : %lu\n", população2);

   }else if ( população < população2){
   printf( "******parabens carta 2 venceu*****\n");
    printf(" cidada : %s\n", cidade2);
    printf(" população carta  1 : %lu\n", população);
     printf(" população da carta 2 : %lu\n", população2);

   }else {
    printf(" o jogo impatou\n");
   }

    break;
case 3:
    printf( " você escolheu o PIB\n");
   if (PIB > PIB2) {
    printf( "********parabens carta 1 venceu*******\n");
    printf(" cidada : %s\n", cidade);
    printf(" o PIB da carta  1 : %.5f\n", PIB);
     printf(" area da carta 2 : %.5f\n", PIB2);

   }else if ( PIB < PIB2){
    printf( "*******parabens carta 2 venceu*****\n");
    printf(" cidada : %s\n", cidade2);
    printf(" area da carta  1 : %.5f\n", PIB);
     printf(" area da carta 2 : %.5f\n", PIB2);

   }else {
    printf(" o jogo impatou\n");

   }
   break;

case 4:
    printf( " você escolheu o ponto turistico\n");
   if (pontoturistico > pontoturistico2) {
    printf( "********parabens carta 1 venceu*********\n");
    printf(" cidada : %s\n", cidade);
    printf(" ponto turistico da carta  1 : %d\n", pontoturistico);
     printf(" ponto turistico carta 2 : %d\n", pontoturistico2);

   }else if (pontoturistico < pontoturistico2) {
    printf( "*********parabens carta 2 venceu********\n");
    printf(" cidada : %s\n", cidade2);
    printf(" ponto turistico da carta  1 : %d\n", pontoturistico);
     printf(" ponto turistico da carta 2 : %d\n", pontoturistico2);


   }else {
    printf(" o jogo impatou\n");

   }

case 5:
    printf( " você escolheu a densidade populacional\n");
   if (densidadepopulacional < densidadepopulacional2) {
    printf( "**********parabens carta 1 venceu*********\n");
    printf(" cidada : %s\n", cidade);
    printf(" a densidade populacional da carta  1 : %.2f\n",densidadepopulacional);
     printf(" a densidade populacional da carta 2 : %.2f\n", densidadepopulacional2);

   }else if(densidadepopulacional > densidadepopulacional2) {
    printf( "**********parabens carta 2 venceu**********\n");
    printf(" cidada : %s\n", cidade2);
    printf(" a densidade populacional da carta  1 : %.2ff\n",densidadepopulacional);
     printf(" a densidade populacional da carta 2 : %.2f\n", densidadepopulacional2);


   }else {
    printf(" o jogo impatou\n");

   }
   break;


default: printf(" opção invalida\n");
    break;
}

    return 0;







}

