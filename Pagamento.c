static float gastosTotais;

// Mostra o valor a ser pago em cartao
static void tratarCartao()
{
    system("cls");
    printf("Valor total: %.2f \n", gastosTotais);
}
// Verifica se o cartao conseguiu ser usado na maquina de cartao
static int maquinaDeCartao()
{
    int estadoCartao = 0;
    printf("\n O cartao passou corretamente na maquininha? \n");

    printf("1. sim \n");
    printf("2. nao \n");

    scanf("%d", &estadoCartao);

    if(estadoCartao == 1)
    {
        return 0;
    }
    else
    {
        return 2;
    }
}

// Cria o desconto correspodente, e mostra o valor a ser pago em dinheiro
static void tratarDinheiro()
{
    system("cls");

    float porcentagem = 0.0;
    float desconto = 0;
    float valorComDesconto = 0;

    if(gastosTotais > 0 && gastosTotais <= 50)
    {
        porcentagem = 0.05;

    }
    else if(gastosTotais > 50 && gastosTotais <= 99)
    {
        porcentagem = 0.10;

    }
    else
    {
        porcentagem = 0.18;
    }

    desconto = (porcentagem * gastosTotais);
    valorComDesconto = (gastosTotais - desconto);

    printf("Valor total: %.2f \n", gastosTotais);
    printf("Valor descontado: %.2f \n", desconto);
    printf("Valor final com desconto: %.2f \n", valorComDesconto);
}

// Pede o tipo de pagamento
static int tipoPagamento(float gastos)
{
    gastosTotais = gastos;

    int formaPagamento;

    mostrarAPagar();

    printf("Escolha a forma de pagamento: \n");

    printf("1. cartao \n");
    printf("2. dinheiro \n");
    scanf("%d", &formaPagamento);

    return formaPagamento;
}
