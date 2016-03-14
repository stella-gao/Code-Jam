
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
#include <cmath>
#include <cctype>
#include <iomanip>
#include <cstdio>
#include <list>

using namespace std;

int main() {
	int Tcases;

	cin >> Tcases;
	
		

	for (int tc = 1; tc <= Tcases; tc++) {
		cout << "Case #" << tc << ": ";
		
		
		
		int x;
		cin>>x;
		int k=2*x;
		vector<long long> v(k);
		for (int i = 0; i<k; i++) {
			cin>>v[i];
		}
		for (int i = 0; i<k; i++) {
			//int * p;
			vector<long long>::iterator it;
			if(v[i]%4==0){
				it=find (v.begin(), v.end(),v[i]*0.75);
				if(it!=v.end()) {
					cout<<setprecision(10) << v[i]*0.75<<" ";
					*it=-1;
					v[i]=-1;
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
		
			
		
		
		
