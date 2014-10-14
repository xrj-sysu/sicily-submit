#include<iostream>
using namespace std;

enum ErrorCode {
    success,
    underflow,
    overflow
};
const int maxStack = 100;

template <class StackEntry>
class MyStack {
    public:
        MyStack();
        bool empty() const;
        ErrorCode pop();
        ErrorCode top(StackEntry &item) const;
        ErrorCode push(const StackEntry &item);
    private:
        int size;
        StackEntry entry[maxStack];
};
template <class StackEntry>
MyStack<StackEntry>::MyStack() {
	size = 0;
}
template <class StackEntry>
bool MyStack<StackEntry>::empty() const {
    return size == 0;
}
template <class StackEntry>
ErrorCode MyStack<StackEntry>::pop() {
	if (size == 0) {
		return underflow;
	}
	size--;
	return success;
}
template <class StackEntry>
ErrorCode MyStack<StackEntry>::top(StackEntry &item) const {
    if (size == 0) {
    	return underflow;
    }
    item = entry[size-1];
    return success;
}
template <class StackEntry>
ErrorCode MyStack<StackEntry>::push(const StackEntry &item) {
	if (size >= 100) {
		return overflow;
	}
	entry[size] = item;
	size++;
	return success;
}

