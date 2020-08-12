#include <iostream>  // Header files used for input output statements used in c++ program 

using namespace std; // it basically is used for standard names for objects,variabes and function in c++ to uniquely distinguish them from other members in the library 

int main()  //This is the main function which runs the c++ code inside it 
{
    cout<<"hello world"<<endl;  // cout statement is us to print the output on on the screen
    int a , b = 3;
    cout<<"enter two nos."<<endl; // endl is used to go on to next line 
    cin>>a; // cin statement is used to take input from a user 
    cin>>b;
    cout<<a<<"\n"<<b<<"\n"<<"sum ="<<a+b; // this style is refered to as csascading in c++ where you print multple things in single line using output "<<" operator
    return 0;
}
