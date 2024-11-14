#include<iostream>
 int main()
{ 
    int  n,i,j;
    int arr[100];
   

    printf("enter number of elemnts \n");
     scanf("%d",&n);

     printf("enter %d number of elemets in the array",n);

{
     for(i=0;i<n;i++);
     scanf("%d", &arr[i]);
}





    printf("array in reverse order is ");

   for(j = n-1; j>=0; j--)
 {  
     printf("%d", arr[j]);
 }
   
return 0;
}