1.//WAP to sort an array in ascending order//
#include<stdio.h>
int main(){
    int i,n,j;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter the element %d :",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
