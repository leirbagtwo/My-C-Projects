#include<iostream>
using namespace std;
int main()
{
int ctr1[10][10]; 
for (int ctr2 = 0; ctr2 < 10; ctr2++)
{
for(int ctr = 0; ctr < 10; ctr++)
{
ctr1[ctr2][ctr] = (ctr2 + 1) * (ctr + 1);
}
}
for(int ctr2 = 1; ctr2 < 10; ctr2++)
{
for(int ctr = 0; ctr < 10; ctr++)
{
cout<< ctr1[ctr2][ctr] <<"\t";  
}          
cout<<endl;
}
system("pause");
}
