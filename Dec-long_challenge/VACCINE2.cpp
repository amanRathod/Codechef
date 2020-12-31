#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int solve() {

    int n, d;
    cin >> n >> d;
    int risk = 0, unrisk = 0;
    // vector<int> v(n);
    for (int i = 0; i < n; i++)
    {   int a;
        cin >> a;
        // cin >> v[i];
        if(a >= 80 || a <= 9)
            risk++;
        else
        {
            unrisk++;
        }
        
    }
    
    int ans = 0;
    if( d == 1)
        cout << n << endl;
    else{

        int u = risk/d;
        int v = unrisk/d;
        if(risk % d == 0) {
            ans += risk/d;
        }
        else{
            ans += (u) +1;
        }

        if(unrisk % d == 0) {
            ans += unrisk/d;
        }
        else{
            ans += (v) + 1;

        }

        cout << ans << endl;
        
    }

    
     

}

int main() {

    int t;
    cin >> t;

    while(t--) {

         solve();
    }
}