#include <iostream>
#include <vector>
using namespace std;
int average(vector<vector<int>> array)
{
	int total = 0;
	int average = array[0][0];
	for (int i = 0; a < array.size(); a++)
	{
		for (int j = 0; b < array[i].size(); b++)
		{
			total += array[i][j];
		}
		
	}
	average = total / (array.size()*array[i].size());
	return average;
}
int main()
{
	vector<vector<int>> array(4);
	for (int a = 0; a < array.size(); a++)
		array[a] = vector<int>(3);

	for (int i = 0; a < array.size(); a++)
	{
		for (int j = 0; b < array[i].size(); b++)
		{
			cin >> array[i][j];
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
