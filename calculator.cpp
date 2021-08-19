//this program will create a calculator by using switch case
#include <iostream>
using namespace std;

int main()
{
	float num1, num2;
	char operation;
	cout << "calculator :" << endl;
	cin >> num1 >> operation >> num2;
	// switch case statement is as like as if else which execute a block of code based on sum condition
	switch (operation)
	{
	case '-':
		cout << num1 << operation << num2 << "equal to: " << num1 - num2;
		break;
	case '+':
		cout << num1 << operation << num2 << "equal to: " << num1 + num2;
		break;

	case '*':
		cout << num1 << operation << num2 << "equal to: " << num1 * num2;
		break;

	case '/': // casting operator convert one variable to another

		cout << num1 << operation << num2 << "equal to: " << num1 / num2;
		break;

	default:
		cout << " not valid operation" << endl;
	}
	system("pause>0");
}
