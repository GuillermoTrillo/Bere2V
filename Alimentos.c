
static int codigosAlimentos[5] = {21, 22, 23, 24, 25};
static char nomeProdutoAlimentos[5][50] =
{
    {"Cafe"},
    {"Leite (cx)"},
    {"Arroz (1kg)"},
    {"Feijao"},
    {"Açucar (1kg)"}
};
static float precoAlimentos[5] = {19.99, 5.99, 4.5, 8.00, 5.00};
static int repeticaoAlimentos = 5;


static float redirecionarGastoAlimentos(int codigoCompra)
{
    float preco = 0;

    switch(codigoCompra)
    {
    case 21:
        preco = precoAlimentos[0];
        break;
    case 22:
        preco = precoAlimentos[1];
        break;
    case 23:
        preco = precoAlimentos[2];
        break;
    case 24:
        preco = precoAlimentos[3];
        break;
    case 25:
        preco = precoAlimentos[4];
        break;
    default:
        preco = 0.0;
        break;
    }
    return preco;
}

static float chamarMenuAlimentos()
{
    int codigoCompra = 0;

    menuGenerico(codigosAlimentos, nomeProdutoAlimentos, precoAlimentos, repeticaoAlimentos);

    scanf("%d", &codigoCompra);

    return redirecionarGastoAlimentos(codigoCompra);
}

