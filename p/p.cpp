#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251); // Ввод с консоли в кодировке 1251
	SetConsoleOutputCP(1251);
	printf("Русский язык вводиться корректно\n");
	int wigth = 100;
    string descr = "Примечание:Тр-трамвай, Тс-троллейбус, А-автобус";
	string vid1;
	string vid2;
	string vid3;
	string m1;
	string m2;
	string m3;
	float len1;
    float len2;
	float len3;
    int t1;
	int t2;
	int t3;

   char tmpC1[32];
   char tmpC2[32];
    
    printf("Введите Вид транспорта 3    маршрут3       Протяж маршрута(км) 3      Время в пути(мин)3\n");
    scanf_s("%s %s %f %u", tmpC1, sizeof(tmpC1), tmpC2, sizeof(tmpC2), &len1, &t1);
    vid1 = tmpC1;
    m1 = tmpC2;
   
    printf("Введите Вид транспорта 3    маршрут3       Протяж маршрута(км) 3      Время в пути(мин)3\n");
    scanf_s("%s %s %f %u", tmpC1, sizeof(tmpC1), tmpC2, sizeof(tmpC2), &len2, &t2);
    vid2 = tmpC1;
    m2 = tmpC2;
    
    printf("Введите Вид транспорта 3    маршрут3       Протяж маршрута(км) 3      Время в пути(мин)3\n");
    scanf_s("%s %s %f %u", tmpC1, sizeof(tmpC1), tmpC2, sizeof(tmpC2), &len3, &t3);
    vid3 = tmpC1;
    m3 = tmpC2;
	
	printf("\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");
	printf("|Ведомость общественного транспорта                                                                |\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");
	//                   28                     19              16          16
	printf("|Вид транспорта    |Маршрут     |Протяженность маршрута(км)           |Время в дороге(мин)         |");
	printf("\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");
    //Строка 1
    printf("|%s", vid1.c_str());
    for (int i = 0; i < 18 - vid1.size(); i++)
        printf(" ");
    printf("|%s", m1.c_str());
    for (int i = 0; i < 12 - m1.size(); i++)
        printf(" ");
    printf("|%.2f", len1);
    for (int i = 0; i < 36 - 4; i++)
        printf(" ");
    printf("|%d", t1);
    for (int i = 0; i < 32 - 6; i++)
        printf(" ");
    printf("|\n");
    for (int i = 0; i < wigth; i++)
        printf("-");
    printf("\n");

    //Строка 2
    printf("|%s", vid2.c_str());
    for (int i = 0; i < 18 - vid2.size(); i++)
        printf(" ");
    printf("|%s", m2.c_str());
    for (int i = 0; i < 12 - m2.size(); i++)
        printf(" ");
    printf("|%.2f", len2);
    for (int i = 0; i < 36 - 4; i++)
        printf(" ");
    printf("|%d", t2);
    for (int i = 0; i < 32 - 6; i++)
        printf(" ");
    printf("|\n");
    for (int i = 0; i < wigth; i++)
        printf("-");
    printf("\n");

    //Строка 3
    printf("|%s", vid3.c_str());
    for (int i = 0; i < 18 - vid3.size(); i++)
        printf(" ");
    printf("|%s", m3.c_str());
    for (int i = 0; i < 12 - m3.size(); i++)
        printf(" ");
    printf("|%.2f", len3);
    for (int i = 0; i < 36 - 4; i++)
        printf(" ");
    printf("|%d", t3);
    for (int i = 0; i < 32 - 6; i++)
        printf(" ");
    printf("|\n");
    for (int i = 0; i < wigth; i++)
        printf("-");
    printf("\n");

    //descr     12
    printf("|Примечание: %s", descr.c_str());
    for (int i = 0; i < wigth - 14 - descr.size(); i++)
        printf(" ");
    printf("|\n");
    for (int i = 0; i < wigth; i++)
        printf("-");
    printf("\n");

}