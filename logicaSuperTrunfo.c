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
  int resultado;
  int resultado2;
 

printf("  escolha o primeiro atributos de comparação :\n");
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
    resultado =  area > area2 ? 1 : 0;  
   if ( resultado = 1 ) {
    printf( "******parabens carta 1 venceu a primeira comparação******\n");
   

   }else if ( resultado = 0){
    printf( "*******parabens carta 2 venceu a primeira comparação******\n");
    

   }else {
    printf(" o jogo impatou\n");
   }
   break;

case 2:
    printf( " você escolheu a população\n");
    resultado =  população > população2 ? 1 : 0;
   if (resultado = 1) {
    printf( "*******parabens carta 1 venceu a primeira comparação*******\n");
    

   }else if ( resultado = 0 ){
   printf( "******parabens carta 2 venceu a primeira comparação*****\n");
    
   }else {
    printf(" o jogo impatou\n");
   }

    break;
case 3:
    printf( " você escolheu o PIB\n");
    resultado =  PIB > PIB2 ? 1 : 0;
   if ( resultado = 1) {
    printf( "********parabens carta 1 venceu a primeira comparação*******\n");
   

   }else if ( resultado = 0){
    printf( "*******parabens carta 2 venceu a primeira comparação*****\n");
    

   }else {
    printf(" o jogo impatou\n");

   }
   break;

case 4:
    printf( " você escolheu o ponto turistico\n");
    resultado =  pontoturistico > pontoturistico2 ? 1 : 0;
   if ( resultado = 1) {
    printf( "********parabens carta 1 venceu a primeira comparação*********\n");
    

   }else if (resultado = 0) {
    printf( "*********parabens carta 2 venceu a primeira comparação********\n");
    


   }else {
    printf(" o jogo impatou\n");

   }
   break;

case 5:
    printf( " você escolheu a densidade populacional\n");
    resultado =  densidadepopulacional < densidadepopulacional2 ? 1 : 0;
   if ( resultado = 1) {
    printf( "**********parabens carta 1 venceu a primeira comparação*********\n");
    

   }else if(resultado = 0) {
    printf( "**********parabens carta 2 venceu a primeira comparação**********\n");
    


   }else {
    printf(" o jogo impatou\n");

   }
   break;


default: printf(" opção invalida\n");
    break;
}

printf("\n");


// menu interativo 
 int escolhajogador2;

printf(" escolha o segundo atributos de comparação :\n");
printf("1. area\n");
printf("2. população\n");
printf("3. PIB\n");
printf("4. ponto turistico\n");
printf("5. densidade populacional\n");
printf(" escolha uma das opções de 1 a 5\n");
scanf("%d", &escolhajogador2);
printf("\n");
// cada case corresponte um atributo e sua comparação
// mostra dos resultados


if ( escolhajogador == escolhajogador2) {
  printf(" voce escolheu o mesmo atributo que o primeiro\n");

} else {

  switch (escolhajogador2)
{
case 1:
    printf( " você escolheu a area\n");
    resultado2 =  area > area2 ? 1 : 0;  
   if ( resultado2 = 1 ) {
    printf( "******parabens carta 1 venceu a primeira comparação******\n");
    

   }else if ( resultado2 = 0){
    printf( "*******parabens carta 2 venceu a primeira comparação******\n");
   
   }else {
    printf(" o jogo impatou\n");
   }
   break;

case 2:
    printf( " você escolheu a população\n");
    resultado2 =  população > população2 ? 1 : 0;
   if (resultado2 = 1) {
    printf( "*******parabens carta 1 venceu a primeira comparação*******\n");
   
   }else if ( resultado2 = 0 ){
   printf( "******parabens carta 2 venceu a primeira comparação*****\n");
    
   }else {
    printf(" o jogo impatou\n");
   }

    break;
case 3:
    printf( " você escolheu o PIB\n");
    resultado2 =  PIB > PIB2 ? 1 : 0;
   if ( resultado2 = 1) {
    printf( "********parabens carta 1 venceu a primeira comparação*******\n");
    

   }else if ( resultado2 = 0){
    printf( "*******parabens carta 2 venceu a primeira comparação*****\n");
   

   }else {
    printf(" o jogo impatou\n");

   }
   break;

case 4:
    printf( " você escolheu o ponto turistico\n");
    resultado2 =  pontoturistico > pontoturistico2 ? 1 : 0;
   if ( resultado2 = 1) {
    printf( "********parabens carta 1 venceu a primeira comparação*********\n");
    

   }else if (resultado2 = 0) {
    printf( "*********parabens carta 2 venceu a primeira comparação********\n");
    

   }else {
    printf(" o jogo impatou\n");

   }
   break;

case 5:
    printf( " você escolheu a densidade populacional\n");
    resultado2 =  densidadepopulacional < densidadepopulacional2 ? 1 : 0;
   if ( resultado2 = 1) {
    printf( "**********parabens carta 1 venceu a primeira comparação*********\n");
    

   }else if(resultado2 = 0) {
    printf( "**********parabens carta 2 venceu a primeira comparação**********\n");
    


   }else {
    printf(" o jogo impatou\n");

   }
   break;


default: printf(" opção invalida\n");
    break;
}

}
printf("\n");

if ( escolhajogador == escolhajogador2) {
  printf(" por favor refaça\n");
 } else if ( resultado && resultado2) {
  printf("##### RESULTADO FINAL #####\n");
  printf("\n");
  printf("*******parabens carta 1 venceu o jogo********\n");
  printf(" cidade da carta 1 : %s\n", cidade);
  printf(" carta 1 adquiriu 2 acertos");
  
} else if ( resultado != resultado2) {
  printf("##### RESULTADO FINAL #####\n");
    printf("\n");
  printf(" o jogo empatou\n");
  printf(" cada carta gerou 1 acerto\n");

}else {
  printf("##### RESULTADO FINAL #####\n");
    printf("\n");
  printf("****** parabens carta 2 venceu o jogo ******\n ");
  printf(" cidade da carta 2 : %s\n", cidade2);
  printf(" carta 2 adquiriu 2 acertos\n");
}


    return 0;







}

