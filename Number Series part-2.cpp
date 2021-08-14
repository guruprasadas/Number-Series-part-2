# include<iostream>
using namespace std;

int main()
{
  int n, num;
  cout<<"Enter the number"<<endl;
  cin>>n;
  
  if( n % 2 == 0)
  {
    n = n / 2;
    num = 6;
  }
  
  else
  {
    n = (n/2) + 1;
    num = 7;
  }
  
  cout<< (n - 1) * num;
  return 0;
}
