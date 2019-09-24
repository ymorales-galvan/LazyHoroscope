//Authors:Yuliana
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
string firstName;
string lastName; 
  //get user input
cout<< "What is your first name?\n" ;
cin>>firstName; 
cout<< "What is your last name?\n";
cin>>lastName;

  //tell fortune
 
cout<<"Welcome, " <<firstName [0]<<"."  <<lastName[0]<< "., here is your fortune..." <<endl;
int lucky = firstName.length ();
cout<< "your lucky number is " <<lucky <<endl;
  return 0;
}
