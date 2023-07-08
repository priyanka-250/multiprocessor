#include<iostream>
#include<string.h>
using namespace std;

class method{
	public:
		int x;
				void Chandrayaan3()
		{
			cout<<"_____Chandrayaan:-3_____"<<endl<<endl;
			cout<<"ISRO Announces that Chandrayaan-3,india's third lunar mission,will be launches on july 14,2023."<<endl;
			cout<<"Chandrayaan-3 is composite of three Modules"<<endl;
			cout<<"1.Propulsion"<<endl<<"2.lander"<<endl<<"3.Rover"<<endl<<endl;
		}
		void Chandrayaan3(int x)
		{
			cout<<"The spacecraft will weight is "<<x<<" Kg."<<endl;
		}
		void Chandrayaan3(int a,int b)
		{
			cout<<"The propulsion module weigh is "<<a<<" kg."<<endl;
			cout<<"The lander module,including the rover,weighs "<<b<<" kg."<<endl;
		}
		void Chandrayaan3(int c,int d,int e,int r)
		{
			cout<<"The Propulsion Module will carry the lander and rover configuration until the spacecraft is in a "<<c<<" KM luna orbit."<<endl;
			cout<<"The power of Propulsion Module is "<<d<<" W."<<endl;
			cout<<"The Lander module power is "<<e<<" W."<<endl;
			cout<<"The WS with Bias Rover power is "<<r<<" W."<<endl;
		}
};
int main()
{
	method n;
	n.Chandrayaan3();
	n.Chandrayaan3(3900);
	n.Chandrayaan3(2148,1752);
	n.Chandrayaan3(100,758,738,50);
	return 0;
}

