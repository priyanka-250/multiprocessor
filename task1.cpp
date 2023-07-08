#include<iostream>
#include<string.h>
using namespace std;

class mother{
	private:
	char n[];
	public:
		mother(char c[])
		{
			strcpy(n,c);
		}
		void set()
		{
			cout<<"whom day is today"<<endl;
		}
		void set(char c[])
		{
			cout<<n<<" "<<c<<endl;
			
		}
};
int main()
{
	
	mother n("Today is");
	n.set();
	n.set("mother's day....");
	return 0;
	
}
