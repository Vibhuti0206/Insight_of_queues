#include<bits/stdc++.h>
using namespace std;
class Queue{
	
	list<int> qu;
	int cs =0;
	public:
		bool isEmpty()
		{
			return cs == 0;
		}
		void enqueue(int data){
			qu.push_back(data);
			cs += 1;
		}
		void dequeue()
		{
			if(!isEmpty())
			{
				cs -= 1;
				qu.pop_front();
			}
		}
		int getFront()
		{
			return qu.front();
		}
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
