#include<stdio.h>
void display(int arr12[]);
void findandrotate(int arr12[]);
void main(){
       int i,arr12[5];
       for(i=0;i<5;i++)
       {
       scanf("%d",&arr12[i]);
                 } 
      display(arr12);
      findandrotate(arr12);
      }

void findandrotate(int arr12[]){
            int temp,i,j=0;
            for(i=0;i<5;i++){                               // 1 0 1 2 0
                 if(arr12[i]!=0 && arr12[j]==0){
                            temp=arr12[i];
                            arr12[i]=arr12[j];
                            arr12[j]=temp;
                 }
                 if(arr12[j]!=0){
                        j++;
                 }
                 
}
display(arr12);
}
void display(int arr12[]){
    int i;
    for(i=0;i<5;i++)  
    {  
        printf("%d\n",arr12[i]);  
    } 
}
