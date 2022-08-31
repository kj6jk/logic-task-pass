#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int num1, num2;
	bool ch;
	cout << "enter the number for starting...";
	cin >> num1;
	cout << "enter the number for ending...";
	cin >> num2;
	cout << "\n all prime number between "<<num1<<" and "<<num2<<" are :" << endl;
	for (int i = num1; i < num2; i++)
	{
		for (int j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
				ch = false;
		}
		if (ch == true && i != 1)
			cout << i << " , ";
		ch = true;
	}
	return 0;
}