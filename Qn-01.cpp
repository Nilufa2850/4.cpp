//Define a c++ function to print all prime numbers between two given numbers.

#include<iostream>
using namespace std ;
void prime(int , int) ;

int main ()
{
    int x , y ;
    cout<<"Enter two numbers : ";
    cin>>x>>y ;
    prime(x,y) ;
    return 0 ;

}
void prime(int m , int n)
{
    int i, j  ;

    for (i=(m<n?m:n) ; i<=(m>n?m:n) ; i++)
    {
        for (j=2 ; j<i ; j++)
        {
            if (i%j==0)
                break ;
    
        }
        if (j==i)
            cout<<i<<" " ;
    }
}
