#include <iostream>
#include <vector>
using namespace std;
int average(vector<vector<int>> array)
{
	int total = 0;
	int average = array[0][0];
	for (int a = 0; a < 4; a++)
	{
		for (int b = 0; b < 3; b++)
		{
			total += array[a][b];
		}
		average = total / 12;
	}
	return average;
}
int main()
{
	vector<vector<int>> array(4);
	for (int a = 0; a < 4; a++)
		array[a] = vector<int>(3);

	for (int a = 0; a < 4; a++)
	{
		for (int b = 0; b < 3; b++)
		{
			cin >> array[a][b];
		}
	}

	for (int i = 0; i < array.size(); i++)
	{
		for (int j = 0; j < array[i].size(); j++)
		{
			if (j == 2)
				cout << array[i][j];
			else
				cout << array[i][j] << ", ";
		}
		cout << endl;
	}
	cout << "average:" << average(array) << endl;

	system("pause");
	return 0;
}
