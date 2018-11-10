#include <iostream>
#include <iomanip>

using namespace std;

int star = 5;
int space = 1;

int main()
{
	for (int i = 0; i < 6; i++)
	{

		for (int j = 0; j < star; j++)
		{
			cout << "* ";
			if (j == star - 1)
			{
				cout << setw(space) << "";
				for (int k = 0; k < star; k++)
				{
					cout << "* ";
				}
			}
		}
		space+= 4;
		star -= 1;
		cout << endl;
	}

	star = 1;
	space = 17;
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < star; j++)
		{
			cout << "* ";
			if (j == star - 1)
			{
				cout << setw(space) << "";
				for (int k = 0; k < star; k++)
				{
					cout << "* ";
				}
			}
		}
		space -= 4;
		star += 1;
		cout << endl;
	}
	system("pause");

}
