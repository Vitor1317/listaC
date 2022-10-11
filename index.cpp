#include <stdio.h>
#include <string.h> 

void exercicio1(){
    int i;

    for (i = 1; i <= 10; i++){
        printf("Hello World pela %i° vez", i);
    }
}

void exercicio2(){
    int i;

    for (i = 1; i <= 10; i++){
        printf("Hello World pela %i° vez \n", i);
    }
}

void exercicio3(){
    int i;

    for (i = 1; i <= 100; i++){
        printf("%i \n", i);
    }
}

void exercicio4(){
    int i;

    for (i = 1; i <= 100; i++){
        printf("%i - Hello World \n", i);
    }
}

void exercicio5(){
    int i;

    for (i = 100; i >= 0; i--){
        printf("%i \n", i);
    }
}

void exercicio6(){
    int i;

    for (i = 2; i <= 1000; i+=2){
        printf("%i \n", i);
    }
}

void exercicio7(){
    int i;

    for (i = 1; i <= 1000; i+=2){
        printf("%i \n", i);
    }
}

void exercicio8(){
    int i, count;

    count = 0;

    for (i = 1; i <= 100; i++){
        count = count + i;
        printf("%i \n", count);
    }
}

void exercicio9(){
    int i, vezes;

    printf("Digite o número de vezes que deseja que a mensagem seja impressa na tela: ");
    scanf("%i", &vezes);

    for(i = 1; i <= vezes; i++){
        printf("Hello World \n");
    }
}

void exercicio10(){
    int vezes, i;
    char nome[50];

    printf("Escreva seu nome: ");
    fgets(nome, 50, stdin);
    printf("Digite o numero de vezes que voce deseja que o seu nome se repita: ");
    scanf("%i", &vezes);

    for(i = 1; i <= vezes; i++){
        printf("%i - %s", i, nome);
    }
}

void exercicio11(){
    int i, nInputs, nOutput, acc;
    float media;

    printf("Escolha a quantidade de numeros que serão usados: ");
    scanf("%i", &nInputs);

    acc = 0;

    for(i = 1; i <=nInputs; i++){
        printf("Digite um número: ");
        scanf("%i", &nOutput);
        
        acc = acc + nOutput;
    }

    printf("A soma dos numeros é: %i \n", acc);
    media = acc /nInputs;
    printf("A media aritimetica dos numeros é: %f", media);

}

void exercicio12(){
    int i, nInputs, idade, filtrarIdade;
    char nome[50], filtrarNome[50];
    filtrarIdade = 0;

    printf("Digite a quantidade de pessoas: ");
    scanf("%i", &nInputs);

    for (i =1; i<= nInputs; i++){
        printf("Digite o nome: ");
        scanf("%s", nome);
        printf("Digite a idade: ");
        scanf("%i", &idade);

        if(idade > filtrarIdade){
            filtrarIdade = idade;
            strcpy(filtrarNome, nome);
        }

    }  

    printf("O nome da pessoa mais velha é: %s", filtrarNome);

}

//INCOMPLETO
void exercicio13(){
    int i, nInputs, idade, accF, accM;
    float mediaF, mediaM;
    char sexo[1];

    printf("Digite a quantidade de pessoas: ");
    scanf("%i", &nInputs);

    accM = 0;
    accF = 0;

    for (i = 1; i <= nInputs; i++){
        printf("Digite o sexo (M/F):");
        scanf("%s", sexo);
        printf("Digite a idade: ");
        scanf("%i", &idade);

        
        if(strcmp(sexo, "M") || strcmp(sexo, "m") ){
            accM = accM + idade;
        }else if(strcmp(sexo, "F") || strcmp(sexo, "f")){
            accF = accF + idade;
        }else{
            printf("Formato Invalido \n");
        }
    }

    mediaF = accF /nInputs;
    mediaM = accM /nInputs;

    printf("A media de idade feminina é: %f \n", mediaF);
    printf("A media de idade masculina é: %f \n", mediaM);

   
}

void exercicio14(){
    int i;
    float numero, maior, menor;

    maior = 0;

    for(i = 0; i < 10; i++){
        if(i == 0){
            menor = numero;
        }

        printf("Digite um número Real: ");
        scanf("%f", &numero);

        if(numero > maior){
            maior = numero;
        }

        if(numero < menor){
            menor = numero;
        }
    }

    printf("O maior número é: %f", maior);
    printf("O menor número é: %f", menor);
}

int main(){
    // exercicio1();
    // exercicio2();
    // exercicio3();
    // exercicio4();
    // exercicio5();
    // exercicio6();
    // exercicio7();
    // exercicio8();
    // exercicio9();
    // exercicio10();
    // exercicio11();
    // exercicio12();
    // exercicio13();
    exercicio14();
}