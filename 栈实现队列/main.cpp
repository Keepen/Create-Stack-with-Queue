#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
public:
	/** Initialize your data structure here. */
	MyQueue() {
		 
	}

	/** Push element x to the back of queue. */
	void push(int x) {
		while (!exit.empty()) {
			int top = exit.top();
			exit.pop();
			enter.push(top);
		}
		enter.push(x);
	}

	/** Removes the element from in front of queue and returns that element. */
	int pop() {
		int ret = peek();
		exit.pop();
		return ret;
	}

	/** Get the front element. */
	int peek() {
		while (!enter.empty()) {
			exit.push(enter.top());
			enter.pop();
		}
		return exit.top();
	}

	/** Returns whether the queue is empty. */
	bool empty() {
		return exit.empty() && enter.empty();
	}
private:
	stack<int> enter;
	stack<int> exit;

};

/**
* Your MyQueue object will be instantiated and called as such:
* MyQueue* obj = new MyQueue();
* obj->push(x);
* int param_2 = obj->pop();
* int param_3 = obj->peek();
* bool param_4 = obj->empty();
*/
int main() {
	MyQueue queue ;
	queue.push(1);
	queue.push(2);
	cout << "peek:" << queue.peek() << endl;
	system("pause");
	return 0;

}