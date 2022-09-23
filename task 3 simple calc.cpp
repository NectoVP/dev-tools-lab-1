#include <iostream>
#include <cmath>
using namespace std;

void calculator(double& num1, double& num2, char& oper) {
	switch (oper)
	{
	case '+':
		cout << num1 + num2;
		break;
	case '-':
		cout << num1 - num2;
		break;
	case '*':
		cout << num1 * num2;
		break;
	case '^':
		cout << pow(num1, num2);
		break;
	case '/':
		cout << num1 / num2;
		break;

	default:
		cout << "input error";
		break;
	}
}

int main()
{
	double num1, num2;
	char oper;
	cout << "enter two nums and mathematical operator inbetween\n";
	cin >> num1 >> oper >> num2;
	calculator(num1, num2, oper);
	
	return 0;
}
