#include<iostream>
#include<string.h>
using namespace std;

class points{
	public:
		int a,b;
		void set(int a ,int b)
		{
			this->a=a;
			this->b=b;
		}
		void get()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
		}
		points operator+ (points n)
		{
			points temp;
			temp.a=this->a+n.a;
			temp.b=this->b+n.b;
			return temp;
		}
		
};
int main()
{
	points p1,p2,p3;
	p1.set(20,15);
	p1.get();
	p2.set(30,20);
	p2.get();
	p3=p1+p2;
	p3.get();

	
}
