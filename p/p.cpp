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

	cout << "Вид транспорта:" << endl;
	cin >> vid1;
	cout << "Маршрут:" << endl;
	cin >> m1;
	cout << "Протяженность маршрута(км):" << endl;
	cin >> len1;
	cout << "Время в дороге(мин):" << endl;
	cin >> t1;
	cout << "Вид транспорта:" << endl;
	cin >> vid2;
	cout << "Маршрут:" << endl;
	cin >> m2;
	cout << "Протяженность маршрута(км):" << endl;
	cin >> len2;
	cout << "Время в дороге(мин):" << endl;
	cin >> t2;
	cout << "Вид транспорта:" << endl;
	cin >> vid3;
	cout << "Маршрут:" << endl;
	cin >> m3;
	cout << "Протяженность маршрута(км):" << endl;
	cin >> len3;
	cout << "Время в дороге(мин):" << endl;
	cin >> t3;
	
	printf("\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");
	printf("|Ведомость общественного транспорта                                                                |\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");
	//                   28                     19              16          16
	printf("|Вид транспорта    |Маршрут     |Протяженность маршрута(км)        |Время в дороге(мин)            |");
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
    for (int i = 0; i < 38 - 6; i++)
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
    for (int i = 0; i < 38 - 6; i++)
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
    for (int i = 0; i < 38 - 6; i++)
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