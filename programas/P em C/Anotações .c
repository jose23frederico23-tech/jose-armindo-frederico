#include<stdio.h>
#include<string.h>
limite =3;

int main(){
 char nota[200];
 int opcao;
 int i =0;
 printf("Programa de anotações \n");
 do{ printf("==Menu==\n");
  printf("1-Criar nota.\n");
  printf("2-Lista.\n");
  printf("3-Ver a mais recente.\n");
  printf("4-Sair.\n");
  scanf("%d",&opcao);
  getchar();
  switch(opcao){
    case 1 :
  if(i==limite){
  printf("Sem espaço.\n");
  }else{
  
  printf(" Nota %d\n",i+1);
  printf("Escreva um texto.\n");
  getsf(nota,202, stdin);
  printf("Guardada com sucesso\n");
  i++;
  
 }
  break;
    case 2 :
   if(i==0){
  printf("Não existe nenhuma anotação.\n");
  }else{
  printf("Lista de anotações\n");
   for(int l=0; l< i ;l++){
  printf("Nota %d\n",l + 1);
  printf("%s\n",nota,l);
  printf("------------------------\n");
  }
  }
  break;
    case 3 :
  printf("%s\n",nota);
  break;
  case 4 :
  printf("Saindo...\n");
  break;
  default : 
  printf("Opção errada.Tente novimente\n");
  break;
   }
  }while(opcao!=4);
 return 9;}
