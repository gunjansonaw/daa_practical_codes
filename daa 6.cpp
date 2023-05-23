#include <iostream>
using namespace std;
int knaps(int n,int m,int w[],int p[]){
int i,j;
int knapsack[n+1][m+1];
for(j=0;j<=m;j++)
knapsack[0][j]=0;
for(i=0;i<=n;i++)
knapsack[i][0]=0;
for(i=1;i<=n;i++){
for(j=1;j<=m;j++)
{
if(w[i-1]<=j)
knapsack[i][j]=max(knapsack[i-1][j],p[i-1]+knapsack[i-1][j-w[i-1]]);
else
knapsack[i][j]=knapsack[i-1][j];
}}
return knapsack[n][m];
}
int main(){
int i,j,n,m;
cout<<"\nEnter number of item:\t";
cin>>n;
int w[n];
int p[n];
cout<<"\nEnetr weight & price of items:\t";
for(i=0;i<n;i++){
cin>>w[i]>>p[i];
}
cout<<"\nEnter capacity of knapsack:\t";
cin>>m;
int result=knaps(n,m,w,p);
cout<<"\nMaximum value that can be stored is:\t"<<result;
return 0;
}
