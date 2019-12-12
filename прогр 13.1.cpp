#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int N;
	int a;
	a = -1;
	cout << "Введите N>0 :"; 
	cin >> N;
	for (int i = 1; i <= N; i += 1)
	{
		a += 2;
		cout << a << endl;
	}
}