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
    fastio();
    cout << fixed << setprecision(10);
    string sa, sb;
    cin >> sa >> sb;
    const int N = (int)sa.size();
    const int M = (int)sb.size();
    int pos = 0;
    for(int i = 0; i < N ; ++i) pos+= sa[i] == '+' ? 1 : -1;
    int posb = 0, cnt = 0;
    for(int i = 0; i < M ; ++i){
      if(sb[i] != '?') posb+= sb[i] == '+' ? 1 : -1;
      else cnt++;
    }
    int dif = abs(pos-posb);
    int tot = 0;
    for(int plus = 0; plus <= dif ; ++plus){
      tot+=
    }
    

    return 0;
}
