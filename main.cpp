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


if ( firstName.at (0) == 'A' || firstName.at (0) == 'a' || firstName.at (0) == 'E'|| firstName.at (0) == 'e' || firstName.at (0) == 'I' || firstName.at (0) == 'i' || firstName.at (0) == 'O' || firstName.at (0) == 'o'|| firstName.at (0) == 'U'|| firstName.at (0) == 'u' )
{
        cout<< "You are destined to be famous " <<endl ;
 }
else
{
        cout<< "You should keep a low profile" <<endl ;
}

int index;
index = lastName.length()-1;

if ( lastName.at (0) == 'A' || lastName.at (0) == 'a' || lastName.at (0) == 'E' || lastName.at (0) == 'e' ||  lastName.at (0) == 'I' || lastName.at (0) == 'i' || lastName.at (0) == 'O' || lastName.at (0) =='o' || lastName.at (0) == 'U'|| lastName.at (0) == 'u' )
{
        cout<< "You have already met your true love" <<endl;
}
else
 {
         cout<< "Have a nice day" <<endl;
 } 
  return 0;
}
