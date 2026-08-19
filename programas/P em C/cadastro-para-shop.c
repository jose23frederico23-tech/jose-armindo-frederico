#include<stdio.h>
#include<string.h>
#include<locale.h>
 struct cliente{
char nome[255];
int idade,telefone;
};

limite = 3;
typedef struct cliente cliente;

	int main()	{ 
setlocale(LC_ALL,"portuguese");
	cliente cler[limite];
int opcao,i=0,e,a;
char senha[5]="2424";
char entrada[10];

printf("Programa de cadastro de cliente.\n");
do{
	printf("-----------Menu-----------\n");
	printf("1-Cadastrar novo cliente.\n");
	printf("2-Lista de cliente.\n");
	printf("3-Informações dos clientes.\n");
	printf("4-Sair.\n");
	scanf("%d",&opcao);

	switch(opcao){
   		case 1:
   			
 	if(i==limite){
printf("Sem espaço\n");
}
	else{
		printf("Digite os dados do cliente %d\n",i+1);
		
		printf("Digite o nome:"); 
		scanf("%s",cler[i].nome);
		
		printf("Idade:");
		scanf("%d",&cler[i].idade);

	printf("Telefone:");
	scanf("%d",&cler[i].telefone);
i++;
printf("----Feito com sucesso----\n");
}
 break;
 
   case 2:
 if(i<=0){
 printf("Lista vazia.\n");}
 else{
 printf("--Lista--\n");
 for( e=0;e<i;e++){
 printf("Cliente %d\n",e+1);
 printf("Nome:%s\n",cler[e].nome);
 }
 }
 break;
 
   case 3:
 printf("Digite a senha.\n");
 scanf("%s",entrada);
 if(strcmp(entrada,senha)==0){
 printf("--Bem vindo--\n");
 for( a=0;a<i;a++){
 printf("Cliente%d\n",a+1);
 printf("Nome:%s\n",cler[a].nome);
 printf("Idade:%d\n",cler[a].idade);
 printf("Telefone:%d\n",cler[a].telefone);
 printf("\n");
 }
 } else{
 printf("Acesso negado.\n");
 } 
 break;
 
   case 4 :
 printf("Saindo..\n");
 break;
   default :
 printf("Opção errada.Tente novamente.\n");
  }
}while(opcao!=4);
    return 1;
}
