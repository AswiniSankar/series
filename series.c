#include<stdio.h>
#include<stdlib.h>
void arith();
void gem();
void even();
void odd();
void sqaure();
void cube();
void fib();
void tri();
int main()
{
 int c;
 while(1)
 {printf("your coices are\n1.arithmetic\n2.geometric\n3.even number\n4.odd number\n5.square number\n6.cube number\n7.fibinaci\n8.trigangular\n9.exit\nenter your choice\n");
  scanf("%d",&c);
  switch(c)
  {case 1:
     arith();break;
   case 2:gem();break;
   case 9:exit(1);break;
   case 3:even();break;
   case 4:odd();break;
   case 5:sqaure();break;
   case 6:cube();break;
   case 7:fib();break;
   case 8:tri();break;
   default:printf("INVALID OPTION\n");
  }
 }

}
void arith()
{int n,a,d,i;
 printf("enter the digit,inital,difference\n");
 scanf("%d%d%d",&n,&a,&d);
 for(i=1;i<=n;i++)
 {
   printf("%d ",a);
   a=a+d;
 }printf("\n");
}
void gem()
{int n,a,r,i;
 printf("enter the digit,inital,commonratio\n");
 scanf("%d%d%d",&n,&a,&r);
 for(i=1;i<=n;i++)
 {
   printf("%d ",a);
   a=a*r;
 }
 printf("\n");
}
void even()
{
  int n,i;
  printf("enter the number\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    if(i%2==0)
     printf("%d ",i);
  }printf("\n");
}
void odd()
{
  int n,i;
  printf("enter the number\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    if(i%2!=0)
     printf("%d ",i);
  }printf("\n");
}
void sqaure()
{
  int n,i;
  printf("enter the number\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  { printf("%d ",i*i);
  }printf("\n");
}
void cube()
{
  int n,i;
  printf("enter the number\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
     printf("%d ",i*i*i);
  }printf("\n");
}
void fib()
{
  int n,i,a=0,b=1,c;
  printf("enter the number\n");
  scanf("%d",&n);
  printf("%d %d ",a,b);
  for(i=2;i<n;i++)
  {
      c=a+b;
      a=b;
      b=c;
     printf("%d ",c);
  }printf("\n");
}
void tri()
{
  int n,j,t;
  printf("enter the number\n");
  scanf("%d",&n);
  for(j=1;j<=n;j++)
  {  t=j*(j+1)/2;
     printf("%d ",t);
  }printf("\n");
}
