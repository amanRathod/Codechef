#include <bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;

// int find_xor(int x, int y) {
//         return (x | y) & (~x | ~y);
        
// }

void solve()
{

    ll n, u, p;
    cin >> n >> u;
    
    vector<ll> v1(n); 
     
    for(int i = 0; i < n; i++)
        cin >> v1[i];
         
    vector<vector<ll>> v2(n, vector<ll> (35,0)); 

    for(int i = 0; i < n; i++)
    {
        p = v1[i];
        int q = 0;
        while(p>0)
        {
            v2[i][q++] = p%2;
            p = p/2;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j = 33; j >=0 ; j--)
        {
            if(u > 0 && v2[i][j] == 1)
            {
                bool flag = false;
                 for(int l = i+1; l < n-1; l++)
                 {
                     if(v2[l][j] == 1)
                     {
                        flag = true;
                        v2[l][j] = 0;
                        v2[i][j] = 0;
                        u--;
                        break;
                     }
                 }
                if(flag == false && i!= n-1)
                {
                    if(u > 0){
                    v2[i][j]=0;
                    v2[n-1][j] ^= 1;
                    u--;
                    }
                }
            }
        }
    }

    int ans = 0;

    for(int i = 0; i < n; i++)
    {
        ans = 0;
        for(int j = 0; j < 33; j++)
        {
            ans += v2[i][j]*(1<<j);
        }
        v1[i] = ans;
    }
     
    if(u > 0 && u % 2 == 1 && n==2)
    {
        v1[n-1] ^= 1;
        v1[n-2] ^=1;
    }
     
     
     
    for(int i = 0; i < n; i++)
        cout << v1[i] <<" ";
    cout << endl;
}

int main() {
 
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }

    return 0;
}
