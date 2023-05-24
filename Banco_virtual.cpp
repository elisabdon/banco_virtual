#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

struct Conta {
    int numero;
    float saldo;
    int aberta;
};

int main() {
    char opcao; 
    int qtdContas = 0;
    struct Conta contas[100];

    do {
        printf("\n=== Ola, bem vindo ao banco virtual ===\n\n"); 
        printf("Por favor, insira qual o tipo de transicao que deseja efetuar: \n\n");
        printf("|O| - para abrir uma conta |B| - Consulta de saldo |D| - Sua conta apos um deposito |W| - para sacar dinheiro |C| - Fechar a conta |P| - Imprimir o numero de todas as contas |E| - Fechar todas as contas e sair do programa\n"); // Alteração: Corrigido erro de digitação e incluída opção de imprimir todas as contas
        printf("\n==> ");
        scanf(" %c", &opcao); 

        switch (opcao) {
            case 'O':
                if (qtdContas >= 100) {
                    printf("Nao e possivel abrir mais contas.");
                    break;
                }

                float depositoInicial;
                printf(" \nDeposito Inicial: ");
                scanf("%f", &depositoInicial);

                struct Conta novaConta;
                novaConta.numero = qtdContas + 1;
                novaConta.saldo = depositoInicial;
                novaConta.aberta = 1;
                contas[qtdContas] = novaConta;
                	system("color C");
					system("cls");
					printf("\n\n\t\t\t\t\t\t\t .  C A R R E G A N D O .  ");
					Sleep(400); 
					system("cls");
					printf("\n\n\t\t\t\t\t\t\t . .  C A R R E G A N D O  . . ");
					Sleep(400); 
					system("cls");
					printf("\n\n\t\t\t\t\t\t\t . . .  C A R R E G A N D O  . . . ");
					Sleep(400); 
					system("cls");
					printf("\n\n\t\t\t\t\t\t\t . . . .  C A R R E G A N D O  . . . . ");
					Sleep(400); 	
					system("cls"); 
					printf("\n\n\t\t\t\t\t\t\t . . . . .  C A R R E G A N D O  . . . . . ");
					Sleep(400); 	
					system("cls"); 

                printf("\nConta criada com sucesso. Numero da conta: %d\n", novaConta.numero); 
                qtdContas++;
                break;
            case 'B':
                int numConta;
                printf("\nNumero da Conta: ");
                scanf("%d", &numConta);

                if (numConta < 1 || numConta > qtdContas || !contas[numConta-1].aberta) {
                    printf("\nConta nao encontrada.");
                    break;
                }
                	system("color C");
					system("cls");
					printf("\n\n\t\t\t\t\t\t\t .  C A R R E G A N D O .  ");
					Sleep(400); 
					system("cls");
					printf("\n\n\t\t\t\t\t\t\t . .  C A R R E G A N D O  . . ");
					Sleep(400); 
					system("cls");
					printf("\n\n\t\t\t\t\t\t\t . . .  C A R R E G A N D O  . . . ");
					Sleep(400); 
					system("cls");
					printf("\n\n\t\t\t\t\t\t\t . . . .  C A R R E G A N D O  . . . . ");
					Sleep(400); 	
					system("cls"); 
					printf("\n\n\t\t\t\t\t\t\t . . . . .  C A R R E G A N D O  . . . . . ");
					Sleep(400); 	
					system("cls");
					
                printf("Conta: %d | Saldo: %.2f\n", contas[numConta-1].numero, contas[numConta-1].saldo); 
                break;
                
            case 'D':
                int numContaDeposito;
                printf("\nNumero da Conta: ");
                scanf("%d", &numContaDeposito);

                if (numContaDeposito < 1 || numContaDeposito > qtdContas || !contas[numContaDeposito-1].aberta) {
                    printf("\nConta nao encontrada.");
                    break;
                }

                float valorDeposito;
                printf("\nQuantidade: ");
                scanf("%f", &valorDeposito);
                                	system("color C");
					system("cls");
					printf("\n\n\t\t\t\t\t\t\t .  C A R R E G A N D O .  ");
					Sleep(400); 
					system("cls");
					printf("\n\n\t\t\t\t\t\t\t . .  C A R R E G A N D O  . . ");
					Sleep(400); 
					system("cls");
					printf("\n\n\t\t\t\t\t\t\t . . .  C A R R E G A N D O  . . . ");
					Sleep(400); 
					system("cls");
					printf("\n\n\t\t\t\t\t\t\t . . . .  C A R R E G A N D O  . . . . ");
					Sleep(400); 	
					system("cls"); 
					printf("\n\n\t\t\t\t\t\t\t . . . . .  C A R R E G A N D O  . . . . . ");
					Sleep(400); 	
					system("cls");

                contas[numContaDeposito-1].saldo += valorDeposito;
                printf("\nConta: %d | Novo Saldo: %.2f\n", contas[numContaDeposito-1].numero, contas[numContaDeposito-1].saldo);
				break;
				
				case 'W':
				int numContaSaque;
				printf("\nNumero da Conta: ");
				scanf("%d", &numContaSaque);

            if (numContaSaque < 1 || numContaSaque > qtdContas || !contas[numContaSaque-1].aberta) {
                printf("\nConta nao encontrada.");
                break;
            }

            float valorSaque;
            printf("\nQuantidade: ");
            scanf("%f", &valorSaque);
                            	system("color C");
					system("cls");
					printf("\n\n\t\t\t\t\t\t\t .  C A R R E G A N D O .  ");
					Sleep(400); 
					system("cls");
					printf("\n\n\t\t\t\t\t\t\t . .  C A R R E G A N D O  . . ");
					Sleep(400); 
					system("cls");
					printf("\n\n\t\t\t\t\t\t\t . . .  C A R R E G A N D O  . . . ");
					Sleep(400); 
					system("cls");
					printf("\n\n\t\t\t\t\t\t\t . . . .  C A R R E G A N D O  . . . . ");
					Sleep(400); 	
					system("cls"); 
					printf("\n\n\t\t\t\t\t\t\t . . . . .  C A R R E G A N D O  . . . . . ");
					Sleep(400); 	
					system("cls");

            if (contas[numContaSaque-1].saldo < valorSaque) {
                printf("\nSaldo insuficiente.");
                break;
            }

            contas[numContaSaque-1].saldo -= valorSaque;
            printf("\nConta: %d | Novo Saldo: %.2f\n", contas[numContaSaque-1].numero, contas[numContaSaque-1].saldo); 
            break;
            
        case 'C':
            int numContaFechamento;
            printf("\nNumero da Conta: ");
            scanf("%d", &numContaFechamento);

            if (numContaFechamento < 1 || numContaFechamento > qtdContas || !contas[numContaFechamento-1].aberta) {
                printf("\nConta nao encontrada.");
                break;
            }
                	system("color C");
					system("cls");
					printf("\n\n\t\t\t\t\t\t\t .  C A R R E G A N D O .  ");
					Sleep(400); 
					system("cls");
					printf("\n\n\t\t\t\t\t\t\t . .  C A R R E G A N D O  . . ");
					Sleep(400); 
					system("cls");
					printf("\n\n\t\t\t\t\t\t\t . . .  C A R R E G A N D O  . . . ");
					Sleep(400); 
					system("cls");
					printf("\n\n\t\t\t\t\t\t\t . . . .  C A R R E G A N D O  . . . . ");
					Sleep(400); 	
					system("cls"); 
					printf("\n\n\t\t\t\t\t\t\t . . . . .  C A R R E G A N D O  . . . . . ");
					Sleep(400); 	
					system("cls");
            contas[numContaFechamento-1].aberta = 0;
            printf("\nConta fechada com sucesso.\n"); 
            break;
            
        case 'P':
            printf("\nNumero de contas abertas: %d\n", qtdContas); 
            for (int i = 0; i < qtdContas; i++) {
            	                	system("color C");
					system("cls");
					printf("\n\n\t\t\t\t\t\t\t .  C A R R E G A N D O .  ");
					Sleep(400); 
					system("cls");
					printf("\n\n\t\t\t\t\t\t\t . .  C A R R E G A N D O  . . ");
					Sleep(400); 
					system("cls");
					printf("\n\n\t\t\t\t\t\t\t . . .  C A R R E G A N D O  . . . ");
					Sleep(400); 
					system("cls");
					printf("\n\n\t\t\t\t\t\t\t . . . .  C A R R E G A N D O  . . . . ");
					Sleep(400); 	
					system("cls"); 
					printf("\n\n\t\t\t\t\t\t\t . . . . .  C A R R E G A N D O  . . . . . ");
					Sleep(400); 	
					system("cls");
                printf("\nConta: %d\n", contas[i].numero);
            }
            break;
            
        case 'E':
            for (int i = 0; i < qtdContas; i++) {
                contas[i].aberta = 0;
            }
                            	system("color C");
					system("cls");
					printf("\n\n\t\t\t\t\t\t\t .  C A R R E G A N D O .  ");
					Sleep(400); 
					system("cls");
					printf("\n\n\t\t\t\t\t\t\t . .  C A R R E G A N D O  . . ");
					Sleep(400); 
					system("cls");
					printf("\n\n\t\t\t\t\t\t\t . . .  C A R R E G A N D O  . . . ");
					Sleep(400); 
					system("cls");
					printf("\n\n\t\t\t\t\t\t\t . . . .  C A R R E G A N D O  . . . . ");
					Sleep(400); 	
					system("cls"); 
					printf("\n\n\t\t\t\t\t\t\t . . . . .  C A R R E G A N D O  . . . . . ");
					Sleep(400); 	
					system("cls");
            printf("\nTodas as contas foram fechadas.\n"); 
            exit(0);
        default:
            printf("\nOpcao invalida. Tente novamente.\n"); 
    }
} while (opcao != 'E');

return 0;
}