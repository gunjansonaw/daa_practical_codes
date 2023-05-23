//iterative code for factorial
#include <iostream>
using namespace std;
int fact_iter(int n)
{
int result = 1;
for (int i = 1; i <= n; i++)
{
result *= i;
}
return result;
}
int main()
{
int n;
while (1)
{
cout<<"Enter interger (0 to exit): ";
cin>>n;
if (n == 0)
break;
cout<<fact_iter(n)<<endl;
}
return 0;
}


