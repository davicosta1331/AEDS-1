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
    if(resto == 0){
        printf("\nSeu numero é par");
    }
    else {
        printf("\nSeu numero é impar");
    }
    return 0;
}