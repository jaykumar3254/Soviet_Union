#include<iostream>
using namespace std;

class  base
{

	public:
			int a,b;
	void fun()
	{
		cout<<"Inside fun"<<"\n";
	}
	void gun()
	{
		cout<<"Inside gun"<<"\n";
	}
	void sun()
	{
		cout<<"Inside sun"<<"\n";
	}

	
};

class derived : public base
{
		public:
				int x,y;
	void fun()
	{
		cout<<"Inside fun dev"<<"\n";
	}
	void gun()
	{
		cout<<"Inside gun dev"<<"\n";
	}
	void sun()
	{
		cout<<"Inside sun dev"<<"\n";
	}

	
};
int main()
{


base *bp =new base;			//no casting
derived *dp =new derived;
}