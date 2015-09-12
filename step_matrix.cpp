#include <iostream>
#include <cstdio>
using namespace std;
int main()
	{
	int num_cases,i;
	cin >> num_cases;
	for (i=0;i<num_cases;i++)
		{
		int mat_size,j,k;
		cin >>mat_size;
		int array_size=mat_size*mat_size;
		int index[array_size],ip,sum=0,x1,y1,x2,y2;
		for (j=0;j<array_size;j++)
			{
			cin >>ip;
			index[ip-1]=j;
			}		
		for (k=0;k<array_size-1;k++) 
			{
			x1=index[k]/mat_size;
			y1=index[k]%mat_size;
			x2=index[k+1]/mat_size;
			y2=index[k+1]%mat_size;
			if (x1>x2) sum=sum+(x1-x2);
			else  sum=sum+(x2-x1);
			if (y1>y2) sum=sum+(y1-y2);
			else sum=sum+(y2-y1);
			}
		printf("%d\n",sum);
			}

	}
