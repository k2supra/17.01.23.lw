#include <iostream>

using namespace std;

int main() {
	cout << "Enter a number of operation(1-4): ";
	int operation;
	cin >> operation;
	switch (operation)
	{
	case 1: {
		cout << "Enter a number: ";
		uint16_t number;
		cin >> number;
		for (size_t i = 0; i < number + 1; i++)
		{
			cout << i << " ";
		}
	}break;
	case 2: {
		cout << "Enter a start number: ";
		uint16_t number_start;
		cin >> number_start;
		cout << "Enter a finish number: ";
		uint16_t number_finish;
		cin >> number_finish;
		cout << "Pair: ";
		if (number_start > number_finish)
		{
			for (size_t i = number_finish; i < number_start + 1; i++)
			{
				if (i % 2 == 0)
				{
					cout << i << " ";
				}
			}
			cout << "\n";
			cout << "Unpair: ";
			for (size_t i = number_finish; i < number_start + 1; i++)
			{
				if (i % 2 != 0)
				{
					cout << i << " ";
				}
			}
			cout << "\n";
			cout << "/7: ";
			for (size_t i = number_finish; i < number_start + 1; i++)
			{
				if (i % 7 == 0)
				{
					cout << i << " ";
				}
			}break;
		}
		
		cout << "\n" << "Pair: ";
		for (size_t i = number_start; i < number_finish + 1; i++)
		{
			if (i % 2 == 0)
			{
				cout << i << " ";
			}
		}
		cout << "\n";
		cout << "Unpair: ";
		for (size_t i = number_start; i < number_finish + 1; i++)
		{
			if (i % 2 != 0)
			{
				cout << i << " ";
			}
		}
		cout << "\n";
		cout << "/7: ";
		for (size_t i = number_start; i < number_finish + 1; i++)
		{
			if (i % 7 == 0)
			{
				cout << i << " ";
			}
		}
	}break;
	case 3: {
		cout << "Enter a start number: ";
		uint16_t number_start;
		cin >> number_start;
		cout << "Enter a finish number: ";
		uint16_t number_finish;
		cin >> number_finish;
		int sum = 0;
		cout << "0";
		for (size_t i = number_start; i < number_finish + 1; i++)
		{
			sum += i;
			cout << " + " << i;
		}
		cout << " = " << sum;
	}break;
	case 4: {
		uint16_t number;
		cin >> number;
		int sum = 0;
		do
		{
			cout << "Enter a number: ";
			cin >> number;
			
			sum += number;
		} while (number != 0);
		
		cout << " = " << sum;
	}
	default:
		break;
	}
	
}