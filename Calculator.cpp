//Basic Calculator using C++

# include <bits/stdc++.h>
# include<conio.h>
using namespace std;
int main()
{
    int ch,a1,a2,ans1;
    float num1, num2,ans;
    cout << "Enter option \n 1.Addition \t 2. Subtraction \n 3.Multiplication \t 4. Division \n 5. Modulus \t 6. Maximum of two nos \n ";
    cin >> ch;
    if(ch==1||ch==2||ch==3||ch==6)
    {
        cout << "Enter two operands: ";
        cin >> num1 >> num2;
        if(num2>num1)
        {
            int t=num1;
            num1=num2;
            num2=num1;
        }
    }
//In case of division and modulo operator, we need to know which needs to be divided by which.
    else if(ch==4)
    {
        cout<<"Enter Dividend: ";
        cin>>num1;
        cout<<"Enter Divisor: ";
        cin>>num2;
    }
//Modulus can only be calculated for integer input.
    else if(ch==5)
    {
        cout<<"Enter Dividend: ";
        cin>>a1;
        cout<<"Enter Divisor: ";
        cin>>a2;
    }
    switch(ch)
    {
        case 1:
            ans=num1+num2;
            cout<<"Sum of two numbers is "<<ans;
            break;
        case 2:
            ans=num1-num2;
            cout<<"Difference of two numbers is "<<ans;
            break;
        case 3:
            ans=num1*num2;
            cout<<"Product of two numbers is "<<ans;
            break;
        case 4:
            ans=num1/num2;
            cout<<"Division of "<<num1<<" by "<<num2<<" is "<<ans;
            break;
        case 5:
            ans1=a1%a2;
            cout<<"Remainder when "<<a1<<" is divided by "<<a2<<" is "<<ans1;
            break;
        case 6:
            ans=num1;
            cout<<"Maximum of two numbers is "<<ans;
            break;
        default:
            // If the options is not 1-6, error message is shown
            cout << "Error! Option is not correct";
            break;
    }
    getch();
    return 0;
}
