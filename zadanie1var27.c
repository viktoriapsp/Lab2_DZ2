#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    float konfeta = 300;
    float x = 2;
    float stoimost_konfet = konfeta * x;

    float pechenye = 200;
    float y = 1.5;
    float stoimost_pechenya = pechenye * y;

    float yabloki = 100;
    float z = 3;
    float stoimost_yablok = yabloki * z;

    float summa = stoimost_konfet + stoimost_pechenya + stoimost_yablok;
    
    printf("1 кг конфет стоит %.2f руб, куплено %.2f кг\n", konfeta, x);
    printf("Стоимость конфет: %.2f * %.2f = %.2f руб\n", konfeta, x, stoimost_konfet);
    printf("1 кг печенья стоит %.2f руб, куплено %.2f кг\n", pechenye, y);
    printf("Стоимость печенья: %.2f * %.2f = %.2f руб\n", pechenye, y, stoimost_pechenya);
    printf("1 кг яблок стоит %.2f, куплено %.2f кг\n", yabloki, z);
    printf("Стоимость яблок: %.2f * %.2f = %.2f руб\n", yabloki, z, stoimost_yablok);
    printf("Стоимость всей покупки: %.2f + %.2f + %.2f = %.2f руб\n", stoimost_konfet, stoimost_pechenya, stoimost_yablok, summa);

    return 0;
}