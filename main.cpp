#include <iostream>

using namespace std;

// First Calculator

/*  
int main () {
	int n1, n2, result, option;
	char repeat;
	cout << "Basic Calculator" << endl;
	cout << "1.Addition" << endl;
	cout << "2.Substraction" << endl;
	cout << "3.Multiplication" << endl;
	cout << "4.Division" << endl;
	cout << "5.Exit" << endl;
	cout << "First Number: "; cin >> n1;
	cout << "Second Number: "; cin >> n2;
	cout << "Option: "; cin >> option;
	switch (option) {
	case 1:
		result = n1 + n2;
		cout << "The result is " << result << endl;
		cout << "Do you want to continue? Press y for yes, n for no "; cin >> repeat;
		cout << "------------------------------" << endl;
		if (repeat == 'y') {
			main();
		}
		else cout << "Goodbye !";
		break;
	case 2:
		result = n1 - n2;
		cout << "The result is " << result << endl;
		cout << "Do you want to continue? Press y for yes n for no "; cin >> repeat;
		cout << "-----------------------------" << endl;
		if (repeat == 'y') {
			main();
		}
		else cout << "Goodbye !";
		break;
	case 3:
		result = n1 * n2;
		cout << "The result is " << result << endl;
		cout << "Do you want to continue? Press y/n "; cin >> repeat;
		cout << "----------------------------" << endl;
		if (repeat == 'y') {
			main();
		}
		else cout << "GoodBye !";
		break;
	case 4:
		if (n2 == 0) {
			cout << "Error: cannot divide by 0 !" << endl;
		}
		else {
			result = n1 / n2;
			cout << "The result is " << result << endl;
			cout << "Do you want to continue? Press y/n "; cin >> repeat;
			cout << "----------------------------" << endl;
			if (repeat == 'y') {
				main();
			}
			else cout << "Goodbye !";
		}
		break;
	case 5:
		cout << "Goodbye !" << endl;
		break;
	}
	return 0;
}
*/

// Second Calculator

int main() {

	int number1, number2, option, result;
	cout << "Enter your first number: ";
	cin >> number1;
	cout << "Enter your second number: ";
	cin >> number2;

	cout << "What do you want ? (1:+,2:-,3:/,4:*): ";
	cin >> option;
	cout << endl;

	if (option == 1)
	{
		result = number1 + number2;
	}

	else if (option == 2)
	{
		result = number1 - number2;
	}

	else if (option == 3)
	{
		result = number1 / number2;
	}

	else if (option == 4)
	{
		result = number1 * number2;
	}

	else
	{
		cout << "Be Careful !!!";
	}

	cout << "Your Result = " << result;

	return 0;
}