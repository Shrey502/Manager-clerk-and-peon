#include<iostream>
using namespace std;
int main()
{
	char post;
	int bs,ts,hra,da;
	cout<<"Enter employies post";
	cin>>post;
	cout<<"Enter basic salary of employee";
	cin>>bs;
	switch(post){
		case'm':hra=bs*60/100;
				da=bs*20/100;
				break;
		case'c':hra=bs*50/100;
				da=bs*10/100;
				break;
		case'p':hra=bs*40/100;
				da=bs*5/100;
				break;
		default:
			hra=0;
			da=0;
	}
	ts=bs+hra+da;
	cout<<"Total salary of given employee is "<<ts<<"Rs";
	return 0;
}
