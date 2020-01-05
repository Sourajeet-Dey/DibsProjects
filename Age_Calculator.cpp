//Program to check your age till date


#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
int birth_month,birth_year;
int current_month,current_year;
int ageinyear,ageinmonth;
cout<<"Age Calculator\n\n";

cout<<"\nEnter Your Birth Month(Eg:8): ";
cin>>birth_month;
cout<<"\nEnter Your Birth Year(Eg:1999): ";
cin>>birth_year;

cout<<"\nEnter The Current Month(Eg:12): ";
cin>>current_month;
cout<<"\nEnter The Current Year(Eg:2020): ";
cin>>current_year;
/*This is the logic written below:
if(birth_month>current_month)
{
    ageinyear=(current_year-1-birth_year);
    ageinmonth=(12-birth_month+current_month);
}
else
{
    ageinyear=(current_year-birth_year);
    ageinmonth=(current_month-birth_month);
}*/
ageinyear=birth_month>current_month?current_year-1-birth_year:current_year-birth_year ;
ageinmonth=birth_month>current_month?12-birth_month+current_month:current_month-birth_month ;
cout<<"\n\nYour Age is "<<ageinyear<<" Years And "<<ageinmonth<<" Months ";
getch();
return 0;
}
