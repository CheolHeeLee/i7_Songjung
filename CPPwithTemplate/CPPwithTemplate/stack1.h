#pragma once
#include <vector>
#include<cassert>

template<typename T>
class Stack {
private:
	std::vector<T> elems;

public:
	void push(T const& elem);
	T const& pop();
	T const& top() const;
	bool empty() const {
		return elems.empty();
	}
};

template<typename T>
void Stack<T>::push(T const& elem)
{
	elems.push_back(elem);
}

template<typename T>
T const& Stack<T>::pop() 
{
	assert(!elems.empty());
	T elem = elems.back();
	elems.pop_back();
	return elem;
}

template<typename T>
T const& Stack<T>::top() const
{
	assert(!elems.empty());
	return elems.back();
}