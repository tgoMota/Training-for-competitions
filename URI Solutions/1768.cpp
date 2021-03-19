//https://www.urionlinejudge.com.br/judge/pt/problems/view/1768
//URI 1768 - Árvore de Natal
#include <bits/stdc++.h>
using namespace std;
#define oo 0x3f3f3f3f
#define ooLL 0x3f3f3f3f3f3f3f3f
#define fastio() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define LOCAL
#ifdef LOCAL
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
#else
#define trace(...) 42
#endif
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
  cerr << name << ": " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
  const char* comma = strchr(names + 1, ',');
  cerr.write(names, comma - names) << ": " << arg1 << " |";
  __f(comma + 1, args...);
}
const int mod = 1e9+7;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> ii;
//CHECK THE CONSTRAINTS, PLEASE
int main(){
    //fastio();
    int n;
    while(cin >> n){
      int m = (n-1)/2+1;
      string f = " ";
      for(int i = 1; i <= n ; ++i) f.push_back(' ');
      vector<string> v(n+1, f);
      for(int i = 1, j = 0; i <= m ; ++i, ++j){
        for(int k = m-j; k <= m+j ; ++k){
          v[i][k] = '*';
        }
        string line = "";
        for(int ki = 1; ki <= m+j ; ++ki) line+=v[i][ki];
        cout << line << '\n';
      }
      for(int i = 1; i <= m ; ++i){
        if(i == m) cout << '*';
        else cout << ' ';
      }
      cout << '\n';
      for(int i = 1; i <= m+1 ; ++i){
        if(i >= m-1) cout << '*';
        else cout << ' ';
      }
      cout << "\n\n";
    }
    return 0;
}

