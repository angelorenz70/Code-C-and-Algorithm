#include<stdio.h>
#include<string.h>



void enqueue(int arr[], int max, int *front, int *rear, int *size){
    int data;
    printf("Enter data: ");
    scanf("%d", &data);
    if(*front == -1 && *rear == -1){
        *front = *rear = 0;
        *size += 1;
    }else if(*size <= max){
        *rear += 1;
        *size += 1;
    }else if(*rear == max && *front != 0){
        *rear = 0;
    }
    arr[*rear] = data;
    printf("enqueue: %d\n", arr[*rear]);
}

void dequeue(int arr[], int max, int * front,int * rear, int * size){
    if(*size == 0 && *front == *rear){
        printf("there's no data...\n");
    }else if(*front != -1){
        printf("dequeue: %d\n", arr[*front]);
        arr[*front] = 0;
        *front += 1;
        *size -= 1;
    }else if(*front > *rear && *front == max){
        *front = 0;
    }
}

void display(int arr[],int max, int front, int rear, int size){
    if(size == 0){
        printf("No data! \n");
    }else{
        if(front > rear){
            printf("data: ");
            for(int i = front; i < max; i++){
                printf("%d ", arr[i]);
            }
            for(int i = 0; i <= rear; i++){
                printf("%d", arr[i]);
            }
        }else{
            printf("data: ");
            for(int a = front; a <= rear; a++){
                printf("%d ", arr[a]);
            }
        }
    }
    printf("\n");
}

int main(){
    int arr[20], front = -1, rear = -1, size = 0;
    int choice;
    while(1){
        printf("1. enqueue\n2.dequeue\n3.display\n");
        scanf("%d", &choice);
        switch(choice){
        case 1:
            enqueue(arr,20,&front,&rear,&size);
            break;
        case 2:
            dequeue(arr,20,&front,&rear,&size);
            break;
        case 3:
            display(arr,20,front,rear,size);
            break;
        }
    }


    return 0;
}
