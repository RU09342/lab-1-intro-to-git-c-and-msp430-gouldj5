#include <stdio.h>
#include "math.h"

int math(int num1, int num2, char Operator)
{

	switch (Operator)
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