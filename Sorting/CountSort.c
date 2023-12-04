#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

void printarray(int* A[],int n){
    for (int i = 0; i < n; i++){
       printf("%d  ",A[i]);}
    printf("\n");}

int maximum(int A[],int n){
    int max =INT_MIN;
    for (int i = 0; i < n; i++){
        if(max<A[i]){
            max=A[i];}}
    return max;}
    
void countsort(int* A,int n){
    int i,j;
    int max=maximum(A,n);
    int* count=(int*)malloc((max+1)*sizeof(int));
    for (i = 0; i < n; i++){
        count[i]=0;}
    for (i = 0; i < n; i++){
        count[A[i]]=count[A[i]]+1;}
    i=0; 
    j=0;
    
    while(i<max+1){
        if(count[i]>0){
            A[j]=i;
            count[i]=count[i]-1;
            j++;}
        else{
            i++;}}}
int main(){
    int A[]={1,2,4,1,4,2,3,1,2,4,1,2,3,4,1,2,4,2,4};
    int n=sizeof(A)/sizeof(int);
    printarray(A,n);
    countsort(A,n);
    printarray(A,n);
    return 0;}