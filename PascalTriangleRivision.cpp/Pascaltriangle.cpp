// // we code pascal triangle using combination ncr

// #include<iostream>
// using namespace std;
// int fact(int n)
// {
//     int fact=1;
//     for(int i=2; i<=n; i++)
//     {
//         fact*=i;
//     }
//     return fact;
// }
// int combination(int n, int r)
// {
//     int ncr=fact(n)/(fact(n-r)*fact(r));
//     return ncr;
// }
// int main()
// {
//     int n=5;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<=i; j++)
//         {
//             cout<<combination(i,j);
//         }
//         cout<<endl;
//     }
// }





// Write code for permutation and combination 
//  permutation -> npr=n!/(n-r)!
//  combination -> ncr=n!/((n-r)!*r)!

#include<iostream>
using namespace std;
int fact(int n)
{
    int fact=1;
    for(int i=2; i<=n; i++)
    {
        fact*=i;
    }
    return fact;
}
int permutation(int n, int r)
{
    int npr=fact(n)/fact(n-r);
    return npr;
}
int combination(int n, int r)
{
    int ncr=fact(n)/(fact(n-r)*fact(r));
    return ncr;
}
int main()
{

    cout<<permutation(5,3);
    cout<<endl;
    cout<<combination(5,3);
}