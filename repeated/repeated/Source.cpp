#include <iostream>
using namespace std;

int main()
{
	const int size = 10;
	char array[size];
	char rep;
	int count=0;
	cout << "enter any 10 letters...";
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}
	cout << "enter the letter to checked if is repeated...";
	cin >> rep;
	for (int i = 0; i < size; i++)
	{
		if (rep == array[i])
			count++;
	}
	cout << "number of repeated = " << count << endl;


	return 0;
}