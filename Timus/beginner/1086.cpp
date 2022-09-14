#include<bits/stdc++.h>
using namespace std;
int prime[15000], nPrime;
int mark[164003];
void sieve()
{
	int limit = 164000;
	int sqrtNum = sqrt(limit*1.)+1;  
	prime[nPrime++] = 2;
	mark[1] = 1;
	for(int i = 4;i <= limit;i+=2) mark[i]=1;
	for(int i = 3;i <= limit;i+=2) { 
		if(!mark[i]) {
			prime[nPrime++] = i;
			if(i <= sqrtNum) {
				for(int j = i*i;j<=limit;j+=i*2) {
					mark[j]=1;
				}
			}
		}

	}
	
}
int main()
{
	int tt, n=15009;
	cin >> tt;
	int ara[n];
	for(int i = 0;i < tt;i++) cin >> ara[i];
	sieve();
	for(int i = 0;i < tt;i++) cout << prime[ara[i]-1]<<"\n";
	return 0;
}