#include <iostream>
#include <algorithm>
using namespace std;
int main()
	{
	int i,n,num_cases,sum,j,x,y,num_chains;
	cin >>num_cases;
	for (i=0;i<num_cases;i++)
		{
		sum=0;
		cin >> n;
		cin >> num_chains;
		int chains[num_chains];
		for (j=0;j<num_chains;j++) cin >> chains[j];
		sort(chains,chains+num_chains);
		x=0,y=num_chains-1;
		while (x<y)
			{
			while (chains[x]>0 && x<y)
				{				
				chains[x]--;
				sum++;
				y--;
				}
			x++;
			}		
		cout <<sum<<endl;
		}
	}
