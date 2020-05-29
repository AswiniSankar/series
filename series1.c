/*some of series of n
ip: 5
op: 35
*/
#include<stdio.h>
int main()
{
   int n,i,sum=0;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      for(int j=1;j<=i;j++)
        sum=sum+j;
   }
   printf("\n%d\n",sum);
   return 0;
}
