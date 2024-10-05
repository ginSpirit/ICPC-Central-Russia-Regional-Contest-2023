#include <bits/stdc++.h>
#define input(v) for(auto &i : v) cin >> i
#define endl "\n"
#define all(x)  x.begin(), x.end()

typedef long long ll;
typedef long long int int64;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
using namespace std;

const int K = 5;

int q(int x, int k, int p) {
    return (1LL*x*k)%p;
}

signed main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    
    int n, x, k, p;
    cin >> n >> x >> k >> p;

    array<int, K> a;
    a.fill(INT_MIN);
    for (int i = 0; i < n; i++) {
        if (x > a[0]) {
            a[0] = x;
            sort(a.begin(), a.end());
        }
        x = 1LL*x*k%p;
    }
    for (int i=0; i<K; i++) {
        if (a[i] != INT_MIN) {
            cout << a[i] << " ";
        }
    }

    return (EXIT_SUCCESS);
}
