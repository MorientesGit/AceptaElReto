#include<bits/stdc++.h>
using namespace std;

/*
	Complexity: O(n)
	n: Longitud de la palabra
*/

int main() {
	int n;

	cin >> n;
	while (n--) {
		string palabra;
		cin >> palabra;

		bool a = false, e = false, i = false, o = false, u = false;
		for (int x = 0; x < palabra.length(); x++) {
			if (palabra.at(x) == 'a') a = true;
			else if (palabra.at(x) == 'e') e = true;
			else if (palabra.at(x) == 'i') i = true;
			else if (palabra.at(x) == 'o') o = true;
			else if (palabra.at(x) == 'u') u = true;
		}

		if (a && e && i && o && u) cout << "SI\n";
		else cout << "NO\n";
	}
}