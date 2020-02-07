#include<bits/stdc++.h>
using namespace std;
class Queue{
    
	int arr[7];
	int ms = 7;//maximum size of queue
	int cs = 0; //current size
	int front = 0;
	int rear = ms - 1;
	public:
	 	
	bool isFull()
	{
	  return cs == ms;
    }
	bool isEmpty()
	{
	   return cs == 0;
    }
	void enqueue(int data)
	{
		if(!isFull())
		{
			rear = (rear+1)%ms;
			arr[rear] = data;
			cs +=1;
		}
	}
	void dequeue()
    {
	if(!isEmpty()){
	    front = (front+1)%ms;
	    cs -= 1;
	 }
	}
	int getFront()
	 { return arr[front]; }
};
int main()
{
	Queue q;
	for(int i=1;i<=6;i++)
	{
		q.enqueue(i);
	}
	q.dequeue();
	q.enqueue(8);
	while(!q.isEmpty()){
		cout<<q.getFront()<<endl;
		q.dequeue();
	}
	return 0;
}
