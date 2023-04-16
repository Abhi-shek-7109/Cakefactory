#include<iostream>
#include<math.h>

using namespace std;

int main(){

    cout<<"hello welcome to my application"<<endl;

    cout<<"please fill the bellow information"<<endl;

    cout<<"Choose a Username"<<endl;
    string user;
    getline(cin,user);

    cout<<"Choose a Password"<<endl;
    string pass;
    getline(cin,pass);

    cout<<"Your account hass been created"<<endl;

    cout<<"PLease Login Now"<<endl;
    cout<<"Username"<<endl;
    string user1;
    getline(cin,user1);

    cout<<"Password"<<endl;
    string pass1;
    getline(cin,pass1);

    while (user1!=user||pass1!=pass)
    {
        cout<<"you have entered the wrong credentials please enter again"<<endl;
        cout<<"Username"<<endl;
        string user1;
        getline(cin,user1);

        cout<<"Password"<<endl;
        string pass1;
        getline(cin,pass1);

    }
    
    cout<<"You are logged in "<<endl;
    
    cout<<"Welcome to Cake factory"<<endl;

    double balance = 5.00;
    cout<<"As a sign in bonus you get "<<balance<<" dollar"<<endl;

    cout<<"Would you like to add more rs to your balance "<<endl;
    string q1;
    getline(cin,q1);

    if(q1=="yes"){
        cout<<"please enter the amount you want to add"<<endl;
        double add;
        cin>>add;
        cout<<"your new balance is "<<add+balance<<" dollar"<<endl;

    }else {
         cout<<"alrght no plroblem"<<endl;
         }


    cout<<"Would you like cake today"<<endl;
    string q2;
    getline(cin,q2);

    if (q2=="yes")
    {
        cout<<"select type of cake"<<endl;

        string caketype[]={"chacolate","vanilla","butterscoth","strawberry"};
        double price[]={1.0,2.0,3.0,4.0};

        for(int i=0; i<4; i++){
            cout<<i<<". "<<caketype[i]<<" -- "<<price[i]<<" dollar"<<endl;

        }
        cout<<"Your choice option"<<endl;
        int q3;
        cin>>q3;

        cout<<"your order is "<<caketype[q3]<<" at price of "<<price[q3]<<endl;

        cout<<"your remaning balance is "<<balance-price[q3]<<endl;



    }
    else{cout<<"have a good day"<<endl;}



}