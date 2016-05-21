# include <iostream>
# include <string>
# include <cstring>

using namespace std;

class band
{

public:
	int total = 0;
	int input;

//public:
	int count = 0;
	
	virtual int getcount()=0; 
	void getdata();
	void putdata();
	void remove();
	
		
};

void band::getdata()
{

cout<<"Enter Total Members: ";
cin>>total;
}

/*void band::putdata()
{

cout<<"\nYou have total Members: "<<total;

}
*/
void band::remove()
{

cout<<"You have currently members = "<<total;
cout <<"Enter how many members you remove: ";
cin>>input;

total = total - input;

cout<<"You have currently members = "<<total;


}

class metal : public band
{
	protected:
		int pyr = 0;

	public:
		int getcount()
			{
				count = total;
				count = count +pyr;
				cout<<"\nNow you have total member:  "<<count;


			}

		void pyro();
		//void t1_members();
};

void metal::pyro()
{

	cout<<"Enter number of pyrotechnician: ";
	cin>>pyr;
	
	
}



class symphony : public band
{

	protected:
		int i;
		bool con;

	public:
		int getcount()
			{
				count = total;
				count = count +1;
				cout<<"\nNow you have total member:  "<<count;


			}

		void conductor();
		//void t1_members();







};


void symphony::conductor()
{

	cout<<"Is conductor present:(1/0) ";
	cin>>i;	

if (i == 1)
	{

		con = true;

	}

	

}


class marching_band 
{

	protected:
		bool condi;
		int take;
	
	public:
		
		void check_run();	


};

void marching_band::check_run()
{

	cout<<"Band Running: (1/0): ";
	cin>>take;
	
	if (take == 1)
	{
	
			condi = true;
			
	}
	


}


int main()
{
	int choice1;
	int choice2;
	metal m1;
	symphony s1;
	marching_band b1;
	cout<<"Name of Band\n";
	cout<<"(1)Metal Band\n";
	cout<<"(2)Symphony Band\n";
	cout<<"(3)Marching Band\n";
	cin>>choice1;

	switch (choice1)
	{
		
			
		
			
					
	
		
	
	
	
	
//if (choice1 ==1)
//{
case 1:
	system("cls");	
	cout<<"What do you want to do: \n";
	cout<<"(1)Add member\n";
	cout<<"(2)Add pyrotechnicians\n";
	cout<<"(3)View members\n";
	cout<<"(4)Remove Members\n";
	cin>>choice2;	

	switch (choice2)
	{
	
		case 1:
			m1.getdata();
		
		case 2:
			m1.pyro();
		case 3:
			m1.getcount();		
		case 4:
			m1.remove();	
	
	
	}
break;
//}


//if (choice1 ==2)
//{
case 2:
	system("cls");	
	cout<<"What do you want to do: \n";
	cout<<"(1)Add member\n";
	cout<<"(2)Add Conductor\n";
	cout<<"(3)Remove members\n";
	cout<<"(4)View members\n";
	cin>>choice2;	

	switch (choice2)
	{
	
		case 1:
			s1.getdata();
			
		
		case 2:
			s1.conductor();
		
		case 3:
			s1.remove();
	
		case 4:
			s1.getcount();

	}
break;
//}

case 3:
	system("cls");
	b1.check_run();	
	//cout<<"What do you want to do: \n";
	//cout<<"(1)Add member\n";
	//cout<<"(2)Remove Members\n";
	//cout<<"(3)View members\n";
	//cin>>choice2;	

	//switch (choice2)
	//{
	
		//case 1:
		//	b1.getdata();
			
		
		//case 2:
		//	b1.remove();
		
		//case 3:
	//		b1.getcount();
	
	
	//}
	

break;
}


}
