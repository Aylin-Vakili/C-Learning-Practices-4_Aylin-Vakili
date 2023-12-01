#include<stdio.h>

int main()
{
    int c ,r ;
    int valid = 0;

    while (!valid){
     printf("\n Sandali and radif numbers : ");
     scanf("%d %d", &c, &r);

     if ((1<=r)&&(r<=10) && (1<=c)&& (c<=20)){valid=1;}
     else printf("\n Invalid numbers\n");
   }

    if (c<=10){
        int z;
        z= 10 - (r-1);
        printf ("\n Right %d %d\n",z ,c ); }

    if (c>10){
        int z;
        z= 10 - (r-1);
        int y;
        y = 20 - (c-1);
        printf ("\n Left %d %d\n",z ,y ); }


 //Goodbye :D
 return 0;
}
 //Made by Aylin Vakili - Student number : 14025141115 - Practice 4
