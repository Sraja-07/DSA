#include<stdio.h>
int main()
{
	 int i,a,b,mid,n,key;
   scanf("%d",&n); 
   int arr[n];
   for(i= 0;i<n;i++)
      scanf("%d",&arr[i]); 
   scanf("%d",&key);
   a= 0;
   b=n-1;
   mid=(a+b)/2;
   while (a<=b) 
   {
      if(arr[mid]<key)
         a=mid+1;    
      else if(arr[mid]==key) 
	  {
         printf("%d",mid);
         break;
      }
      else
         b=mid-1;
      mid=(a+b)/2;
   }
   if (a>b)
      printf("Not found!");
   return 0;  
}
