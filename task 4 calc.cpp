	/**
 * @file task 4 calc.cpp
 * @author pritsyn vlad
 * @brief changed version made for tests
 * @version 0.1
 * @date 2022-09-24
 */
	#include <iostream>
	#include <cmath>
	#include <string>
	using namespace std;
/**
 * @brief basically the same function but returns strings
 * for easier testing
 * 
 * @param first number 
 * @param second number 
 * @param matheamatical operator
 * 
 * @return string 
 */
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
