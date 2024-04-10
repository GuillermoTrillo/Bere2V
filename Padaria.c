
static int codigosPadaria[5] = {31, 32, 33, 34};
static char nomeProdutoPadaria[5][50] =
{
    {"Pao de Forma"},
    {"Pao Integral"},
    {"Pao Frances(Unid)"},
    {"Sonho"}
};
static float precoPadaria[5] = {9.5, 12.5, 1.9, 8.50};
static int repeticaoPadaria = 4;

static float redirecionarGastoPadaria(codigoCompra)
{
    float preco = 0;
    switch(codigoCompra)
    {
    case 31:
        preco = precoPadaria[0];
        break;
    case 32:
        preco = precoPadaria[1];
        break;
    case 33:
        preco = precoPadaria[2];
        break;
    case 34:
        preco = precoPadaria[3];
        break;
    default:
        preco = 0.0;
        break;
    }
    return preco;
}

static float chamarMenuPadaria()
{
    int codigoCompra = 0;
    menuGenerico(codigosPadaria, nomeProdutoPadaria, precoPadaria, repeticaoPadaria);

    scanf("%d", &codigoCompra);

    return redirecionarGastoPadaria(codigoCompra);
}

