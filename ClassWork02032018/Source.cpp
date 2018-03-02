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
				/*2.	���� �������� ���� �����.��������� ��� �������� ���������� ��������� s1 � s2, 
					����� ���� �������� s2 ��������� �������� t1, �������� s1 � �������� t2.*/
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
				//3.	���� �����.������� �� ����� ��� ��������� ������.
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
						printf("\n��������� ����� ������ - %c\n", arr[i - 1]);
						break;
					}
				}
				//printf("Last word - %s\n", arr + 4);
			} break;

			case 4:
			{
				//4.	���� �����.������� �� ����� ��� k - � ������
				int k;
				do
				{
					cout << "������� ����� ������������ ����� - ";
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
						printf("\n%d - � ����� ������ - %c\n", k, arr[i - 1]);
						break;
					}
				}
			} break;

			case 5:
			{
				//5.	���� �����.����������, ��������� �� ������ � ��������� ������� � ���
				char arr[50];
				while (gets_s(arr) != " ")
				{
					gets_s(arr);
					break;
				}
				if (arr + 2 == arr + 4)
					printf("2� - %c � 4� - %c ������� �����!\n", arr + 2, arr + 4);
				else
					printf("2� - %c � 4� - %c ������� �� �����!\n", arr + 2, arr + 4);
			} break;

			case 10:
			{
				//10.	���� �����, ��������� �� ������� ����� ����.������� �� ����� ��� ������ ��������, �� ��������� �������� �����.
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
				//11.	������� ������ �������� �� 10 ���������.�������� ������� - ����� �� ������ '*'.
				char arr[256];
				for (int i = 0; i < length; i++)
				{	
					int code = (int)card[i]; // ����� ��������������
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
				//12.	������� ������ �������� �� 11 ���������.���������� ��� �������� ����� - ������� � ������� �������
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
				//13.	��� ������ ��������, ���������� ���������� �����.����� ���������� ����, ������������ � ����� b
				char text[50];
				fgets(text, 49, stdin);
				int length = strlen(text), count = 0;
				for (int i = 0; i < length; i++)
				{
					if (text[i] == ' ')
						if (text[i + 1] == 'b')
							count++;
				}
				printf("���-�� ���� � ����� b - %d\n", count);
				count = 0;
				char * arr = "JHjh lkjashdlj jh ljkhasj lash lh alh";
				while (*arr != '\0')
				{
					if (*arr == ' ')
						count++;
					arr++;
				}
				printf("���-�� �������� - %d\n", count);
			} break;

			case 14:
			{
				//14.	��� ������ ��������.����������, ������� � ��� ���� r, k, t.
				char arr[] = "";
				printf("������� ����� �� ���� - ");
				fgets(arr, 50, stdin);
				int length = strlen(arr), count = 0;
				for (int i = 0; i < length; i++)
				{
					if (arr[i] == 'r' || arr[i] == 'k' || arr[i] == 't')
						count++;
				}
				printf("���-�� r, k, t � ������ - %d\n", count);
			} break;

			case 15:
			{
				//15.	��� ������ ��������.�������� ��� ���������(:) �� ����� � �������(;) ���������� ���������� �����
			} break;

			case 16:
			{
				//16.	� �������� ������ ������� ��������� ������ � �(������), ������� �������� � ������
				char arr[] = "";
				printf("������� ����� �� ���� - ");
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