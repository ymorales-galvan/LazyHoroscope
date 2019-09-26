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
        cout<< "you are destined to be famous!" <<endl;
 }
else
{
        cout<< "you should keep a low profile." <<endl;
}

int index;
index = lastName.length()-1;

if ( lastName.at (index) == 'A' || lastName.at (index) == 'a' || lastName.at (index) == 'E' || lastName.at (index) == 'e' ||  lastName.at (index) == 'I' || lastName.at (index) == 'i' || lastName.at (index) == 'O' || lastName.at (index) =='o' || lastName.at (index) == 'U'|| lastName.at (index) == 'u' )
{
        cout<< "you have already met your true love." <<endl;
}



         cout<< "have a good day!" <<endl;


  return 0;
}
