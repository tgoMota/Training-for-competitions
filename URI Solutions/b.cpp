#include <bits/stdc++.h>
using namespace std;
#define oo 0x3f3f3f3f
#define ooLL 0x3f3f3f3f3f3f3f3f
#define fastio() ios_base::sync_with_stdio(false); cin.tie(0)
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
vector<vector<int>> v;
vector<vector<int>> sum;


int main(){
    int n;
    while(scanf("%d", &n) && n){
      v.assign(n+1, vector<int>(n+1, 0));
      sum.assign(n+1, vector<int>(n+1, 0));
      vector<vector<vector<int>>> dp(n+1, vector<int>(n+1, vector<int>(2,0)));
      for(int i = 1; i <= n ; ++i){
        for(int j = 1; j <= i ; ++j){
          scanf("%d", &v[i][j]);
          dp[i][j] = dp[i-1][]
        }
      }
    }
    return 0;
}

// 4
// 3
// -5 3
// -8 2 -8
// 3 9 -2 7