#include <iostream>
using namespace std;

int main() {
	
	cout << "Week 2 lab\n";
	
	int bob;
	int john;
	
	bob = 42;
	john = 32;
	
	int johnbob = bob + john;
	short rachel = 10;
	short luke = 7;
	float pie = 3.14;
	char middle = 'M';
	
	cout << "Bob is " << bob << " years old\n";
	cout << "Bob and John together are ";
	cout << bob + john;
	cout << " years old\n";
	cout << " new variable johnbob is " << johnbob;
	cout << middle << "is the middle inital for ";
	cout << pie << " users that are " << luke;
	cout << " years old";
	return 0;
}