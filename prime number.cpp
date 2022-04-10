#include<iostream>
#include<conio.h>
using namespace std;
int is_prime(int);
main()
{  int n,i;
  cout<<"enter the number";
  cin>>n;
  cout<<"prime number is ";
 for(i=1;i<=n;i++)
 {if(is_prime(i))
    cout<<i<<"\t";
 }




}
 int is_prime(int x)
 { int i; for(i=2;i<x;i++)
   { if(x%i==0)
      break;

   }
  if(i==x)
    return 1;
  return 0;


 }
