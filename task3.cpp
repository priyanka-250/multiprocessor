#include<iostream>
#include<string.h>
using namespace std;

class america{
	public:
		void wearing()
		{
			cout<<"      ___________CLOTHING IN AMERICA________"<<endl;
			cout<<" While Americans' diverse cultural roots are reflected in their clothing, particularly those of recent immigrants, cowboy hats, boots, jeans, and leather motorcycle jackets are emblematic of specifically American styles."<<endl;
			cout<<" Jeans are a consistent fashion trend among all classes, with variations being vast in both price and style."<<endl;
			
	
		}
};
class nepal :public america{
	public:
		void wearing()
		{
			cout<<" _______CLOTHING IN NEPAL"<<endl;
			cout<<" Nepal, the traditional male dress, which is also the national dress, is the Nepali shirt called daura and suruwal or daura-suruwal suit"<<endl;
			cout<<"Nepal’s 19th Century Prime Minister, Jang Bahadur Rana, introduced this outfit."<<endl;
			cout<<"traditional Nepal Clothing for Woman across the country in nepal kathmandu,sari,gunyo cholo,kurta suruwal."<<endl;
		}
}; 	

int main()
{
	nepal p;
	p.wearing();
	p.america::wearing();
	
}
	
	
	

		
	

