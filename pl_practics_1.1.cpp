#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); // Ввод с консоли в кодировке 1251
    SetConsoleOutputCP(1251);

    char sn_1[20], tc_1[20], s_1[20], p_1[20],
         sn_2[20], tc_2[20], s_2[20], p_2[20],
         sn_3[20], tc_3[20], s_3[20], p_3[20];

    printf("Напишите Фамилии участников, Коды команд, Количества баллов, Места в Итоге\n");
    
    scanf_s("%s", sn_1, sizeof(sn_1));
    scanf_s("%s", tc_1, sizeof(tc_1));
    scanf_s("%s", s_1, sizeof(s_1));
    scanf_s("%s", p_1, sizeof(p_1));

    scanf_s("%s", sn_2, sizeof(sn_2));
    scanf_s("%s", tc_2, sizeof(tc_2));
    scanf_s("%s", s_2, sizeof(s_2));
    scanf_s("%s", p_2, sizeof(p_2));

    scanf_s("%s", sn_3, sizeof(sn_3));
    scanf_s("%s", tc_3, sizeof(tc_3));
    scanf_s("%s", s_3, sizeof(s_3));
    scanf_s("%s", p_3, sizeof(p_3));
    
    int i, wigth = 80;

    for (i = 0; i <= wigth; i++)
        printf("-");

    printf("\n\|Ведомость спортивних состязаний                                                |\n");

    for (i = 0; i <= wigth; i++)
        printf("-");

    printf("\n|Фамилия участника     |Код команды   |Количество баллов     |Место в итоге     |\n");

    for (i = 0; i < wigth; i++)
        printf("-");

    //ПЕРВЫЙ УЧАСТНИК
    printf("\n|%s", sn_1);
    for (i = 0; i < 22 - strlen(sn_1); i++)
        printf(" ");

    printf("|%s", tc_1);
    for (i = 0; i < 14 - strlen(tc_1); i++)
        printf(" ");

    printf("|%s", s_1);
    for (i = 0; i < 22 - strlen(s_1); i++)
        printf(" ");
    printf("|%s", p_1);
    for (int i = 0; i < 18 - strlen(p_1); i++)
        printf(" ");

    printf("|\n");
    for (i = 0; i < wigth; i++)
        printf("-");


    //ВТОРОЙ УЧАСТНИК
    printf("\n|%s", sn_2);
    for (i = 0; i < 22 - strlen(sn_2); i++)
        printf(" ");

    printf("|%s", tc_2);
    for (i = 0; i < 14 - strlen(tc_2); i++)
        printf(" ");

    printf("|%s", s_2);
    for (i = 0; i < 22 - strlen(s_2); i++)
        printf(" ");
    printf("|%s", p_2);
    for (int i = 0; i < 18 - strlen(p_2); i++)
        printf(" ");

    printf("|\n");
    for (i = 0; i < wigth; i++)
        printf("-");


    //ТРЕТИЙ УЧАСТНИК
    printf("\n|%s", sn_3);
    for (i = 0; i < 22 - strlen(sn_3); i++)
        printf(" ");

    printf("|%s", tc_3);
    for (i = 0; i < 14 - strlen(tc_3); i++)
        printf(" ");

    printf("|%s", s_3);
    for (i = 0; i < 22 - strlen(s_3); i++)
        printf(" ");
    printf("|%s", p_3);
    for (int i = 0; i < 18 - strlen(p_3); i++)
        printf(" ");

    printf("|\n");
    for (i = 0; i < wigth; i++)
        printf("-");

    return 0;
}
