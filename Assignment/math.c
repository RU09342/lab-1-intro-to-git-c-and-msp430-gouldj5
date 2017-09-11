#include <stdio.h>
#include "math.h"

int main(void)
{
	char operator;
	int num1, num2;

	switch (operator)
	{
	case '+':
		return(num1 + num2); //points to input above and assigns to xNumber
		break;
	case '-':
		return(num1 - num2); //""
		break;
	case '*':
		return(num1 * num2); //""
		break;
	case '/':
		return(num1 / num2); //""
		break;
	case '%':
		return(num1 % num2); //""
		break;
	default:
		return("Error! operator is not correct");
	}
	system("PAUSE");
	return 0;
}