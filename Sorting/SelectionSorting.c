#include<stdio.h>
int printarray(int *a[],int size){
        for(int b=0;b<size;b++){
            printf("%d\t",a[b]);
        }
        printf("\n");
}
int selectionSort(int *a[],int size){
    int b,c;
    for (b=0;b<size;b++){
        int min=b;
        for (c=b+1;c<size;c++){
            if(a[min]>a[c]){
                min=c;
                }}
                sort(a,b,min);}
}
void sort(int *A[],int x,int y){
    int swap;
                swap=A[x];
                A[x]=A[y];
                A[y]=swap;
}
int main(){
    int size,b;
    printf("enter the size of array\n");
    scanf("%d",&size);
    int a[size];
    printf("enter the values to be sorted\n");
    for (b=0;b<size;b++){
        scanf("%d",&a[b]);}
        printf("Values Entered\n");
        printarray(a,size);
        selectionSort(a,size);
        printf("the sorted array elements \n");
        printarray(a,size);

    return 0;}