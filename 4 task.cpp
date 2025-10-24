#include <iostream>
using namespace std;

int main()
{
    int currentyear,birthyear,age;
    cout<<"Please enter your year : ";
    cin>>currentyear;
    cout<<"Please enter your birth year : ";
    cin>>birthyear;
    age=currentyear+birthyear;
    if(age>=18&&age<=30)
        cout<<"eligible for job ";
    else
        cout<<"not eligible for job ";
    return 0;

}
