#include <stdio.h>
/*
Анатолий Пенюта
*/

void D2B (int n)
{
    if (n !=0)
    D2B (n /2);
    else return;// к моменту выхода из рекурсии в памяти будет 10 5 2 1 D2B(10). return  для выхода.
    printf("%d", n%2); // в обратном порядке выводим остаток по сонованияю 2 "1010"
}

int Pow (int a, int b)
{
    if (b >0)
        return a * Pow(a, --b);
    else return 1;
}

int Pow2 (int a, int b)
{
    if (b >0 && b%2 == 0)
        return Pow(a, b/2) * Pow(a, b/2);
    else return 1; //    a * Pow(a, --b);
}



int main()
{
    D2B(15);
    printf("\n");
    printf("%d", Pow (5, 8));
    printf("\n");
    printf("%d", Pow2 (5, 8));
    return 0;
}
