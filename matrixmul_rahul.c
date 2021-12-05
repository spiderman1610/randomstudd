#include <stdio.h>

//this program is pretty boring bcoz we have to do repetition :(
int main()
{
   int a[3][3],b[3][3],ans[3][3];
   
   printf("enter the elements of first matrix \n");
   
   for(int row = 0;row < 3;row++)
   {
      for(int col = 0;col < 3;col++)
      { 
          printf("%d-%d ->",row,col);
          scanf("%d",&a[row][col]);
      }
   }
   printf("enter the elements of second matrix \n");
   
   for(int row = 0;row < 3;row++)
   {
      for(int col = 0;col < 3;col++)
      {
          printf("%d-%d ->",row,col);
          scanf("%d",&b[row][col]);
      }
   }
   
   
   for(int row = 0;row < 3;row++)
   {
      for(int col = 0;col < 3;col++)
      {
          ans[row][col] = 0;
          
          for(int x = 0;x < 3;x++)
          {
             ans[row][col] += a[row][x] * b[x][col];
          }
      }
   }
   
   for(int row = 0;row < 3;row++)
   {
      for(int col = 0;col < 3;col++)
      {
          printf("%d \t",ans[row][col]);
      }
      printf("\n");
   }
}