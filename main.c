#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("\nSeja bem vindo ao calculador de peso ideal");
    float altura;
    printf("\nPara começar digite sua altura");
    scanf("%f", &altura);
    float peso_ideal;
    char sexo;
    printf("\nAgora informe seu sexo, (m para masculino ou f para feminino)");
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
    printf("\nAgora faremos a verficação de um numero, e indica-lo como par ou impar");
   int numeral;
    printf("\nDigite seu numero");
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
    printf("\nDigite o ano em que você se encontra");
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
    printf("\nInsira o valor do primeiro lado de um possivel triangulo");
    scanf("%i", &ladoA);
    int ladoB;
    printf("\nInsira o valor do segundo lado de um possivel triangulo");
    scanf("%i", &ladoB);
    int ladoC;
    printf("\nInsira o valor do terceiro lado de um possivel triangulo");
    scanf("%i", &ladoC);
    if(ladoA + ladoB > ladoC){
        if(ladoA + ladoC > ladoB){
            if(ladoB + ladoC > ladoA)
            print("\nO triangulo e verdadeiro!!!!");
        }
    else 
    printf("\nO triangulo nao e verdadeiro!!!");
    }



    return 0;
}