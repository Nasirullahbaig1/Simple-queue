#include <iostream>
using namespace std;

const int size=10;
int queue[size];
int front, rear =-1;
int item;


bool isFull(){
	bool full=false;
	if(rear==size-1){
		full=true;
	}
	return full;
}

bool isEmpty(){
	bool empty=false;
	if(rear==-1 && front==-1){
		empty=true;
	}
	return empty;
}

void enqueue(int item){
	if(isFull()!= true){
		rear++;
		queue[rear]=item;
	}
	else
		cout<<"The Queue is full no more insertion!...\n";
}

void dequeue(){
	int temp;
	
	if(isEmpty()!= true){
		if(front==-1){
			front++;
			temp= queue[front];
			front++;
		}
		else{
			temp= queue[front];
			front++;
		}
	}
	else
		cout<<"The Queue is Empty can't perform Deletion!...\n";
		
	cout<<temp<<" Successfully deleted..\n";
		
}

int peak(){
	int peak;
	peak=queue[rear];
	
	return peak;
}

int main() {
	
while(true){
	
	int choice;
	
	cout<<"\nChoice the operation you want to Perform:\n\n";
	
	cout<<"1-Insert item to Queue.\n";
	cout<<"2-Delet item from Queue.\n";
	cout<<"3-Find the peak element.\n";
	cout<<"4-Print the Queue\n";
	cout<<"5-Exit\n";
	
	cout<<"\nChose the operation:\n";
	cin>>choice;
	
	switch(choice){
		
		case 1:
			cout<<"Enter the item to insert in the Queue\n";
			cin>>item;
			enqueue(item);
			break;
			
		case 2:
			dequeue();
			break;
			
		case 3:
			cout<<peak()<<" is the peak item in the Queue\n\n";
			break;
			
		case 4:
			cout<<"[ ";
			for(int i=front; i<=rear; i++){
				cout<<queue[i]<<" ";
			}
			cout<<"]\n\n";
			break;
			
		case 5:
			exit(0);
			
		default:
			cout<<"oops! Chose correct operation...\n\n"; 
	}
}
	
	return 0;
}
