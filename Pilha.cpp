#include <iostream>
using namespace std;
class Pilha {
	public:
		Pilha(int n) {
			max = n;
			top = -1;
			mem = new int[n];
		}
		~Pilha(){
			delete[] mem;
			cout << "Pilha apagada\n";
		}
		bool vazia() {
			return top == -1;
		}
		bool cheia(void) {
			top == max - 1;
		}
		void insere(int e) {
			if(!cheia()) mem[++top] = e;
			else cout << "Pilha Cheia!" << endl;
		}

		int remove() {
			if(!vazia()) return mem[top--];
			else {
				cout << "Pilha Vazia!" << endl;
				return 0;
			}
		}
	private: 
      	int  max; 
      	int  top; 
     	int *mem; 
};

int main() {
	Pilha p(32);
	unsigned long long int n;

	cout << "Digite um numero positivo: ";
	cin >> n;

	do {
		p.insere(n%2);
		n /= 2;
	} while (n != 0);


	cout << "Binário: ";

	while (!p.vazia()) cout << p.remove();

	cout << endl;

	return 1;
}
