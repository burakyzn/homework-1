#include <iostream>
#include <string>
#include <locale.h>
#include <iomanip> 

using namespace std;

int main()
{

	int noLetter = 0;
	int letterA = 0;
	int letterE = 0;
	int letteri = 0;
	int letteri_2 = 0;
	int letterU = 0;
	int letterU_2 = 0;
	int letterO = 0;
	int letterO_2 = 0;

	wchar_t sentence[200];
	wcout << "Write your sentence please (Turkish): ";
	wcin.get(sentence, 200);
	cout << endl;

	setlocale(LC_ALL, "turkish");
	noLetter = char_traits<wchar_t>::length(sentence);

	for (int i = 0; i < noLetter; i++)
	{

		if (sentence[i] == 'a' || sentence[i] == 'A')
		{
			letterA++;
		}
		else if (sentence[i] == 'e' || sentence[i] == 'E')
		{
			letterE++;
		}
		else if (int(sentence[i]) == 141 || sentence[i] == 'I')
		{
			letteri++;
		}
		else if (sentence[i] == 'i' || int(sentence[i] == 152))
		{
			letteri_2++;
		}
		else if (sentence[i] == 'u' || sentence[i] == 'U')
		{
			letterU++;
		}
		else if (int(sentence[i]) == 129 || int(sentence[i] == 154))
		{
			letterU_2++;
		}
		else if (sentence[i] == 'o' || sentence[i] == 'O')
		{
			letterO++;
		}
		else if (int(sentence[i]) == 148 || int(sentence[i] == 153))
		{
			letterO_2++;
		}
	}

	int letters[8] = { letterA,letterE,letteri,letteri_2,letterO, letterO_2, letterU, letterU_2 };
	int bigNo = 0;
	int counter = 0;

	while (counter < 8)
	{
		if (letters[counter] > bigNo)
		{
			bigNo = letters[counter];
		}
		counter++;
	}

	cout << setw(10) << left << "Letter" << setw(5) << "NO";
	for (int i = 0; i < bigNo; i++)
	{
		cout << setw(3) << left << i + 1;
	}

	cout << endl << setw(10) << left << "A" << setw(5) << letterA;
	for (int i = 0; i < letterA; i++)
	{
		cout << setw(3) << left << "a";
	}

	cout << endl << setw(10) << left << "E" << setw(5) << letterE;
	for (int i = 0; i < letterE; i++)
	{
		cout << setw(3) << left << "e";
	}

	cout << endl << setw(10) << left << "I" << setw(5) << letteri;
	for (int i = 0; i < letteri; i++)
	{
		cout << setw(3) << left << "ı";
	}

	cout << endl << setw(10) << left << "İ" << setw(5) << letteri_2;
	for (int i = 0; i < letteri_2; i++)
	{
		cout << setw(3) << left << "i";
	}

	cout << endl << setw(10) << left << "O" << setw(5) << letterO;
	for (int i = 0; i < letterO; i++)
	{
		cout << setw(3) << left << "o";
	}

	cout << endl << setw(10) << left << "Ö" << setw(5) << letterO_2;
	for (int i = 0; i < letterO_2; i++)
	{
		cout << setw(3) << left << "ö";
	}

	cout << endl << setw(10) << left << "U" << setw(5) << letterU;
	for (int i = 0; i < letterU; i++)
	{
		cout << setw(3) << left << "u";
	}

	cout << endl << setw(10) << left << "Ü" << setw(5) << letterU_2;
	for (int i = 0; i < letterU_2; i++)
	{
		cout << setw(3) << left << "ü";
	}

	cout << endl;
	system("pause");

}
