#include <iostream>

int max(int mas[100][100], int a, int b)
{
	int m = -1;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (mas[i][j] > m) m = mas[i][j];
		}
	}

	return m;
}

int min(int mas[100][100], int a, int b)
{
	int m = 100000000000;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (mas[i][j] < m) m = mas[i][j];
		}
	}

	return m;
}
	
void Reading(int mas[100][100], int a, int b)
{
	for  (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			std::cin >> mas[i][j];
		}
	}
}

bool Eight (int a)
{
	bool f = false;
	while (a > 0) 
	{
		int b = 0;
		b = a % 10;

		if (b == 8)
		{
			f = true;
			break;
		}
		a = a / 10;
	}

	return f;
}

void bubblesort(int mas[100][100], int a, int b)
{
	for (int i = 0; i < a; i++) 
	{
		for (int j = 0; j < b; j++)
		{
			if (Eight(mas[i][j]) == true) 
			{
				const int str_id = i;
				for (int ik = 0; ik < b; ik++)
				{
			        for(int jk = 0; jk < (b - 1); jk++)
					{
						if (mas[str_id][jk] > mas[str_id][jk + 1])
						{					
							std::swap(mas[str_id][jk], mas[str_id][jk + 1]);
						}
					}
				}
				break;
			}			
		}
	}
}

void vivod(int mas[100][100], int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			std::cout << mas[i][j] << ' ';
		}
		std::cout << std::endl;
	}
}

