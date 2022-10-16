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

void exercicio13(){
    int i, nInputs, idade, nMale, nFemale;
    char sexo[2];
    float mediaM, mediaF;

    printf("Defina o numero de pessoas: ");
    scanf("%i", &nInputs);

    nMale = 0;
    nFemale = 0;
    mediaM = 0;
    mediaF = 0;

    for (i = 1; i <= nInputs; i++){
        printf("Defina o genero (M/F): ");
        scanf("%s", sexo);

        printf("Digite um numero: ");
        scanf("%i", &idade);

        if(strcmp(sexo, "M") == 0 || strcmp(sexo, "m") == 0){
            nMale+=1;
            mediaM = mediaM + idade;
        }

        if(strcmp(sexo, "F") == 0 || strcmp(sexo, "f") == 0){
            nFemale+=1;
            mediaF = mediaF + idade;
        }
    }

    if(nFemale == 0){
        nFemale = 1;
        printf("Nenhuma aluna do sexo feminino foi informada \n");
    }

    if(nMale == 0){
        nMale = 1;
        printf("Nenhuma aluna do sexo feminino foi informada \n");
    }

    mediaM = mediaM/nMale;
    mediaF = mediaF/nFemale;

    printf("A media de idade masculina é: %f \n", mediaM);
    printf("A media de idade femenina é: %f \n", mediaF);
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

void exercicio15(){
    int i, count = 1, age, maxAge, minAge, nMore18, nUntil18, acc = 0;
    float alunos = 0;
    char options[2];

    for(i = 0; i <=count; i++){
        printf("Digite a idade do aluno: ");
        scanf("%i", &age);

        acc = acc + age;
        
        printf("Deseja informar a idade de mais um aluno? (s/n) ");
        scanf("%s", options);

        if(i == 0){
            maxAge = 0;
            minAge = age;
            nMore18 = 0;
            nUntil18 = 0;
        }


        if(strcmp(options, "s") == 0){
            count++;
        }else {
            count--;
        }

        if(age > maxAge){
            maxAge = age;
        }   

        if(age < minAge){
            minAge = age;
        }

        age > 18 ? nMore18++ : nUntil18++;
        alunos ++;
    }

    alunos = acc/alunos;

    printf("\n O aluno mais velho tem %i anos", maxAge);
    printf("\n O aluno mais novo tem %i anos", minAge);
    printf("\n A quantidade de alunos maiores de 18 anos e: %i", nMore18);
    printf("\n A quantidade de alunos que tem ate 18 anos e: %i", nMore18);
    printf("\n A media de idade dos alunos é: %f", alunos);
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
    // exercicio14();
    exercicio15();
}