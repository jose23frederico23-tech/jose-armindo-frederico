#include<stdio.h>

int main()

{
  
  int n,n2,r1,r2,r3,r4;
    int opcao;
    float f1,f2;

    printf("=Calculadora=\n");
    printf("Menu\n");
    printf("1-Adição\n");
    printf("2-Subtração\n");
    printf("3-Multiplicação\n");
    printf("4-Divisão\n");
    scanf("%d",&opcao);
    switch(opcao){
    case 1:
    printf("Escreve o primeiro número\n");
    scanf("%d",&n);
    printf("Escreve o segundo número\n");
    scanf("%d",&n2);
    r1=n+n2;
    printf("O SEU RESULTADO:%d",r1);
    break;
    case 2:
    printf("Escreve o primeiro nnúmero\n");
    scanf("%d",&n);
    printf("Escreve o segundo número\n ");
    scanf("%d",&n2);
    r2=n-n2;
    printf("O SEU RESULTADO :%d",r2);
    break;
    case 3:
    printf("Escreve o primeiro número\n");
    scanf("%d",&n);
    printf("Escreve o segundo número \n");
    scanf("%d",n2);
    r3=n*n2;
    break;
    case 4:
    printf("Escreve o primeiro número \n");
    scanf("%f",&f1);
    printf("Escreve o segundo número \n");
    scanf("%f",&f2);
    r4=f1/f2;
    printf("O SEU RESULTADO:%2.f",r4);
    }

    return "oi";
}