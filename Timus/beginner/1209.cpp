#include<bits/stdc++.h>
using namespace std;
/*
				1
				1
				0
				1
			  0	   0
				1
			 0	0   0
			    1
			0  0  0  0
				1
		   0  0  0  0  0	  
		so on and so forth......

*/
//As we can see the triangle sequence is behind this problem
//suppose in the triangle sequence the last zero's position in any step is 'n',
//we can prove that (8n+1) is a perfect square,
//for example the last zero in step 2 has the position 6, so (8*6+1)=49=(7)^2
//1 comes after every step's last zero :)		
void solve()
{
	double k;
	cin >> k;
	double f = (8*(k-1))+1;
	f = sqrt(f);
	double t = int(f);
	if((f-t)==0) cout << "1\n";
	else cout << "0\n";
}
int main()
{
	int tt;
	cin >> tt;
	while(tt--) {
		solve();
	}
}