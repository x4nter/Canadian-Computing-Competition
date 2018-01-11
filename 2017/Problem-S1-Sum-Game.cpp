#include <iostream>
#include <vector>

using namespace std;

int main() {
	long n;
	cin >> n;
	vector<int> swifts, semaphores;
	for (long i = 0; i < n; i++) {
		int s;
		cin >> s;
		swifts.push_back(s);
	}
	for (long i = 0; i < n; i++) {
		int s;
		cin >> s;
		semaphores.push_back(s);
	}
	int balance = 0, k = 0;
	for (long i = 0; i < n; i++) {
		balance += swifts[i];
		balance -= semaphores[i];
		if (balance == 0)
			k = i + 1;
	}
	cout << k << endl;
	return 0;
}
