//Print the following Series using a menu driven program
//1. Fibonacci series
//2. n natural numbers
//3. n prime numbers
//4. n even numbers
//5. n pallindrome numbers
//Find Sum of the following
//6. 1+4+9+16+.....
//7. 1+2+6+24+120+.....
//8. 1/2+2/3+3/4+4/5+....

# include <bits/stdc++.h>
# include <conio.h>
using namespace std;
# define ll long long
int rev(ll x)
{
    ll y=x,a,r=0;
    while(y>0)
    {
        a=y%10;
        r=10*r+a;
        y/=10;
    }
        return r;
}

int fact(ll x)
{
    ll a=1;
    for(int i=1;i<=x;i++)
    {
        a*=i;
    }
    return a;
}

int main()
{
    int ch,n;
    ll i,j,a1=1,a5=1,a6=0,a7=0,b1=1,b5,b7,t1,x=2;
    float a8=0;
    cout << "Enter option \n";
    cout<<"1. Print Fibonacci series\n";
    cout<<"2. n natural numbers\n";
    cout<<"3. n prime numbers\n";
    cout<<"4. n even numbers\n";
    cout<<"5. n palindrome numbers\n";
    cout<<"6. 1+4+9+16+.....\n";
    cout<<"7. 1+2+6+24+120+.....\n";
    cout<<"8. 1/2+2/3+3/4+4/5+....\n";
    cin >> ch;
    cout<<"Enter upto how many terms you require: ";
    cin>>n;
    switch(ch)
    {
        case 1: cout<<"Following is the Fibonacci series upto "<<n<<" terms:--\n";
                cout<<"1, 1, ";
                for(int i=1;i<=n-2;i++)
                {
                    t1=a1;
                    a1=b1;
                    b1+=t1;
                    cout<<b1<<", ";
                }
                break;
        case 2: cout<<"Following is the Natural number series upto "<<n<<" terms:--\n";
                for(int i=1;i<=n;i++)
                    cout<<i<<", ";
                break;
        case 3: cout<<"Following is the Prime number series upto "<<n<<" terms:--\n";
                while(n)
                {
                    for(i=2;i<x;i++)
                        if(x%i==0)
                            break;
                    if(i==x)
                    {
                        cout<<x<<", ";
                        n--;
                    }
                    x++;
                }
                break;
        case 4: cout<<"Following is the Even number series upto "<<n<<" terms:--\n";
                for(int i=2;i<=2*n;i+=2)
                    cout<<i<<", ";
                break;
        case 5: cout<<"Following is the Palindrome number series upto "<<n<<" terms:--\n";
                while(n)
                {
                    b5=rev(a5);
                    if(a5==b5)
                    {
                        cout<<a5<<", ";
                        n--;
                    }
                     a5++;
                }
                break;
        case 6: for(int i=1;i<=n;i++)
                {
                    a6+=i*i;
                }
                cout<<"1+4+9+16+.....upto "<<n<<" terms is "<<a6;
                break;
        case 7: for(int i=1;i<=n;i++)
                {
                    b7=fact(i);
                    a7+=b7;
                }
                cout<<"1+2+6+24+120+.....upto "<<n<<" terms is "<<a7;
                break;
        case 8: for(int i=1;i<=n;i++)
                {
                    a8+=(float)i/(i+1);
                }
                cout<<"1/2+2/3+3/4+4/5+....upto "<<n<<" terms is "<<a8;
                break;
        default:
            // If the options is not 1-8, error message is shown
            cout << "Error! Option is not correct";
            break;
    }
    getch();
    return 0;
}
