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
������� 1.
�� ��������� �������� ������ �������� �������� ����� ��� ��������� �������������� ��������.
����� ������ ��������� ��� ��������� :
-������������ ������ � ������, � ������� ���������� ����������;
-����� ������ � ����� � ����� ���������;
-�������� ������.
�������������� ����� ������ ���������� �� ������ � �������.
� �������� ���� ��������� �������� ���������� ���� ����, � ������� �� ������� �������� ���
���������� ���������� �� ��������� ������, � ����������� ���������� ���������� ������� �������
<string>  ��� ���������� ���� str(�abc�).substr(10);

������� 2.
��������� �������, ������������� �������, ���������� ����� var ��� ���� ������� ����� ������ � char*,
��� ���������� ������ ����������� ��������� �������������� �������� ��� �� �������������� ��� ������ � ������.
class var {
type data;
public:
var();

// �������� ������������ ����������� � �����������

����������� ���������
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