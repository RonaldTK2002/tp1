#include <stdio.h>
#include <stdlib.h>
int main()
{
    int CPF;
    scanf("%d", &CPF);

    int casa1, casa2, casa3, casa4, casa5, casa6, casa7, casa8, casa9, digVerDezena, digVerUnidade;
    casa1 = CPF % 10;
    casa2 = (CPF % 100) / 10;
    casa3 = (CPF % 1000) / 100;
    casa4 = (CPF % 10000) / 1000;
    casa5 = (CPF % 100000) / 10000;
    casa6 = (CPF % 1000000) / 100000;
    casa7 = (CPF % 10000000) / 1000000;
    casa8 = (CPF % 100000000) / 10000000;
    casa9 = (CPF % 1000000000) / 100000000;

    int soma = casa1 * 2 + casa2 * 3 + casa3 * 4 + casa4 * 5 + casa5 * 6 + casa6 * 7 + casa7 * 8 + casa8 * 9 + casa9 * 10;
    if (soma % 11 == 1 | soma % 11 == 0)
    {
        digVerDezena = 0;
    }
    else
    {
        digVerDezena = 11 - (soma % 11);
    }
    int soma2 = 2 * digVerDezena + casa1 * 3 + casa2 * 4 + casa3 * 5 + casa4 * 6 + casa5 * 7 + casa6 * 8 + casa7 * 9 + casa8 * 10 + casa9 * 11;

    if (soma2 % 11 == 0 | soma2 % 11 == 1)
    {
        digVerUnidade = 0;
    }
    else
    {
        digVerUnidade = 11 - (soma2 % 11);
    }

    printf("%d%d\n", digVerDezena, digVerUnidade);

    system("pause");
    return 0;
}
