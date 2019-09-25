#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <vector>
#include <map>

int Calculate(int First, int Second, char operand)
{
	if (operand == '+')
		return First + Second;

	if (operand == '-')
		return First > Second ? First - Second : Second - First;

	if (operand == '*')
		return First * Second;

	if (operand == '\\')
		return Second > NULL ? First / Second : 0;

	return 0;
}

void InsertNum(int* chislo)
{
	static int pos = 0;

	std::cout << "Enter chislo: ";
	std::cin >> chislo[pos];

	pos++;
}

void InsertOperand(char* operand)
{
	static int pos = 0;

	std::cout << "Enter Operand [+ - * /]";
	std::cin >> operand[pos];

	pos++;
}

int main()
{
	printf("Calculator v1337\n");

	int Chislo[] = { 0 };
	char Operands[] = { '\0' };

	InsertNum(Chislo);
	InsertOperand(Operands);
	InsertNum(Chislo);

	int Result = Calculate(Chislo[0], Chislo[1], Operands[0]);

	printf("Result: %d\n", Result);

	system("pause");

	return 0;
}