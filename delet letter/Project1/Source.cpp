#include <iostream>
using namespace std;

int main()
{
	const int size = 10;
	int size2 = size;
	int ch=0;
	char array[size];
	char letter_delet;

	cout << "enter any 10 letters...";
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	} // end input for
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " , ";
	} // end input for

	cout << " \n \n enter one letter to delete...";
	cin >> letter_delet;
	for (int i = 0; i < size; i++)
	{
		if (array[i] == letter_delet)
		{
			for (int j = i; j < size - 1; j++)
			{
				array[j] = array[j + 1];
			}
			i--;
			size2--;
			ch++;
		}
	}
	if (ch == 0)
	{
		cout << "sorry not found ):" << endl;
	}
	else
	{
		cout << "after the delete : "<<endl;
		for (int i = 0; i < size2; i++)
			cout << array[i] << " , ";
	}

	return 0;
}