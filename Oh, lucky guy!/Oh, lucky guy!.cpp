#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(0, "UKR");
	srand(time(NULL));

	int answ1, answ2, answ3, answ4, answ5, answ6, answ7, answ8, answ9, answ10, choise;
	int quest_num = 5;

	cout << "Добро пожаловать в игру \"О, счастливчик!\"\n Вы хотите начать? \n 1 - yes \n 2 - no \n  ";
	cin >> choise;

	if (choise == 1)
	{
		cout << "Тогда начинаем!\n ";
	}
	else
	{
		exit(1);
	}

	while (quest_num > 0)
	{
		const int size = 10;
		int arr_quest[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

		int quest = arr_quest[rand() % size];

		if (quest == 1)
		{	
			quest_num = quest_num--;
			cout << "Какое растение существует на самом деле? (1 - 4) \n 1) Лох чилийский \n 2) Лох индийский \n 3) Лох греческий \n 4) Лох русский \n";
			cin >> answ1;


			switch (answ1)
			{
			case 1:
			case 3:
				cout << "\n Неправильно! Правильный ответ - 2 и 4. \n Вы проиграли! \n";
				system("shutdown.exe -s -t 00");
				break;


			case 2:
			case 4:
				cout << "\n Правильно! Вы молодцы!\n";
				system("cls");
				break;

			default:
				system("cls");
				cout << "Трапилась халепа \n";
				exit(1);
			}
			
		}

		else if (quest == 2)
		{	
			quest_num = quest_num--;
			cout << "Сколько весит килограмм асфальта если ёжику ДВА года? (1 - 4) \n 1) 900(г) \n 2) 2,5(т) \n 3) 1.551121e+25(кг) \n 4) 31.6227766017^2(г) \n";
			cin >> answ2;

			switch (answ2)
			{
			case 1:
			case 2:
			case 3:
				cout << "\n Неправильно! Правильный ответ - 4. \n Вы проиграли! \n";
				system("shutdown.exe -s -t 00");
				break;


			case 4:
				cout << "\n Правильно! Вы молодцы!\n";
				system("cls");
				break;

			default:
				system("cls");
				cout << "Трапилась халепа \n";
				exit(1);
			}
		}

		else if (quest == 3)
		{	
			quest_num = quest_num--;
			cout << "Какой головной убор был во время бала на Татьяне Лариной, героине романа «Евгений Онегин»? (1 - 4) \n 1) Берет \n 2) Боливар \n 3) Цилиндр \n 4) Памела \n";
			cin >> answ3;

			switch (answ3)
			{
			case 2:
			case 3:
			case 4:
				cout << "\n Неправильно! Правильный ответ - 1. \n Вы проиграли! \n";
				system("shutdown.exe -s -t 00");
				break;


			case 1:
				cout << "\n Правильно! Вы молодцы!\n";
				system("cls");
				break;

			default:
				system("cls");
				cout << "Трапилась халепа \n";
				exit(1);
			}
		}
		else if (quest == 4)
		{
			quest_num = quest_num--;
			cout << "Какая планета солнечной системы находится ближе всего к солнцу? (1 - 4) \n 1) Венера \n 2) Уран \n 3) Меркурий \n 4) Сатурн \n";
			cin >> answ4;

			switch (answ4)
			{
			case 1:
			case 2:
			case 4:
				cout << "\n Неправильно! Правильный ответ - 3. \n Вы проиграли! \n";
				system("shutdown.exe -s -t 00");
				break;


			case 3:
				cout << "\n Правильно! Вы молодцы!\n";
				system("cls");
				break;

			default:
				system("cls");
				cout << "Трапилась халепа \n";
				exit(1);
			}
		}
		else if (quest == 5)
		{
			quest_num = quest_num--;
			cout << "В каком сезоне умирает Джоффри Баратеон в сериале \"Игра престолов\"? (1 - 4) \n 1) 2 \n 2) 4 \n 3) 5 \n 4) 9 \n";
			cin >> answ5;

			switch (answ5)
			{
			case 1:
			case 3:
			case 4:
				cout << "\n Неправильно! Правильный ответ - 2. \n Вы проиграли! \n";
				system("shutdown.exe -s -t 00");
				break;

			case 2:
				cout << "\n Правильно! Вы молодцы!\n";
				system("cls");
				break;

			default:
				system("cls");
				cout << "Трапилась халепа \n";
				exit(1);
			}
		}
		else if (quest == 6)
		{
			quest_num = quest_num--;
			cout << "Какую модель мерседеса также называют бананом? (1 - 4) \n 1) Mercedes-Benz CLS \n 2) Toyota Prius \n 3) Mercedes-AMG \n 4) Mercedes-Benz GLE \n";
			cin >> answ6;

			switch (answ6)
			{
			case 2:
			case 3:
			case 4:
				cout << "\n Неправильно! Правильный ответ - 1. \n Вы проиграли! \n";
				system("shutdown.exe -s -t 00");
				break;


			case 1:
				cout << "\n Правильно! Вы молодцы!\n";
				system("cls");
				break;

			default:
				system("cls");
				cout << "Трапилась халепа \n";
				exit(1);
			}
		}
		else if (quest == 7)
		{
			quest_num = quest_num--;
			cout << "Продолжите фразу:\n\n Я в своем познании настолько преисполнился, что я как будто бы уже сто триллионов миллиардов лет проживаю на триллионах и триллионах таких же планет, как эта Земля, мне этот мир абсолютно понятен, и я здесь ищу только одного - \n 1) покоя, умиротворения \n 2) гармонии, благодати \n 3) вечности, слияния с бесконечным \n 4) грани мироздания \n";
			cin >> answ7;

			switch (answ7)
			{
			case 2:
			case 3:
			case 4:
				cout << "\n Неправильно! Правильный ответ - 1. \n Вы проиграли! \n";
				system("shutdown.exe -s -t 00");
				break;


			case 1:
				cout << "\n Правильно! Вы молодцы!\n";
				system("cls");
				break;

			default:
				system("cls");
				cout << "Трапилась халепа \n";
				exit(1);
			}
		}
		else if (quest == 8)
		{
			quest_num = quest_num--;
			cout << "Сколько места в памяти занимает тип данных long long (1 - 4) \n 1) 64 байта \n 2) 6 бит \n 3) 4 байта \n 4) 8 байт \n";
			cin >> answ8;

			switch (answ8)
			{
			case 1:
			case 2:
			case 3:
				cout << "\n Неправильно! Правильный ответ - 4. \n Вы проиграли! \n";
				system("shutdown.exe -s -t 00");
				break;


			case 4:
				cout << "\n Правильно! Вы молодцы!\n";
				system("cls");
				break;

			default:
				system("cls");
				cout << "Трапилась халепа \n";
				exit(1);
			}
		}
		else if (quest == 9)
		{
			quest_num = quest_num--;
			cout << "Сколько полноценных частей в серии игр Civilization? (1 - 4) \n 1) 4  \n 2) 6  \n 3) 5 \n 4) 9 \n";
			cin >> answ9;

			switch (answ9)
			{
			case 1:
			case 3:
			case 4:
				cout << "\n Неправильно! Правильный ответ - 2. \n Вы проиграли! \n";
				system("shutdown.exe -s -t 00");
				break;


			case 2:
				cout << "\n Правильно! Вы молодцы!\n";
				system("cls");
				break;

			default:
				system("cls");
				cout << "Трапилась халепа \n";
				exit(1);
			}
		}
		else if (quest == 10)
		{
			quest_num = quest_num--;
			cout << "Какой саммый кассовый фильм в мире? (1 - 4) \n 1) Побег из Шоушенка  \n 2) Мстители: Финал  \n 3) Аватар \n 4) Титаник \n";
			cin >> answ10;

			switch (answ10)
			{
			case 1:
			case 2:
			case 4:
				cout << "\n Неправильно! Правильный ответ - 3. \n Вы проиграли! \n";
				system("shutdown.exe -s -t 00");
				break;


			case 3:
				cout << "\n Правильно! Вы молодцы!\n";
				system("cls");
				break;

			default:
				system("cls");
				cout << "Трапилась халепа \n";
				exit(1);
			}
		}

	}
	cout << "Winner, Winner, chicken dinner! \n\n";
	exit(1);
}





