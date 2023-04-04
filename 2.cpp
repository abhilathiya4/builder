#include<iostream>
#include<string.h>

using namespace std;

class data{
	
	private:
		
		char name[50];
		int grid;
		
		public:
			
		data(int x,char y[]){
			
			grid= x;
			strcpy(name,y);
			
			cout<<grid<<endl;
			cout<<name<<endl<<endl;
		}
		
		data(data &n){
			
			grid= n.grid;
			strcpy(name,n.name);
			
			cout<<grid<<endl;
			cout<<name<<endl<<endl;
			
		}

		
};


int main(){
	
	int n;
	char gr[50];
	
	cout<<"enter student name : ";
	cin>>n;
	cout<<"enter student gr id : ";
	cin>>gr;
	
	data s1(gr,n);
	data s2(s1);

	return 0;
	
}
