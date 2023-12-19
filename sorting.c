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

2.//WAP to delete an element from an array//
    #include<stdio.h>
int main(){
    int i,pos,size,arr[100];
    printf("enter the size of array");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("enter the element %d",i+1);
        scanf("%d",&arr[i]);
    }
    printf("enter the position u want to delete from:" );
    scanf("%d",&pos);
    for(i=pos-1;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    size--;
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
        
    }

    
}
