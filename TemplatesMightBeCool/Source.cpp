// Rylan Peets-Cheek
// CIS 1202 101
// 4/13/2026

#include <iostream>

using namespace std;

template <typename T>

T half(T val) {
	return val / 2;
}
int half(int val);

int main() {

	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

	cin.ignore(100, '\n');
	cin.get();
	return 0;
}

int half(int val)
{
	if (val % 2 == 0) {
		return val / 2;
	}
	return (val / 2) + 1;
}
