/*
* 노드 클래스는 각 거점의 이름을 담고 있다.
* 다른 정보가 더 들어갈 수 있다.
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