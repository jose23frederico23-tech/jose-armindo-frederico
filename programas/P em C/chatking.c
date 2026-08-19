#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <string.h>
int main() {
	setlocale(LC_ALL,"portuguese");
    int opc,opc2;
    int op,i;
    char chat[]="king";
    char enter[50];
    do {
        printf(" Oi sou '%s' um programa com a função de te ajuda a crescer e ter o domínio da sua vida \n",chat);
        printf("\n");
        printf("1-Ver minhas capacidades.\n");
        printf("2-Altera nome do chat.\n ");
        printf("3-Sair.\n");
        scanf("%d",&op);
        switch(op){
        case 1 :
            printf("1-Criar horário de estudos;\n");
            printf("2-Metodos pra aprender rápido;\n");
            printf("3-Educação financeira;\n");
            printf("4-Auxilio a desenvolver autoconfiança e autoestima.\n");
            scanf("%d",&opc);
            switch(opc) {
            case 1 :
                printf("Qual é o periodo que você estás livre pra estudar? \n");
                scanf("%s",&enter);                            																				
                if(strcmp(enter,"manha") ==0|| strcmp(enter,"matinal")==0) {
                    printf("Estudar das 9h até as 11horas.\n");
                    printf("09:00 ás 09:10\n Organização rápida\nPreparar material\nAbrir caderno/editor\nDefinir o objetivo do dia");
                    printf("\n");
                    printf("09:10 ás 09:40\nEstudo principal\nLer o conteudo novo\nAssistir a um vídeo curto\nEntender o conceito (sem decorar)");
                    printf("\n");
                    printf("09:40 ás 09:45 \n Pausa rápida água, alongar, respirar e comer,\n");
                    printf("09:45-10:25 Prática \n Fazer exercecios \n Escrever código\n Errar e corrigir\n");
                    printf("10:25 ás 10:30\nPausa curta \n");
                    printf(" 10:30-10:55\n Revisão inteligente anotar pontos importantes Refazer 1 exercício sem olhar Resumir em poucas linhas\n");
                    printf("10:55 11:00 \nFechamento, o que aprendi hoje? que estudar amanhã?\n");

                } else if(strcmp(enter,"tarde")==0 || strcmp(enter,"tardal")==0) {
                    printf("Estudar das 16h entre 18h.\nUsando o método de promodoro estudar não é castigo, mas sim  um presente,que nos dará a chave do futuro\n");
                    printf("16:00 ás 16:10\nPreparação rápida organizar material, definir objetivo\n");
                    printf("16:10 ás 16:50\nEstudo constante, leitura ou vídeo curto\n");
                    printf("16:50 ás 17:00\nPausa curta\n");
                    printf("17:00 ás 17:40\nPrática e exercícios constancia te torma-o mestre.\n");
                    printf("17:40 ás 17:55\nRevisão rápida anotar pontos-chave dos temas.\n");
                    printf("17:55 ás 18:00\nFechamento, o que aprendeu é a proxima tarefa\n");

                }
                else if(strcmp(enter,"noite")==0 || strcmp(enter,"noturno")==0 )
                {
                    printf("Das 20h até ás 22horas\n");
                    printf("20h20 ás 20h50\nRevisão rápida de conteudos importantes.\n");
                    printf("20h50 ás 21h20\nExercícios práticos e resolusão de problemas\n");
                    printf("21h20 ás 21h50\nResumos ou mapas mentais e fixação rápida\n");
                    printf("21h50 ás 22h00\nPlanejamento do proximo dia de estudo e encerramento\n");
                }
                else {
                    printf("Erro tente novamente \n");

                }
                break;
            case 2 :
                printf("Os métodos pra aprender em um flash são:\n");
                printf("1-Promódoro\n");
                printf("2-Feynman\n");
                printf("3-Active Recall\n");
                printf("4-Spaced Repetition\n");
                printf("5-Interleaving\n");
                printf("Escolha um pra  dar início a evolução\n");
                scanf("%d",&opc2);

                switch(opc2) {

                case 1 :
                    printf("Consiste em estudar 15 minutos e descansar 5 minuto;s\n");
                    printf("A bom,pra quem têm pouco tempo para estudar;\n E sem si cansar muito.");

                    break;

                case 2  :
                    printf("Escolher um tema;\n");
                    printf("Explique como se estivesse ensinando a um crianÃ§a;\n");
                    printf("Força o cêrebro a entender de verdade,não a decorar.\n");
                    break;
                case 3 :
                    printf("Estudar o conteudio;\n");
                    printf("Feche tudo;\n");
                    printf("Tente lembrar e escrever o que aprender,sem consultar o material;\n");
                    printf("O cêrebro aprende melhor quando puxa a informação.Não só quando lê.\n");
                    break;

                case 4 :
                    printf("Revísão do conteudo em intervalos crescentes;\n");
                    printf(" 1dia à 3dias à 6dias à 8dias á 12dias\n");
                    printf("Combate o esquecimento natural do cêrebro.\n");

                    break;
                case 5 :

                    printf("Estuda assuntos diferentes na mesma sessão\n");
                    printf("Melhora a capacidade de diferenciar conceitos.\n");

                    break;
                default :
                    printf("Tente novamente\n");
                    break;

                };
                break;
            case 3:
                printf("Tudo que você precisa saber sobre finanças \n");
                printf("Educação Financeira\n");
                printf("O que é:\nSaber controlar dinheiro, gastar menos do que ganha e investir para aumentar riqueza ao longo do tempo.\n");

                printf("Regras básicas:\n");
                printf("1-Gaste menos do que ganha\n2-Tenha uma reserva de emergência (3 á 6 meses de despesas)\n");
                printf("3-Evite dívidas ruins com juros altos, cartão de crêdito, empréstimos desnecessários\n");
                printf("4-Planeje seus gastos mensal\n");
                printf("Ativos vs Passivos:\n");
                printf("Ativo: coloca dinheiro no seu bolso. Ex: investimentos, aluguel recebido, negócios que geram lucro.\n");
                printf("Passivo: tira dinheiro do seu bolso. Ex: carro caro que são gasto manutenção, dívidas, coisas que depreciam.\n");
                printf("Investir:\n");
                printf("Pouco a pouco, o dinheiro cresce com juros ou valorização.\nTipos: fundos, imveis, tesouro direto.\n");
                printf("Objetivo:\n");
                printf("Transformar passivos em ativos, gastar menos do que ganha e fazer o dinheiro trabalhar para você e não o contrário\n");
                break;
            case 4 :
                printf("Tudo que você precisa saber sobre autoconfiança e autodisciplina :\n");
                printf("Pra ter ou desenvolver autoconfiança ou autodisciplina você deve ter força de vontade.\n");
                printf("Eu vou te ajudar a  ter autoconfiança e autodisciplina na escola e  na vida\n");
                printf("Como desenvolver autoconfiança\nEstudar um pouco todos os dias progresso constante\n");
                printf("Definir metas pequenas e alcançaveis.\n");
                printf("Reconhecer erros como parte do aprendizado.\n");
                printf("Comparar-se apenas com seu próprio progresso.\n");
                printf("Praticar e revisar o conteúdo com frequência.\n");
                printf("Como desenvolver autodisciplina.\n");
                printf("Criar um horário fixo de estudos.\n");
                printf("Estudar mesmo sem motivação inicial.\n");
                printf("Evitar distrações ,celular, redes sociais\n");
                printf("Priorizar tarefas importantes.\n");
                printf("Manter rotina e constância\n");
                break;

            default :
                printf("Erro tente novamente.\n");
                break;
            };

            break;
        case 2 :
            printf("Escreva o novo nome:");
            scanf("%s",&chat);
            break;
        case 3 :
            printf("Saindo.. ");
            break;
        default :
            printf("Erro tente novamente.\n");
            break;
        };
    } while(op!=3);
    return 0;
}
