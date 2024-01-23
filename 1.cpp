/*1. WAP to print rate of interests of different banks using
hierarchical inheritance:
- Class RBI -> Class SBI
- Class RBI -> Class BOB
- Class RBI -> Class ICICI
- inherit rate attribute and getROI() method in all child
classes*/

#include<iostream>

using namespace std;

class RBI
{
	public :
	void get(){
		int Rate=12;

	}
};

class SBI : public RBI
{
	public :
			int Rate=5;
	void getsbi(){
				cout<<"The Rate of Interest in SBI Bank is : "<<Rate<<" % "<<endl;
	}
};


class BOB : public RBI
{
		public :
	void getbob(){
		
				int Rate=5;
	
			
				cout<<"The Rate of Interest in BOB Bank is : "<<Rate<<" % "<<endl;
	}
};
class ICICI : public RBI
{
		public :
	void geticici(){
				int Rate=5;
			cout<<"The Rate of Interest in ICICI Bank is : "<<Rate<<" % "<<endl;	
	}
};

int main(){
	RBI r;
	SBI s;
	BOB b;
	ICICI i;
	s.getsbi();
	b.getbob();
	i.geticici();
	return 0;
}
