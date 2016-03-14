// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <cstring>
#include <queue>
#include <algorithm>
#include <climits>
#include <string>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <cmath>
#include <cctype>
#include <iomanip>
#include <cstdio>
#include <list>

using namespace std;
void show(vector<long long> v) {
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
}

int main() {
	int Tcases;

	ofstream out;
	out.open("2.txt");

	cin >> Tcases;

	for (int tc = 1; tc <= Tcases; tc++) {
		out << "Case #" << tc << ": ";

		int len, k, n;
		cin >> len >> k >> n;
		vector<long long> v(len);
		for (int i = 0; i < len; i++)
			v[i] = i + 1;
	

		for (int t = 1; t <=n; t++) {
			int a;
			if (t % 2 != 0) {
				for (int i = 0; i < len - 1; i+=2) {

					a = v[i];
					v[i] = v[i + 1];
					v[i + 1] = a;
				}
			}
			else {
				a = v[0];
				v[0] = v[len - 1];
				v[len - 1] = a;
				for (int i = 1; i < len - 2; i+=2) {
					int b;
					b = v[i];
					v[i] = v[i + 1];
					v[i + 1] = b;
				}
			}
			//show(v);
		}
		vector<long long>::iterator it;
		it = find(v.begin(), v.end(), k);
		if (it != v.end()) {
			int index = it - v.begin();
			if (index == len - 1) {
				out << v[0] << " " << v[len - 2];
			}
			else if (index == 0) {
				out << v[index+1] << " " << v[len - 1];
			}
			else {
				out << v[index + 1] << " " << v[index - 1];
			}
		}
		out << endl;
	}


	out.close();
	system("pause");
	return 0;
}




