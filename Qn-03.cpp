//Define a c++ function to calculate x raised to the power y
#include<iostream>
using namespace std ;
int power(int , int) ;

int main ()
{
    int x , y  ;
    cout<<"Enter values of x and y  : ";
    cin>>x >>y ;

    cout<<x<<" te the power "<<y<<" is "<<power(x,y) ;
    return 0 ;
}
int power (int x , int y)
{
    int i , result=1 ;
    for (i = y ; i>0 ; i--)
    {
        result = result*x ;
    }
    return result ;

}

