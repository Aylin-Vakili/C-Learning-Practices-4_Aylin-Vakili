#include<stdio.h>
#include<math.h>


int main()
{
  int a,b;
  char c;

  printf("\n Enter one of characters +, -, *, / with two integers: ");
  scanf("%c %d %d",&c ,&a ,&b);

 if( c==+ ) { a+=b 
   printf( "%d",a ) }
  
  if( c==- ) { a-=b 
   printf( "%d",a ) }

  if( c==* ) { a*=b 
   printf( "%d",a ) }

  if( c==/ ) { a/=b 
   printf( "%d",a ) }
  
  return 0;
}
//Made by Aylin Vakili - Student number 14025141115 - Practice 3
