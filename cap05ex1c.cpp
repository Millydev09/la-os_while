//cap05ex1c
#include <iostream>
using namespace std;

int i;

int main(void)
{
   int r,n;

   cout << "qual o numero da tabuada:" << endl;
   cin >> n;
   i=1;
   while (i<=10)
   {
      r=n*i;
      cout << n << "x" << i << "=" << r << endl;
      i=i+1;
   }
   return 0;
}
