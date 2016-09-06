#include <iostream>
#include <Windows.h>
using namespace std;

class queue {
public:
	int q[100];
	int sloc, rloc;

	void init();
	void qput(int i);
	int qget();

};

void queue::init()
{
	rloc = sloc = 0;
}

void queue::qput(int i)
{
	if (sloc == 100){
		cout << "очередь заполнена\n";
		return;
	}
	sloc++;
	q[sloc] = i ;

}

int queue::qget()
{
	if (rloc == sloc){
		cout << "Очередь пуста\n";
		return 0;
	}
	rloc++;
	return q[rloc];
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	queue a, b;

	a.init();
	b.init();

	a.qput(10);
	b.qput(19);

	a.qput(20);
	b.qput(1);


	cout << "Содержимое очереди a:\n";
	cout << a.qget() << " ";
	cout << a.qget() << "\n";
	cout << b.qget() << " ";
	cout << b.qget() << "\n";





	return 0;

}