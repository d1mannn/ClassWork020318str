#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include "Header.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	int task;
	do
	{
		task = TaskNumb();
		cin.get();
		switch (task)
		{
			case 1:
			{
				printf("HELLO");
			} break;

			case 2:
			{
				/*2.	Даны названия двух стран.Присвоить эти названия переменным величинам s1 и s2, 
					после чего название s2 присвоить величине t1, название s1 — величине t2.*/
				char s1[] = "Denmark";
				char s2[] = "Japan";
				char t1[] = "";
				char t2[] = "";
				strcpy(t1, s1);
				strcpy(t2, s2);
				printf("S1 = %s, S2 = %s, T1 = %s, T2 = %s\n", s1, s2, t1, t2);
			} break;

			case 3:
			{
				//3.	Дано слово.Вывести на экран его последний символ.
				char arr[50];
				gets_s(arr);
				//fgets(arr, 50, stdin);
				int length = strlen(arr);
				printf("Length of str = %d", length);
				int i = 0;
				while (i < length)
				{
					i++;
					if (i == length)
					{
						printf("\nПоследняя буква строки - %c\n", arr[i - 1]);
						break;
					}
				}
				//printf("Last word - %s\n", arr + 4);
			} break;

			case 4:
			{
				//4.	Дано слово.Вывести на экран его k - й символ
				int k;
				do
				{
					cout << "Введите любое положительно число - ";
					cin >> k;
				} while (k <=0);
				cin.get();
				char arr[50];
				fgets(arr, 49, stdin);
				int length = strlen(arr);
				printf("Length of str = %d", length);
				int i = 0;
				while (i < k)
				{
					i++;
					if (i == k)
					{
						printf("\n%d - я буква строки - %c\n", k, arr[i - 1]);
						break;
					}
				}
			} break;

			case 5:
			{
				//5.	Дано слово.Определить, одинаковы ли второй и четвертый символы в нем
				char arr[50];
				while (gets_s(arr) != " ")
				{
					gets_s(arr);
					break;
				}
				if (arr + 2 == arr + 4)
					printf("2й - %c и 4й - %c символы равны!\n", arr + 2, arr + 4);
				else
					printf("2й - %c и 4й - %c символы НЕ равны!\n", arr + 2, arr + 4);
			} break;

			case 10:
			{
				//10.	Дано слово, состоящее из четного числа букв.Вывести на экран его первую половину, не используя оператор цикла.
				char Word[20];
				scanf("%s", Word);
				int length = strlen(Word);
				length = (((length - 1) / 2) + 1);
				Word[length] = '\0';
				puts(Word);
			} break;

			case 11:
			{
				char card[] = "account: KZT2642654154";
				int length = strlen(card);
				//11.	Введите массив символов из 10 элементов.Замените символы - цифры на символ '*'.
				char arr[256];
				for (int i = 0; i < length; i++)
				{	
					int code = (int)card[i]; // явное преобразование
					if (code >= 48 && code <= 57)
						card[i] = '*';
					//printf("%c\t", card[i]);
				}
				printf("\n\n%s\n\n", card);
				
				/*for (int i = 0; i < 256; i++)
				{
					printf("%c \t", arr[i]);
				}*/
			} break;

			case 12:
			{
				//12.	Введите массив символов из 11 элементов.Переведите все строчные буквы - символы в верхний регистр
				char word[20] = "Hello, My friend";
				int length = strlen(word);
				for (int i = 0; i < length; i++)
				{
					int code = (int)word[i];
					if (code >= 97 && code <= 122)
						word[i] = code - 32;
				}
				puts(word);
			} break;

			case 13:
			{
				//13.	Дан массив символов, содержащий английский текст.Найти количество слов, начинающихся с буквы b
				char text[50];
				fgets(text, 49, stdin);
				int length = strlen(text), count = 0;
				for (int i = 0; i < length; i++)
				{
					if (text[i] == ' ')
						if (text[i + 1] == 'b')
							count++;
				}
				printf("Кол-во слов с буквы b - %d\n", count);
				count = 0;
				char * arr = "JHjh lkjashdlj jh ljkhasj lash lh alh";
				while (*arr != '\0')
				{
					if (*arr == ' ')
						count++;
					arr++;
				}
				printf("Кол-во пробелов - %d\n", count);
			} break;

			case 14:
			{
				//14.	Дан массив символов.Подсчитать, сколько в нем букв r, k, t.
				char arr[] = "";
				printf("Введите текст на англ - ");
				fgets(arr, 50, stdin);
				int length = strlen(arr), count = 0;
				for (int i = 0; i < length; i++)
				{
					if (arr[i] == 'r' || arr[i] == 'k' || arr[i] == 't')
						count++;
				}
				printf("Кол-во r, k, t в тексте - %d\n", count);
			} break;

			case 15:
			{
				//15.	Дан массив символов.Заменить все двоеточия(:) на точку с запятой(;) Подсчитать количество замен
			} break;

			case 16:
			{
				//16.	В заданной строке удалить последний символ « »(пробел), который найдется в строке
				char arr[] = "";
				printf("Введите текст на англ - ");
				fgets(arr, 50, stdin);
				int length = strlen(arr), count = 0, count2 = 0;
				for (int i = 0; i < length; i++)
				{
					if (arr[i] == ' ')
						count++;
				}
				for (int i = 0; i < length; i++)
				{
					if (arr[i] == ' ')
					{
						count2++;
						if (count2 == count)
						{
							for (int j = i; j < length; j++)
							{
								arr[j] = arr[j + 1];
							}
						}
					}
				}
				for (int i = 0; i < length - 1; i++)
				{
					cout << arr[i];
				}
				cout << endl;
			} break;
		}
	} while (task > 1);

}