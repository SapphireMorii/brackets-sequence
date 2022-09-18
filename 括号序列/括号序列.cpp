#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n = 0, cnt = 0;
	cin >> n;
	int* series = new int[n];
	for (int k = 0; k < n; k++)
	{
		series[k] = 0;
	}
	char bracket;
	for (int i = 0; i < n; ++i)
	{
		cin >> bracket;
		if (bracket == '(')
		{
			series[i] = 1;
		}
		else if (bracket == ')')
		{
			series[i] = -1;
		}
	}
	for (int j = 0; j < n; ++j)
	{
		cnt += series[j];
		if (cnt < 0)
		{
			cout << "QAQ" << endl;
			break;
		}
		if (j == n - 1)
		{
			if (cnt == 0)
			{
				cout << "^_^" << endl;
			}
			else
			{
				cout << "QAQ" << endl;
			}
		}
	}
	delete[]series;
	return 0;

}