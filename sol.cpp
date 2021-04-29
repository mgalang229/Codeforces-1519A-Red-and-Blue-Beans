#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int r, b, d;
		cin >> r >> b >> d;
		if (r > b) {
			// if 'r' is greater than 'b', then swap their values
			swap(r, b);
		}
		// store 1 to 'x' since it's the same as 'r' divided by itself
		int x = 1;
		// store the quotient of 'b' and 'r' in 'y'
		int y = (b % r == 0 ? b / r : b / r + 1);
		// the value of 'r' was used to divide 'r' itself and 'b' to find the
		// maximum distribution to each packet possible and we should check
		// if the difference of the maximum distribution is less than or
		// equal to 'd' because if it's true, then the other packets will
		// also be true as well
		cout << (y - x <= d ? "YES" : "NO") << '\n';
	}
	return 0;
}
