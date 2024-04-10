
static int codigosLimpeza[5] = {11, 12, 13, 14};
static char nomeProdutoLimpeza[5][50] =
{
       {"Detergente"},
        {"Sabao em Po (1kg)"},
        {" Esponja"},
        {"Amaciante (1Lt)"}
};
static float precoLimpeza[5] = {9.5, 12.5, 1.9, 8.50};
static int repeticaoLimpeza = 4;

static float redirecionarGastoLimpeza(codigoCompra)
{
    float preco = 0;
    switch(codigoCompra)
    {
    case 11:
        preco = precoLimpeza[0];
        break;
    case 12:
        preco = precoLimpeza[1];
        break;
    case 13:
        preco = precoLimpeza[2];
        break;
    case 14:
        preco = precoLimpeza[3];
        break;
    default:
        preco = 0.0;
        break;
    }
    return preco;
}

static float chamarMenuLimpeza()
{
    int codigoCompra = 0;
    float preco = 0;

    menuGenerico(codigosLimpeza, nomeProdutoLimpeza, precoLimpeza, repeticaoLimpeza);

    scanf("%d", &codigoCompra);

    return redirecionarGastoLimpeza(codigoCompra);
}
