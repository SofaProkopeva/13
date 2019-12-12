#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int N;
	cin >> N;

	int* h = new int[N];
	for (int i = 0; i < N; i++)
	{
		h[i] = i + 1;
	}
	int j = N - 1;
	for (int i = 0; i < N / 2; i++, j--)
	{
		cout << h[i] << endl;
		cout << h[j] << endl;
	}
	if (N % 2 != 0) cout << h[N / 2];
}
