#include<iostream>
using namespace std;

int a = 0;
int b, c;
int dwarves[9];

int Dwarves(void);

int main()
{
	for (int i = 0; i < 9; i++)
	{
		cin >> dwarves[i];
		a += dwarves[i];
	}

	Dwarves();

	for (int i = 0; i < 9; i++)
	{
		if (dwarves[i] != b && dwarves[i] != c)
		{
			cout << dwarves[i] << "\n";
		}
	}
}

int Dwarves(void)
{
	int count = 0;
	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (dwarves[i] + dwarves[j] == a - 100)
			{
				b = dwarves[i];
				c = dwarves[j];
				count = 1;
				break;
			}
		}
		if (count == 1)
		{
			break;
		}
	}
	return 0;
}