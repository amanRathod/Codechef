#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MOD 1000000007
using namespace std; 
ll t;

// ll solvefor_s(string str, ll p, ll q) {

// 	ll count = 0;
// 	for (ll i = p+1; i < q; ++i)
// 	{
// 		/* code */
// 		if (str[i] == ':')
// 			count++;
// 	}

// 	return count;
// }

int main()
{
	//your code goes here
	cin >> t;

	while(t--) {

		string str;
		ll n, ans = 0, S = 0, power, k, m = 6;

		cin >> n >> k;
		cin >> str;

		bool flag2 = false, flag1 = false;
		ll p = 0, q = 0;
		while(p < n && q < n) {

			if(str[p] == 'M') {
				if(str[q] == 'I') {

					// ll S = solvefor_s(str, p, q);
					power = k + 1 - abs(p - q) - S;

					 if(power > 0)
                      {
                 		 ans++;
              			 p++;
             			 q++;
              		  }

             		 else if(p > q) {
              				 q++;
              				}
             	     else {
                          p++;
             	     }
              	}

               else if(str[q] == 'X') {

               		p = q;
               		p++;
               		q++;
               }
               else {
                    q++;
               }
              
              }

			else if(str[p] == 'X') {

					q = p;
					p++;
					q++;
				}
				else {
					p++;
				}

			}
          cout << ans << endl;    

		}

	return 0;
}