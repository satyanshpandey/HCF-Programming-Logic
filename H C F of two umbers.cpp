#include<iostream>
using namespace std;
main()
{
	int a,b,H;
	cout<<"Enter Two number: ";
	cin>>a>>b;
	for(H=a<b?a:b;H>=1;H--)
		if(a%H==0&&b%H==0)
		break;
		cout<<"HCF of "<<a<<" and "<<b<<" is "<<H;
	

}
