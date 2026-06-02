#include  <stdio.h>
#include <string.h>

int main() {

    int idade;
    char matricula [10] ;
    float altura;
    char nome[30];
    int number1;
    int number2;
    char letra ; 
    int soma;






 printf ("digite seu nome:\n");
 fgets (nome, 30,stdin);

  nome[strcspn(nome, "\n")] = '\0';


 printf("digite sua idade:\n");
 scanf(" %d", &idade);


 printf("digite sua altura:\n");
 scanf(" %f", &altura   );


 printf("qual sua matricula?\n");
 scanf("%s",matricula );


 printf("escolha uma letra:\n");
 scanf(" %c",&letra);


 printf(" digite um numero,para fazer soma:\n");
 scanf(" %d",&number1);


 printf("numero 2 \n");
 scanf(" %d", &number2);
 soma = number1 + number2;


 printf("nome: %s  -- matricula: %s \n" ,nome, matricula);
 printf("idade: %d  -- altura: %.2f\n"  ,idade, altura);
 printf("letra: %c\n",letra);
 printf ("a soma desses numeros %d + %d sao: %d\n ", number1, number2, soma    );



 return 0;
  }
