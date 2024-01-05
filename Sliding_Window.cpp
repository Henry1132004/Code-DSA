#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;  cin >> t;
	while(t--){
	int n, k; cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i]; 
	}
    int max = -1e9, res;
    long long sum = 0;
    for(int i = 0; i < k; i++){
    	  max = fmax(max, a[i]);
    }
    	  cout << max << " ";
	 for(int i = 1; i <= n - k; i++){
	 	  max = fmax(max, a[i + k - 1]);
   cout << max << " ";
}
  cout << endl;
}
}
