#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251); // Ввод с консоли в кодировке 1251
	SetConsoleOutputCP(1251);
	printf("Русский язык вводиться корректно\n");
	int wigth = 80;
    string descr = "оклад установлен по состоянию на 1 января 2000 года";
	string sur1;
	string sur2;
	string sur3;
	string id1;
	string id2;
	string id3;
	int bd1;
	int bd2;
	int bd3;
	float sl1;
	float sl2;
	float sl3;

	cout << "Enter value of sur1" << endl;
	cin >> sur1;
	cout << "Enter value of id1" << endl;
	cin >> id1;
	cout << "Enter value of bd1" << endl;
	cin >> bd1;
	cout << "Enter value of sl1" << endl;
	cin >> sl1;
	cout << "Enter value of sur2" << endl;
	cin >> sur2;
	cout << "Enter value of id2" << endl;
	cin >> id2;
	cout << "Enter value of bd2" << endl;
	cin >> bd2;
	cout << "Enter value of sl2" << endl;
	cin >> sl2;
	cout << "Enter value of sur3" << endl;
	cin >> sur3;
	cout << "Enter value of id3" << endl;
	cin >> id3;
	cout << "Enter value of bd3" << endl;
	cin >> bd3;
	cout << "Enter value of sl3" << endl;
	cin >> sl3;
	
	printf("\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");
	printf("|Отдел кадров                                                                  |\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");
	//                   28                     19              16          16
	printf("|Фамилия                    |Инициалы          |Год рожд       |Оклад          |");
	printf("\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");
    //Строка 1
    printf("|%s", sur1.c_str());
    for (int i = 0; i < 27 - sur1.size(); i++)
        printf(" ");
    printf("|%s", id1.c_str());
    for (int i = 0; i < 18 - id1.size(); i++)
        printf(" ");
    printf("|%d", bd1);
    for (int i = 0; i < 15 - 4; i++)
        printf(" ");
    printf("|%.2f", sl1);
    for (int i = 0; i < 15 - 6; i++)
        printf(" ");
    printf("|\n");
    for (int i = 0; i < wigth; i++)
        printf("-");
    printf("\n");

    //Строка 2
    printf("|%s", sur2.c_str());
    for (int i = 0; i < 27 - sur2.size(); i++)
        printf(" ");
    printf("|%s", id2.c_str());
    for (int i = 0; i < 18 - id2.size(); i++)
        printf(" ");
    printf("|%d", bd2);
    for (int i = 0; i < 15 - 4; i++)
        printf(" ");
    printf("|%.2f", sl2);
    for (int i = 0; i < 15 - 6; i++)
        printf(" ");
    printf("|\n");
    for (int i = 0; i < wigth; i++)
        printf("-");
    printf("\n");

    //Строка 3
    printf("|%s", sur3.c_str());
    for (int i = 0; i < 27 - sur3.size(); i++)
        printf(" ");
    printf("|%s", id3.c_str());
    for (int i = 0; i < 18 - id3.size(); i++)
        printf(" ");
    printf("|%d", bd3);
    for (int i = 0; i < 15 - 4; i++)
        printf(" ");
    printf("|%.2f", sl3);
    for (int i = 0; i < 15 - 6; i++)
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