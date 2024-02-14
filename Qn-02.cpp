//Define a c++ function to fine the highest value digit in a given no.

#include<iostream>
using namespace std ;
int high(int) ;

int main ()
{
    int x ;
    cout<<"Enter a number : ";
    cin>>x ;

    cout<<"Highest no. of "<<x<<" is "<<high(x) ;
    return 0 ;
}

int high (int m)
{
    int rem , max=-999 ;

    while (m)
    {
        rem = m%10 ;

        if (rem > max)
            max = rem ;

        m = m/10 ;
    }
    return max ;
}
