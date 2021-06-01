#include<bits/stdc++.h>
using namespace std;


int main()
{
   vector<int> arr{0,1,0,2,1,0,1,3,2,1,2,1};
   int n=arr.size();

   int lmax=0,rmax=0,result=0;
   int left=0,right=n-1;

   while(left<=right)
   {
      if(arr[left]<=arr[right])
      {
         if(arr[left]>=lmax)
         lmax=arr[left];
         else
         result=result+lmax-arr[left];

         left++;
      }
      else
      {
         if(arr[right]>=rmax)
         rmax=arr[right];
         else
         result=result+rmax-arr[right];

         right--;
      }
   }

   cout<<result;
}