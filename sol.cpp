#include <bits/stdc++.h>

using namespace std;
    
int main() {                          	
	ios::sync_with_stdio(false);
	cin.tie(0);          
	int tt;
	cin >> tt;
	while (tt--) {
		int a[3];
		cin >> a[0] >> a[1] >> a[2];
		// sort the numbers
		sort(a, a + 3);
		// check if the first two numbers add up to the third number
		cout << (a[0] + a[1] == a[2] ? "YES" : "NO") << '\n';
	}
	return 0;
}