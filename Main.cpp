#include <iostream>

using namespace std;

int n, m, modulo;

int main() {
	cin >> n;
	cin >> m;
	while (m != 0) {
		modulo = n % m;
		n = m;
		m = modulo;
	}
	cout << "nwd: " << n << endl;
	system("pause");
}