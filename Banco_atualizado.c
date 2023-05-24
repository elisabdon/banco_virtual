#include <stdio.h>
#include <stdbool.h>

// ! VARIÁVEIS E ESTRUTURAS
int contasAbertas = 0;

typedef struct Conta
{
    float saldo;
    int numeroConta;
    bool ativa;
} Conta;


// ! FUNÇÕES
void AbrirConta(Conta *contas, float saldoInicial)
{

    if(contasAbertas <= 50 && saldoInicial >= 0)
    {
        int i;
        for(i = 0 ; i < 50; i++)
        {
            if(contas[i].ativa == false)
            {
                contas[i].ativa = true;
                contas[i].saldo = saldoInicial;

                printf("Numero da conta: %d\n", contas[i].numeroConta);
                break;
            }
        }
    }
    else
    {
        printf("Não existe conta disponível!\n");
    }
}

void ConsultarConta(Conta *contas, int numeroConta)
{
    if(numeroConta >= 1001 && numeroConta <= 1050)
    {
        if(contas[numeroConta-1001].ativa == true)
        {
            printf("Saldo: %.2f\n", contas[numeroConta-1001].saldo);
            printf("Numero Conta: %d\n", contas[numeroConta-1001].numeroConta);
        }
        else
        {
            printf("Conta não foi ativada\n");
        }
    }
    else
    {
        printf("Numero da conta invalido!\n");
    }
}

void DepositarConta(Conta *contas, int numeroConta, float deposito)
{
    if(contas[numeroConta-1001].ativa == true && deposito >= 0 && numeroConta >= 1001 && numeroConta <= 1050)
    {
        contas[numeroConta-1001].saldo += deposito;

        printf("Novo saldo: %.2f\n", contas[numeroConta-1001].saldo);
        printf("Numero da conta: %d\n", numeroConta);
    }
    else
    {
        printf("ERRO!\n");
    }
}

void SaqueConta(Conta *contas, int numeroConta, float saque)
{
    if(contas[numeroConta-1001].ativa == true && saque > 0 && numeroConta >= 1001 && numeroConta <= 1050)
    {
        if(contas[numeroConta-1001].saldo - saque > 0)
        {
            contas[numeroConta-1001].saldo -= saque;

            printf("Novo saldo: %.2f\n", contas[numeroConta-1001].saldo);
            printf("Numero da conta: %d\n", numeroConta);
        }
        else
        {
            printf("Saldo insuficiente\n");
        }
    }
    else
    {
        printf("ERRO!\n");
    }
}

void FecharConta(Conta *contas, int numeroConta)
{
    if(numeroConta >= 1001 && numeroConta <= 1050)
    {
        if(contas[numeroConta-1001].ativa == true)
        {
            contas[numeroConta-1001].saldo = 0;
            contas[numeroConta-1001].ativa = false;
        }
        else
        {
            printf("Conta fechada\n");
        }
    }
    else
    {
        printf("Conta invalida\n");
    }
}

void ImprimirContas(Conta *contas)
{
    int i;
    for(i = 0; i < 50; i++)
    {
        printf("#######\n");
        printf("Numero Conta: %d\n", contas[i].numeroConta);
        printf("Saldo: %.2f\n", contas[i].saldo);
        printf("Status: %s\n", contas[i].ativa == 0 ? "Fechada" : "Aberta");
        printf("#######\n\n");
    }
}

// ! MAIN
int main()
{
    Conta banco[50];
    int i;
    float dinheiro;
    int conta;
    char operacao;

    // INICIAR OS VALORES DAS CONTAS
    for(i = 0; i < 50; i++)
    {
        banco[i].saldo = 0;
        banco[i].numeroConta = 1001 + i;
        banco[i].ativa = false;
    }

    do
    {
        printf("### MENU ###\n");
        printf("O - Abrir conta\n");
        printf("B - Consultar\n");
        printf("D - Deposito\n");
        printf("W - Saque\n");
        printf("C - Fechar\n");
        printf("P - Imprimir tudo\n");
        printf("E - Sair\n");
        printf("Escolha: ");
        scanf(" %c", &operacao);

        if(operacao == 'O')
        {
            printf("Digite um saldo para o deposito: ");
            scanf("%f", &dinheiro);

            AbrirConta(banco, dinheiro);   
        }
        else if(operacao == 'B')
        {
            printf("Digite o numero da conta: ");
            scanf("%d", &conta);

            ConsultarConta(banco, conta);
        }
        else if(operacao == 'D')
        {
            printf("Digite o numero da conta: ");
            scanf("%d", &conta);
            printf("Digite um saldo para o deposito: ");
            scanf("%f", &dinheiro);

            DepositarConta(banco, conta, dinheiro);
        }
        else if(operacao == 'W')
        {
            printf("Digite o numero da conta: ");
            scanf("%d", &conta);
            printf("Digite um saldo para o saque: ");
            scanf("%f", &dinheiro);

            SaqueConta(banco, conta, dinheiro);
        }
        else if(operacao == 'C')
        {
            printf("Digite o numero da conta: ");
            scanf("%d", &conta);

            FecharConta(banco, conta);
        }
        else if(operacao == 'P')
        {
            ImprimirContas(banco);
        }
        else if(operacao == 'E')
        {
            printf("Fechando Software!\n");
        }
        else
        {
            printf("Opção Invalida\n");
        }
    }
    while(operacao != 'E');


    return 0;
}