#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main() {
    printf("\nSeja bem vindo ao calculador de peso ideal");
    float altura;
    printf("\nPara começar digite sua altura\n");
    scanf("%f", &altura);
    float peso_ideal;
    char sexo;
    printf("\nAgora informe seu sexo, (m para masculino ou f para feminino)\n");
    getchar();
    scanf("%c", &sexo);
    if(sexo == 'm') {
        peso_ideal = 72.7 * altura - 58;
        printf("\nSeu peso ideal e: %f", peso_ideal);
    }
    else if(sexo == 'f') {
        peso_ideal = 62.1 * altura - 44.7;
        printf("\nSeu peso ideal e: %f", peso_ideal);
    }
    else {
        printf("\nSexo invalido");
    }
    printf("\nAgora faremos a verficação de um numero, e indica-lo como par ou impar");
   int numeral;
    printf("\nDigite seu numero\n");
    scanf("%i", &numeral);
    int resto;
    resto = numeral % 2;
    if(resto == 0) {
        printf("\nSeu numero é par");
    }
    else {
        printf("\nSeu numero é impar");
    }
    int ano;
    printf("\nAgora verificaremos se o ano é bissexto!");
    printf("\nDigite o ano em que você se encontra\n");
    scanf("%i", &ano);
    int resto_ano = ano % 4;
    if(resto_ano == 0){
        printf("\nO ano é bissexto!!!!!!");
    }
    else {
        printf("\nO ano não é bissexto!!!!!!");
    }
    printf("\nPara melhorar o software, adicionei a função de verificação de triangulos");
    int ladoA;
    printf("\nInsira o valor do primeiro lado de um possivel triangulo\n");
    scanf("%i", &ladoA);
    int ladoB;
    printf("\nInsira o valor do segundo lado de um possivel triangulo\n");
    scanf("%i", &ladoB);
    int ladoC;
    printf("\nInsira o valor do terceiro lado de um possivel triangulo\n");
    scanf("%i", &ladoC);
    if(ladoA + ladoB > ladoC){
        if(ladoA + ladoC > ladoB){
            if(ladoB + ladoC > ladoA)
            printf("\nO triangulo e verdadeiro!!!!");
        }
    else 
    printf("\nO triangulo nao e verdadeiro!!!");
    }
    if(ladoA == ladoB && ladoA == ladoC){
        printf("\nEste e um triangulo equilatero");
    }
    else if(ladoA == ladoB || ladoA == ladoC || ladoB == ladoC){
        printf("\nEste e um triangulo isosceles");
    }
    else{
        printf("\nEste e um triangulo escaleno");
    }
    bool triangulo_real = (ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoB + ladoC > ladoA);
    if(triangulo_real){
        printf("\nEste triangulo e real\n");

    }
    else {
        printf("\nEste triangulo nao e real\n\n");
    }
    return 0;