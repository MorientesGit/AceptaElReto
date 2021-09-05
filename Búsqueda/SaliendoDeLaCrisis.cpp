#include<bits/stdc++.h>
using namespace std;

/*
	Complejidad: O(n)
	n: Número de indicadores económicos
*/

int main() {
	int n, data;

	while (cin >> n && n != 0) {
		vector<int> ie(n);
		for (int i = 0; i < n; i++) cin >> ie[i];

		if (ie.size() == 1) cout << "SI\n";
		else {
			int i = 1;
			while (i < ie.size() && ie[i] > ie[i - 1]) i++;

			if (i == ie.size()) cout << "SI\n";
			else cout << "NO\n";
		}
	}
}