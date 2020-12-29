/*
"Enter your age: "
"Enter your height: "
"Enter your property: "
"Your status = "
"UNFRIEND"
"FRIEND"
"BEST FRIEND"
"ONE-NIGHT-STAND"
"MARRIED"
*/


#include<iostream>
#include<string>
using namespace std;

int main()
{
    int age;
    double height;
    string status;
    double property;
    
    cout<<"Enter your age: ";
    cin>>age;
    
    
    if(age<=20)
    {
        cout<<"Enter your height: ";
        cin>>height;

        if(height<160&&height<175)
        {
            cout<<"Your status = ";
            cout<<"UNFRIEND";

        }

        else 
        {
            if(height<175)
            {
                cout<<"Your status = ";
                cout<<"FRIEND";

            }
            else
            {
                cout<<"Enter your property: ";
                cin>> property;
                if(property>69000000)
                {
                    cout<<"Your status = ";
                    cout<<"MARRIED";
                }
                else
                {
                    cout<<"Your status = ";
                    cout<<"ONE-NIGHT-STAND";
                }
            }
        } 


    }
    else
    {
        if(age<30)
        {
            cout<<"Enter your property: ";
            cin>> property;
            if(property>10000000)
            {
                cout<<"Your status = ";
                cout<<"BEST FRIEND";
            }
            else
            {
                cout<<"Your status = ";
                cout<<"UNFRIEND";
            }
        }
        else
        {
            cout<<"Your status = ";
            cout<<"UNFRIEND";
        }
        
    }
}