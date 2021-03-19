//https://www.urionlinejudge.com.br/judge/pt/problems/view/1278
//URI 1278 - Justificador II
#include <bits/stdc++.h>
using namespace std;

void removeDuplicatedSpaces(string& x){
  string ans = "";
  const int N = (int)x.size();
  int i;
  for(i = 0; x[i] == ' ' ; ++i){}
  for(; i < N ; ++i){
    if(x[i] == ' ' && ans.back() == ' ') continue;
    ans += x[i];
  }
  if(ans.back() == ' ') ans.pop_back();
  x = ans;
}
int main(){
    fastio();
    int t = 0, n;
    while(cin >> n && n){
      if(t++) cout << '\n';
      cin.ignore();
      vector<string> lines(n);
      int mxsize = 0;
      for(int i = 0; i < n ; ++i){
        getline(cin, lines[i]);
        removeDuplicatedSpaces(lines[i]);
        mxsize = max(mxsize,(int)lines[i].size());
      }
      
      for(int i = 0; i < n ; ++i){
        const int M  = (int)lines[i].size();
        lines[i].insert(lines[i].begin(),mxsize-M ,' ');
      }

      for(string& line : lines) cout << line << '\n';
    }
    return 0;
}

