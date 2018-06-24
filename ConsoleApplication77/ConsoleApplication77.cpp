// ConsoleApplication77.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Exception.h"
#include <iostream>
#include <ctime>
#include <clocale>
#include <list>
#include "var.h"

using namespace std;

/*
Задание 1.
На основании базового класса создайте дочерний класс для обработки исключительных ситуаций.
Класс должен содержать три параметра :
-наименование класса и метода, в котором вызывается исключение;
-номер строки в файле с кодом программы;
-описание ошибки.
Переопределите метод вывода информации об ошибке в консоль.
В основном коде программы создайте защищенный блок кода, в котором по очереди вызовите два
исключения основанных на созданном классе, и перехватите исключение вызываемое базовым классом
<string>  при выполнении кода str(“abc”).substr(10);

Задание 2.
Используя шаблоны, специализацию шаблона, реализуйте класс var для всех базовых типов данных и char*,
при реализации класса используйте обработку исключительных ситуаций для их предотвращения при работе с данных.
class var {
type data;
public:
var();

// Создайте конструкторы копирования и перемещения

Перегрузите операторы
+, -, *, /, =, +=, -=, ==, <, >, <<

virtual ~var();
*/

int main() {
	var<int> a = 9;
	var<char*> GrBr("Great Britain consist of 4 parts.");

	try
	{
		var<int> c = a / 0;
	}
	catch (const Exception& name)
	{
		cout << name.what() << endl;
	}


	try
	{
		var<char*> multiplyChar = GrBr * "London is the capital of England.";
	}
	catch (const Exception& name)
	{
		cout << name.what() << endl;
	}


	try
	{
		var<char*> deductChar = GrBr - "London is the capital of England.";
	}
	catch (const Exception& name)
	{
		cout << name.what() << endl;
	}


	try
	{
		var<char*> deductEqalChar = GrBr -= "London is the capital of England.";
	}
	catch (const Exception& name)
	{
		cout << name.what() << endl << endl;
	}


	return EXIT_SUCCESS;
}