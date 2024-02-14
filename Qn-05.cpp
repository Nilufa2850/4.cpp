//Define a c++ function to check whether a given number is a term in a fibonacciseries or not.

#include<iostream>
using namespace std ;
void fibo(int) ;

int main ()
{
    int x ;
    cout<<"Enter a number : " ;
    cin>>x ; 

    fibo(x) ;
    return 0 ;
}

void fibo(int x)
{
    int a=-1 , b=1 , c ;

    if (x==1 || x==0)
        cout<<x<<" is fobo ";
    
    else 
    {
        while(x)
        {
            c = a+b ;
            a = b ;
            b = c ;

            if (x==c)
            {
                cout<<x<<" is fibo number" ;
                break ;
            }
            else if (c>x)
            {
                cout<<x<<" is not fibo";
                break ;
            }
        }
    }
    



}
