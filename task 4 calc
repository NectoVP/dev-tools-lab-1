	#include <iostream>
	#include <cmath>
	#include <string>
	using namespace std;

	string calculator(double& num1, double& num2, char& oper) {
		switch (oper)
		{
		case '+':
			return to_string(num1 + num2);
			break;
		case '-':
			return to_string(num1 - num2);
			break;
		case '*':
			return to_string(num1 * num2);
			break;
		case '^':
			return to_string(pow(num1, num2));
			break;
		case '/':
			return to_string(num1 / num2);
			break;

		default:
			return "input error";
			break;
		}
	}

	int main()
	{
		double num1, num2;
		char oper;
		cout << "enter two nums and mathematical operator inbetween\n";
		cin >> num1 >> oper >> num2;
		cout << calculator(num1, num2, oper);
	
		return 0;
	}
