#include <string>
#include <iostream>
using namespace std;

int main()
{
	string nameString; 

	int firstNum;
	int secondNum;
	int add;
	int subtract;
	int multiply;
	int devide;
	int remainder;

	cout << "what is your name? ";
	cin >> nameString;

	cout << "please enter your first number?";
	cin >> firstNum;
	cout << "please enter another number";
	cin >> secondNum;

	add = firstNum + secondNum;
	subtract = firstNum - secondNum;
	multiply = firstNum * secondNum;
	devide = firstNum/ secondNum;
	remainder = firstNum % secondNum;

	cout << "the sum of " << firstNum << "and " << secondNum << "= " << add << endl;
	cout << "the difference of " << firstNum << "and " << secondNum << "= " << subtract << endl;
	cout << "the product of " << firstNum << "and " << secondNum << "= " << multiply << endl;
	cout << "the quotient of " << firstNum << "and " << secondNum << "= " << devide << endl;
	cout << "the remainder of " << firstNum << "and " << secondNum << "= " << remainder << endl;

	system("pause");
	return 0;
}