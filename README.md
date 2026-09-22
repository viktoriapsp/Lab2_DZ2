# Домашнее задание к работе 2

## Условие задачи

Известна стоимость 1 кг конфет, печенья и яблок. Найти стоимость всей покупки, если купили X кг конфет, Y кг печенья и Z кг яблок.

## 1. Алгоритм и блок-схема

### Алгоритм

1. Начало.
2. Ввод данных: konfeta, pechenye,yabloki, x, y, z
3. Расчет стоимости каждой покупки: stoimost_konfet = konfeta * x,
stoimost_pechenya = pechenye * y,
stoimost_yablok = yabloki * z,
4. Расчет общей стоимости: summa = stoimost_konfet +
stoimost_pechenya + stoimost_yablok
5. Вывод вычислительных данных
6. Конец 

### Блок-схема

Блок-схема алгоритма представлена в проекте.

## 2. Реализация программы

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

## 3. Результаты работы программы

1 кг конфет стоит 300.00 руб, куплено 2.00 кг 
Стоимость конфет: 300.00 * 2.00 = 600.00 руб
1 кг печенья стоит 200.00 руб, куплено 1.50 кг 
Стоимость печенья: 200.00 * 1.50 = 300.00 руб
1 кг яблок стоит 100.00, куплено 3.00 кг
Стоимость яблок: 100.00 * 3.00 = 300.00 руб
Стоимость всей покупки: 600.00 + 300.00 + 300.00 = 1200.00 руб

## 4. Информация о разработчике
Имя: Страхова Виктория Викторовна
Группа: бИЦТ-261
Вариант:27
