#include <iostream>
#include <set>
using namespace std;

int main() {
	int n, elem;
	set<int> our_set;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> elem;
		our_set.insert(elem);
	}
	cout << our_set.size();
	return 0;
}