#include<iostream>

using namespace std;

class data{
	
	private:
		
		int id;
		char name[50];
		char role[50];
		int salary;
		int experience;
		char add[50];
		char email[50];
		int contact;
		
		public:
			void setter(){
				
				cout<<"enter your id : ";
				cin>>id;
				
				cout<<"enter your name : ";
				cin>>name;
				
				cout<<"enter your role : ";
				cin>>role;
				
				cout<<"enter your salary : ";
				cin>>salary;
				
				cout<<"enter your experience in years : ";
				cin>>experience;
				
				cout<<"enter your address : ";
				cin>>add;
				
				cout<<"enter your email : ";
				cin>>email;
				
				cout<<"enter your contact number : ";
				cin>>contact;
					
			}
			
			void getter(){
				
				cout<<id<<endl;
				cout<<name<<endl;
				cout<<role<<endl;
				cout<<salary<<endl;
				cout<<experience<<endl;
				cout<<add<<endl;
				cout<<email<<endl;
				cout<<contact<<endl;
			}
			
			
};


int main(){
	
	data o1,o2,o3,o4,o5;
	
	cout<<"enter detail of employee 1 "<<endl;;
	o1.setter();
	o1.getter(); 
	cout<<endl;
	cout<<"enter detail of employee 2 "<<endl;;
	o2.setter();
	o2.getter(); 
	cout<<endl;
	cout<<"enter detail of employee 3 "<<endl;;
	o3.setter();
	o3.getter(); 
	cout<<endl;
	cout<<"enter detail of employee 4 "<<endl;;
	o4.setter();
	o4.getter(); 
	cout<<endl;
	cout<<"enter detail of employee 5 "<<endl;;
	o5.setter();
	o5.getter(); 
	
	return 0;
	
}
