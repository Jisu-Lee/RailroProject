/*
* ��� Ŭ������ �� ������ �̸��� ��� �ִ�.
* �ٸ� ������ �� �� �� �ִ�.
*/
#include <iostream>
using namespace std;

class Node{
public:
	Node(){ name = "NULL"; }
	Node(string name);
	~Node();

	string getName(){ return name; }
private:
	string name;
};