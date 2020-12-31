#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

void solve() {

    ll a, b,count;
    cin >> a >> b;
    
    ll ev1, ev2, od1, od2;
    if(a %2 == 0) {
        ev1 = a/2;
        od1 = (a/2);
        
    }
    else{
        ev1 = a/2;
        od1 = (a/2) + 1;
    }
    
     if(b %2 == 0) {
        ev2 = b/2;
        od2 = (b/2);
        
    }
    else{
        ev2 = b/2;
        od2 = (b/2) + 1;
    }
    
    cout << (ev1*ev2) + (od1*od2) << endl;
    
    

}

int main() {

    int t;
    cin >> t;

    while(t--) {

        solve();
    }
}