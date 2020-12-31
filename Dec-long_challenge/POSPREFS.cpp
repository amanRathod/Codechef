#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
typedef long long ll;

void solve() {

        int n, k;
        cin >> n >> k;
        int cond = n-k;

        if(n == k) {
                for (int i = 1; i <= n; i++)
                {
                        cout << i << ' ';
                }
                cout << endl;
                
        }
        else if( n/2 >= k ){
                int i = 1;
                while(i <= n)
                // for (int i = 1; i <= n; i+=2)
                {
                        if(k != 0) {
                                cout << -i <<' ' << (i+1) << ' ';
                                k--; 
                                i+=2;
                        }
                        else{
                                cout << -i << ' ';
                                ++i;
                        }
                        
                }
                cout << endl;
                // if(n%2 ==0 )
                //         cout << n << endl;
                // else
                // {
                //         cout << -n << endl;
                // }
                
        }
        else {
               int i = 1;

               while( i <= n)
                // for (int i = 1; i <= n; i+=2)
                {
                        if(cond != 0){
                                cout << -i << ' ' << (i+1) << ' ';
                                cond--;
                                i+=2;
                        }
                        else{
                                cout << i << ' ';
                                ++i;
                        }

                }
                cout << endl;
        }
}

int main() {

        int t;
        cin >> t;
        while (t--)
        {
                solve();
        }
        
        return 0;
}