#include<stdio.h>
#define MAX_SIZE 10
  
int queue[MAX_SIZE];  
int front = -1;  
int rear = -1;  
  
void enqueue(int element) {  
    if ((rear == (MAX_SIZE - 1) && front==0)||(front-1==rear)) {  
        printf("Overflow!!\n");  
        return;  
    }  
    
    else{
        if (front == -1) {  
        front++;  
        rear++;
        }
        else{
        rear=(rear+1)%MAX_SIZE;  
        queue[rear] = element;} 
    }
}  
  
int dequeue() {  
    if (front == -1) {  
        printf(" Underflow!!\n");  
        return -1;  
    }
    else{
        front=(front+1)%MAX_SIZE;
        }
    if(front==rear+1){
        front=-1;
        rear=-1; 
        int element = queue[front];  
        return element;
    }  
}  

void Display()
          {
	      if(front==-1)
	      {
		  printf(" Underflow!!\n");
	      }
	      else
	      {
		  printf("\nElements present in the Queue: \n");
          for (int i =front; i !=rear; i=(i+1)%MAX_SIZE)
          {
            printf("%d\n",queue[i]);
	      }
          printf("%d\n",queue[rear]);
          }

          }
  
int main() {  
    enqueue(1);  
    enqueue(2);  
    enqueue(3);
    printf("Element dequed\n", dequeue());  
    printf("Element dequed\n", dequeue());  
    printf("Element dequed\n", dequeue());  
    printf("Element dequed\n", dequeue());   
    enqueue(4);  
    enqueue(5);
    enqueue(6);  
    enqueue(7);  
    enqueue(8);  
    enqueue(9);  
    enqueue(10);  
    printf("Element dequed\n", dequeue());  
    printf("Element dequed\n", dequeue());  
    printf("Element dequed\n", dequeue());  
    printf("Element dequed\n", dequeue());  
    enqueue(11);
    enqueue(12);
    enqueue(13);
    enqueue(14);
    enqueue(15);
    enqueue(16);
    enqueue(17);
    enqueue(18);
    enqueue(19);
    
    Display(); 
    return 0;  
}  