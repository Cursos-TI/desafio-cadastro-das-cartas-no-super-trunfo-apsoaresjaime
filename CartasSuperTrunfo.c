#include <stdio.h>

int main(){

    //Variaveis da Carta 1
    char estadoc1='Z'; //Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    char codigoc1[4]="Z01"; //Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[4] 
    char cidadec1[30]="Cidade1"; //Nome da Cidade: O nome da cidade. Tipo: char[30]
    int populacaoc1; //População: O número de habitantes da cidade. Tipo: int
    float areac1; //Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
    float pibc1; //PIB: O Produto Interno Bruto da cidade. Tipo: float
    int pontosturisticosc1; //Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
    
    float densidadepopulacional1; //Densidade Populacional carta 1
    float pibpercapita1; // PIB per Capita carta 1
   
     //Variaveis da Carta 2
     char estadoc2='Y'; //Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
     char codigoc2[4]="Y02";  //Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[4] 
     char cidadec2[30]="Cidade2"; //Nome da Cidade: O nome da cidade. Tipo: char[30]
     int populacaoc2; //População: O número de habitantes da cidade. Tipo: int
     float areac2; //Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
     float pibc2; //PIB: O Produto Interno Bruto da cidade. Tipo: float
     int pontosturisticosc2; //Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
     float densidadepopulacional2; //Densidade Populacional carta 2
     float pibpercapita2; // PIB per Capita carta 2

     //Leitura dos dados da Carta 1
     printf("Desafio Novato - Super Trunfo\n");
     printf("Cadastro da Carta 1\n");
 
     printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados):\n");
     scanf(" %c",&estadoc1);
 
     printf("Digite o código da Carta: a letra do estado seguida de um número de 01 a 04 (ex: A01, B03).\n");
     scanf("%s",codigoc1);
 
     printf("Digite o nome da cidade:\n");
     scanf("%s",cidadec1);
 
     printf("Digite o número de habitantes da cidade:\n");
     scanf("%d",&populacaoc1);
     
     printf("Digite a área da cidade em quilômetros quadrados:\n");
     scanf("%f",&areac1);
 
     
     printf("Digite o Produto Interno Bruto da cidade:\n");
     scanf("%f",&pibc1);
 
     printf("Digite a quantidade de pontos turísticos na cidade\n");
     scanf("%d",&pontosturisticosc1);
 
     printf("Cadastro realizado com Sucesso!\n");

    //Leitura dos dados da Carta 2
    printf("--------------------\n");
    printf("Cadastro da Carta 2\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados):\n");
    scanf(" %c",&estadoc2);

    printf("Digite o código da Carta: a letra do estado seguida de um número de 01 a 04 (ex: A01, B03).\n");
    scanf("%s",codigoc2);

    printf("Digite o nome da cidade:\n");
    scanf("%s",cidadec2);

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d",&populacaoc2);
    
    printf("Digite a área da cidade em quilômetros quadrados:\n");
    scanf("%f",&areac2);

    
    printf("Digite o Produto Interno Bruto da cidade:\n");
    scanf("%f",&pibc2);

    printf("Digite a quantidade de pontos turísticos na cidade\n");
    scanf("%d",&pontosturisticosc2);

    printf("Cadastro realizado com Sucesso!\n");

    //Nivel Aventureiro 

    densidadepopulacional1 = (float) populacaoc1 / areac1; //Calcula a Densidade Populacional carta 1
    pibpercapita1 =(pibc1 * 1e9f) / (float)populacaoc1; //Calcula o PIB per Capita carta 1
    densidadepopulacional2 = (float) populacaoc2 / areac2; //Calcula a Densidade Populacional carta 2
    pibpercapita2 = (pibc2 * 1e9f) / (float)populacaoc2; //Calcula o PIB per Capita carta 2


    //Exibe Informações da Carta 1
    printf("--------------------\n");
    printf("Exibindo informações da Carta 1\n");
    printf("Estado: %c\n",estadoc1);
    printf("Código: %s\n",codigoc1);
    printf("Nome da Cidade: %s\n",cidadec1);
    printf("População: %d\n",populacaoc1);
    printf("Área: %.2f Km²\n",areac1);
    printf("PIB: %.2f bilhões de reais\n",pibc1);
    printf("Número de Pontos Turísticos: %d\n",pontosturisticosc1);
    printf("Densidade Populacional: %.2f hab/Km²\n",densidadepopulacional1);  //Exibe a Densidade Populacional carta 1
    printf("PIB per Capita: %.2f  reais\n",pibpercapita1); //Exibe o PIB per Capita carta 1



    //Exibe Informações da Carta 2
    printf("--------------------\n");
    printf("Exibindo informações da Carta 2\n");
    printf("Estado: %c\n",estadoc2);
    printf("Código: %s\n",codigoc2);
    printf("Nome da Cidade: %s\n",cidadec2);
    printf("População: %d\n",populacaoc2);
    printf("Área: %.2f Km²\n",areac2);
    printf("PIB: %.2f bilhões de reais\n",pibc2);
    printf("Número de Pontos Turísticos: %d\n",pontosturisticosc2);
    printf("Densidade Populacional: %.2f hab/Km²\n",densidadepopulacional2);  //Exibe a Densidade Populacional carta 2
    printf("PIB per Capita: %.2f  reais\n",pibpercapita2); //Exibe o PIB per Capita carta 2

return 0;
}
