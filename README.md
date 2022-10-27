# Lista de exercícios de C++

![BilgiYazan-Cpp-Eğitimi](https://user-images.githubusercontent.com/83735304/198164254-af3af192-8539-4090-b0a5-754098456c0e.jpg)

> STATUS

## Exercício 1
* Elabore um algoritmo que imprima na tela lado a lado o texto "Hello World!" 10 vezes. 

### Resolução


~~~~c++
void exercicio1(){
    int i;

    for (i = 1; i <= 10; i++){
        printf("Hello World pela %i° vez", i);
    }
}
~~~~

## Exercício 2
* Elabore um algoritmo que imprima na tela o texto "Hello World!" 10 vezes, um por linha.

### Resolução


~~~~c++
void exercicio2(){
    int i;

    for (i = 1; i <= 10; i++){
        printf("Hello World pela %i° vez \n", i);
    }
}
~~~~

## Exercício 3
* Elabore um algoritmo que imprima todos os números inteiros de 1 até 100 inclusive.

### Resolução


~~~~c++
void exercicio3(){
    int i;

    for (i = 1; i <= 100; i++){
        printf("%i \n", i);
    }
}
~~~~

## Exercício 4
* Elabore um algoritmo que imprima 100 vezes o texto "1- Hello World!" com o número.

### Resolução


~~~~c++
void exercicio4(){
    int i;

    for (i = 1; i <= 100; i++){
        printf("%i - Hello World \n", i);
    }
}
~~~~

## Exercício 5
* Elabore um algoritmo que imprima todos os números decrescentes de 100 até 0 inclusive.

### Resolução


~~~~c++
void exercicio5(){
    int i;

    for (i = 100; i >= 0; i--){
        printf("%i \n", i);
    }
}
~~~~

## Exercício 6
* Elabore um algoritmo que imprima todos os números pares inteiros de 1 até 1000.

### Resolução


~~~~c++
void exercicio6(){
    int i;

    for (i = 2; i <= 1000; i+=2){
        printf("%i \n", i);
    }
}
~~~~

## Exercício 7
* Elabore um algoritmo que imprima todos os números ímpares de 1000 até 0.

### Resolução


~~~~c++
void exercicio7(){
    int i;

    for (i = 1; i <= 1000; i+=2){
        printf("%i \n", i);
    }
}
~~~~

## Exercício 8
* Elabore um algoritmo que imprima a soma dos 100 primeiros números inteiros positivos.

### Resolução


~~~~c++
void exercicio8(){
    int i, count;

    count = 0;

    for (i = 1; i <= 100; i++){
        count = count + i;
        printf("%i \n", count);
    }
}
~~~~

## Exercício 9
* Elabore um algoritmo que solicite ao usuário um número inteiro que indicará a quantidade
de vezes que o texto "Hello World!" será impresso na tela, um em cada linha.

### Resolução


~~~~c++
void exercicio9(){
    int i, vezes;

    printf("Digite o número de vezes que deseja que a mensagem seja impressa na tela: ");
    scanf("%i", &vezes);

    for(i = 1; i <= vezes; i++){
        printf("Hello World \n");
    }
}
~~~~

## Exercício 10
* Elabore um algoritmo que solicite ao usuário uma palavra e um número inteiro que
indicará a quantidade de vezes que a palavra digitada será impressa na tela, um em cada
linha.

### Resolução


~~~~c++
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
~~~~

## Exercício 11
* Elabore um algoritmo que leia um número de entrada que indicará a quantidade de
números a serem lidos. Em seguida, leia n números (conforme o valor informado
anteriormente) e imprima a soma e a média aritmética dos números informados.

### Resolução


~~~~c++
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
~~~~

## Exercício 12
*  Elabore um algoritmo que leia um número de entrada que indicará a quantidade de
registros a serem lidos (N). Em seguida algoritmo deve solicitar o nome e idade de N
pessoas e ao final apresentar o nome da pessoa mais velha.

### Resolução


~~~~c++
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
~~~~

## Exercício 13
* Elabore um algoritmo que leia um número de entrada que indicará a quantidade de
registros a serem lidos (N). Em seguida algoritmo deve solicitar o sexo (M/F) e idade de N
pessoas e ao final apresentar a média de idade de ambos os gêneros catalogados.

### Resolução


~~~~c++
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
~~~~

## Exercício 14
*  Elabore um algoritmo que solicite ao usuário 10 números reais e ao final apresente o
maior e o menor deles.

### Resolução


~~~~c++
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
~~~~

## Exercício 15
* Escreva um programa que vá solicitando as idades dos alunos da sala até que todos
sejam informados (perguntar ao usuário se deseja informar a idade do próximo aluno). Ao
final apresentar a idade do mais novo, a idade do mais velho, Quantos alunos têm mais de
18 anos, quantos alunos têm até 18 anos, a média aritmética e a mediana.

### Resolução


~~~~c++
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

~~~~
