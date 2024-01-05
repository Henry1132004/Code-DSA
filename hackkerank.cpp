#include<bits/stdc++.h>
using ll = long long;
using namespace std;

int a[100][100], n;
string s = "";
void BackTrack(int i, int j){
    if(i == n && j == n)  cout << s << " ";
    if(i + 1 >= n && a[i + 1][j] == 1){
         s += "D";
         a[i + 1][j] = 0;
         BackTrack(i + 1, j);
         s.pop_back();
    }
    if(j + 1 >= n && a[i][j + 1] == 1){
        s += "R";
        a[i][j + 1] = 0;
        BackTrack(i, j + 1);
        s.pop_back();
    }
}
int main(){
       int t;  cin >> t;
       while(t--){
            cin >> n;
            for(int i = 1; i <= n; i++){
              for(int j = 1; j <= n; j++){
                   cin >> a[i][j];
              }
            }
            BackTrack(1, 1);
       }
}
