#include <iostream>
using namespace std;

int binarySearch(int nadia[12], int n, int x) {
	int lowerbound = 0;
	int upperbound = n - 1;
	while (lowerbound <= upperbound) {
		int mid = lowerbound + (upperbound - 1) / 2;
		if (nadia[mid] == x) {
			return mid;
		}
		else if (nadia[mid] < x) {
			lowerbound = mid + 1;
		}
		else {
			upperbound = mid - 1;
		}
	}
	return -1;
}

int main() {
	int nadia[12] = { 6, 3, 5, 8, 4, 1 };
	int n = sizeof(nadia) / sizeof(nadia[0]);
	int x = 6;
	int result = binarySearch(nadia, n, x);
	if (result == -1) {
		cout << "Element not found" << endl;
	}
	else {
		cout << "Element found at index" << result << endl;
	}
	return 0;
}