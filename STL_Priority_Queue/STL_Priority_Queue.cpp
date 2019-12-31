#include <iostream>
#include <queue>

using namespace std;

int main()
{
	/*
	pq.empty();
	pq.size();
	pq.top();
	pq.pop();
	pq.push(item);
	*/

	priority_queue<int, vector<int>> pq;//the max one as highest priority
	priority_queue<int, deque<int>, greater<int>> pq2;//the min one as highest priority

	pq.push(20);
	pq.push(1);
	pq.push(100);
	pq.push(15);

	pq2.push(20);
	pq2.push(1);
	pq2.push(100);
	pq2.push(15);

	while (!pq.empty())
	{
		cout << pq.top() << endl;//the max is defaulted as the highest priority 
		pq.pop();
	}
	
	cout << endl << endl;

	while (!pq2.empty())
	{	
		cout << pq2.top() << endl;
		pq2.pop();
	}

	return 0;
}