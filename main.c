#include <stdio.h>
#include <stdlib.h>
int main() {
int idade;
    printf("\nPor favor digite sua idade para verificar sua maioridade:\n\n"); 
    scanf("%i", &idade);
    if(idade >= 18){
        printf("\nMaioridade confirmada");
    }
    else {
        printf("\nVoce e menor de idade");
    }
    int ano_nascimento;
    printf("\nAgora digite o ano em que voce nasceu para a configuracao de uma senha:\n\n");
    scanf("%i", &ano_nascimento);
    int senha;
    printf("\nDigite sua senha:\n\n");
    scanf("%i", &senha);
    if(senha == ano_nascimento){
        printf("\nSenha correta!!!");
    }
    else {
        printf("\nSenha incorreta");
    }
    int nota;
        printf("\nDigite a nota do aluno para classifica-la entre A,B,C,D ou E\n\n");
        scanf("%i", &nota);
        if(nota >=90){
            printf("\nDesempenho de classe A!!");
        }
        else if(nota >= 80 && nota <= 89){
            printf("\nDesempenho classe B!");
        }
        else if(nota >= 70 && nota <= 79){
            printf("\nDesempenho classe C.");
        }
        else if(nota >= 60 && nota <= 69){
            printf("\nDesempenho classe D (ATENCAO)");
        }
        else {
            printf("\nDesempenho classe E (PATETICO)");
        }
    int mes;
    printf("\nDigite o numero do mes em que estamos:\n\n");
    scanf("%i", &mes);
    if(mes == 1){
        printf("\nEstamos em Janeiro")
    }
    else if(mes == 2){
        printf("\nEstamos em Fevereiro")
    }
    else if(mes == 3){
        printf("\nEstamos em Marco")
    }
    else if(mes == 4){
        printf("\nEstamos em Abril")
    }
    else if(mes == 5){
        printf("\nEstamos em Maio")
    }
    else if(mes == 6){
        printf("\nEstamos em Junho")
    }
    else if(mes == 7){
        printf("\nEstamos em Julho")
    }
    else if(mes == 8){
        printf("\nEstamos em Agosto")
    }
    else if(mes == 9){
        printf("\nEstamos em Setembro")
    }
    else if(mes == 10){
        printf("\nEstamos em Outubro")
    }
    else if(mes == 11){
        printf("\nEstamos em Novembro")
    }
    else {
        printf("\nEstamos em Dezembro")
    }
    
    float medida;
    int op_medida;

    printf("\nNessa sessão poderemos converter algumas medidas não usuais em unidades de medidas usadas com mais frequencia.\n\n");

    printf("Digite sua opcao de convercao\n 1-De Quilometros para Milhas \n 2-De metros para Pés \n 3-De celcius para farenheit \n 4-De quilogramas para libras ");
    
    scanf("%i", &op_medida);

    switch(op_medida){
        case 1:
        
        printf("\nDigite seu valor para convercao:\n\n");
        
        scanf("%f", &medida);

        medida = medida / 1.60;

        printf("\nO valor em milhas eh: %f", medida);

        break;

        case 2:
        
        printf("\nDigite seu valor para convercao:\n\n");
        
        scanf("%f", &medida);

        medida = medida * 3.28;

        printf("\nO valor em pes eh: %f", medida);

        break;

        case 3:
        
        printf("\nDigite seu valor para convercao:\n\n");
        
        scanf("%f", &medida);

        medida = (medida * 1.8) +32;

        printf("\nO valor em farenheit eh: %f", medida);

        break;

        case 4:
        
        printf("\nDigite seu valor para convercao:\n\n");
        
        scanf("%f", &medida);

        medida = medida * 2.2;

        printf("\nO valor em libras eh: %f", medida);

        break;
    }
        return 0;

    
}