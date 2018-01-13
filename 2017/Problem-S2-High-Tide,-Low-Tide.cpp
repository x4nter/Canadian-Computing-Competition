#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<long> allTides, lowTides, highTides;
	for (int i = 0; i < n; i++) {
		long h;
		cin >> h;
		allTides.push_back(h);
	}
	sort(allTides.begin(), allTides.end());
	if (n % 2) {
		lowTides.assign(allTides.begin(), allTides.begin() + n / 2 + 1);
		highTides.assign(allTides.begin() + n / 2 + 1, allTides.end());
	}
	else {
		lowTides.assign(allTides.begin(), allTides.begin() + n / 2);
		highTides.assign(allTides.begin() + n / 2, allTides.end());
	}
	reverse(lowTides.begin(), lowTides.end());
	for (int i = 0; i < n; i++) {
		if (i % 2) cout << highTides[i / 2];
		else cout << lowTides[i / 2];
		if (i != n - 1) cout << " ";
		else cout << endl;
	}
	return 0;
}
