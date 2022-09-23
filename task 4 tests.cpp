#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Влад\Documents\repos\ConsoleApplication1\calc.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testing
{
	TEST_CLASS(testing)
	{
	public:
		TEST_METHOD(TestSum)
		{
			double num1 = 2;
			double num2 = 3;
			char oper = '+';
			Assert::IsTrue(calculator(num1, num2, oper) == "5.000000");
		}
		TEST_METHOD(TestSub)
		{
			double num1 = 7;
			double num2 = 9;
			char oper = '-';
			Assert::IsTrue(calculator(num1, num2, oper) == "-2.000000");
		}
		TEST_METHOD(TestMul)
		{
			double num1 = 4;
			double num2 = 5;
			char oper = '*';
			Assert::IsTrue(calculator(num1, num2, oper) == "20.000000");
		}
		TEST_METHOD(TestDiv)
		{
			double num1 = 3;
			double num2 = 4;
			char oper = '/';
			Assert::IsTrue(calculator(num1, num2, oper) == "0.750000");
		}
		TEST_METHOD(TestPow)
		{
			double num1 = 2;
			double num2 = 5;
			char oper = '^';
			Assert::IsTrue(calculator(num1, num2, oper) == "32.000000");
		}
		TEST_METHOD(TestError)
		{
			double num1 = 2;
			double num2 = 5;
			char oper = ';';
			Assert::IsTrue(calculator(num1, num2, oper) == "input error");
		}
	};
}
