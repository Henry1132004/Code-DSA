#include <bits/stdc++.h>

using namespace std;

bool Binary_search(int a[], int n, int x){
	int l = 0, r = n - 1;
    while(l <= r){
    	 int m = (l + r) / 2;
    	 if(a[m] == x)
    	    return 1;
    	else if(a[m] > x)
    	   r = m - 1;
    	else  l = m + 1;
	}
	  return 0;
}
int first_pos(int a[],int l, int r, int x){
	 int res = -1;
	 while(l <= r){
	 	 int m = (l + r) / 2;
	 	 if(a[m] == x){
	 	   res = m;
	 	   r = m - 1;
    }
	 	else if(a[m] > x)
	 	    r = m - 1;
	 	else  l = m + 1;
	 }
	   return res;
}
int last_pos(int a[], int l, int r, int x){
	 int res = -1;
	 while(l <= r){
	 	 int m = (l + r) / 2;
	 	 if(a[m] == x){
	 	   res = m;
	 	   l = m + 1;;
    }
	 	else if(a[m] > x)
	 	    r = m - 1;
	 	else  l = m + 1;
	 }
	   return res;
}
int main(){
	int t;  cin >> t;
	while(t--){
		  int n, x;  cin >> n >> x;
		  int a[n];
		  for(int i = 0; i < n; i++){
		  	  cin >> a[i];
		  }
		 int l = first_pos(a, 0, n, x);
		 int r = last_pos(a, 0 , n, x);
		 if(l != 1)
		   cout << l << " " << r << endl;
	}
}
	
