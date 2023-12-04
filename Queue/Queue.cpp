#include<stdio.h>
#define MAX_SIZE 100  
  
int queue[MAX_SIZE];  
int front = -1;  
int rear = -1;  
  
void enqueue(int element) {  
    if (rear == MAX_SIZE - 1) {  
        printf("Queue is full");  
        return;  
    }  
    if (front == -1) {  
        front = 0;  
    }  
    rear++;  
    queue[rear] = element;  
}  
  
int dequeue() {  
    if (front == -1 || front > rear) {  
        printf("Queue is empty");  
        return -1;  
    }  
    int element = queue[front];  
    front++;  
    return element;  
}  

int show()
          {
	      if(front==-1)
	      {
		  printf("\nUnderflow!!");
	      }
	      else
	      {
		  printf("\nElements present in the Queue: \n");
		  printf("%d\n",queue[front]);
	      }
          }
  
int main() {  
    enqueue(10);  
    enqueue(20);  
    enqueue(30);  
    enqueue(40);  
    enqueue(50);  
    printf("%d ", dequeue());  
    printf("%d ", dequeue());  
    printf("%d ", dequeue());  
    printf("%d ", dequeue());  
    show(); 
    return 0;  
}  
