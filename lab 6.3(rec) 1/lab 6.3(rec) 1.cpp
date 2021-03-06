#include <iostream>
#include <iomanip>

using namespace std;

void Input(int* a, const int size, int i)
{
	cout << "a[ " << i << "] =";
	cin >> a[i];
	if (i < size - 1)
		Input(a, size, i + 1);
	else
		cout << endl;
}
void Print(int* a, const int size, int i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;
}
int Count(int* a, const int size, int i)
{
	if (i == size)
		return 0;
	if (a[i] < 0)
		return Count(a, size, i + 1) + 1;
	return Count(a, size, i + 1);
}

int main()
{
	int n;
	cout << "n = "; cin >> n;
	int* a = new int[n];

	Input(a, n, 0);
	Print(a, n, 0);

	cout << "Count = " << Count(a, n, 0);

	return 0;
}