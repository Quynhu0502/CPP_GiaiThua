#include <iostream>
using namespace std;
int main()
{
	cout << "tinh giai thua\n";
	int so, gt = 1;
	cout << "nhap so:";
	cin >> so;
	for (int i = 1; i <= so; i++)
	{
		gt *= i;


	}
	cout << "giai thua" << so << "!=" << gt;

	cout << "\n su dung while\n";
	gt = 1;
	int j = 1;
	while (j <= so)
	{
		gt *= j;
		j++;
	}
	cout << "giai thua" << so << "!=" << gt;
	return 0;
}