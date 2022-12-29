//AMINA HABIB
//DATA SCIENCE 1ST SEMS
//PROGRAMING FUNDAMENTALS
#include<iostream>
using namespace std;
void noReturnNoArgs(){
	cout<<"This function not receiving any arguments and not returning anything"<<endl;	
}

void noReturnWithArgs(int number){
    cout<<"This function received this argument = "<<number<<" and not returning anything"<<endl;	
}

string returnNoArgs(){
	return "This function not receiving any arguments and but returning this String";
}

int returnWithArgs(int number){
	cout<<"This function received this argument = "<<number<<" and returning argument after taking its squar "<<endl;
    return number*number;
}

int main(){
   int number;
   cout<<"Enter Any Number = ";
   cin>>number;
   noReturnNoArgs();
   noReturnWithArgs(number);
   cout<<returnNoArgs()<<endl;
   cout<<returnWithArgs(number);
}
