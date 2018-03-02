#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include "Header.h"
using namespace std;

int TaskNumb()
{
	setlocale(LC_ALL, "rus");
	int task;
	cout << "Введите номер задания - ";
	cin >> task;
	return task;
}