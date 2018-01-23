#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

template<typename T>
class Node
{
public:
	T value;
	Node* pNext = nullptr;
	Node* pPrevious = nullptr;
};

template<typename T>
class Stack
{
public:
	~Stack(void);
	void push(T value);
	Node<T>* nodePop(void);
	T pop(void);
	int size(void);
protected:
	int count = 0;
	Node<T>* pTop = nullptr;

};

template<typename T>
Stack<T>::~Stack(void)
{
	while (pTope != nullptr){ delete nodePop(); }
}

template<typename T>
void Stack<T>::push(T value)
{
	Node<T>* pTmp = new Node<T>;
	pTmp->value = value;
	pTmp->pNext = pTop;
	pTop = pTmp;
	count++;
}

int main()
{
	
	return 0;
}
