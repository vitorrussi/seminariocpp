#include <iostream>
using namespace std;
 
class Animal
{
public:
    virtual void comer() = 0;
    // Superclasses devem ter o destrutor virtual
    virtual ~Animal()
    {
    }
    void viver() {
        cout << "Eu vivo como um animal" << endl;
    }
};
 
class Lobo: public Animal
{
public:
    void comer()
    {
        cout << "Eu me alimento como um lobo!" << endl;
    }
};
 
class Peixe: public Animal
{
public:
     void comer()
     {
         cout << "Eu me alimento como um peixe!" << endl;
     }
     void viver() {
        cout << "Eu vivo como um peixão" << endl;
    }
};
 
int main(void)
{
    Animal *a = new Lobo();
    Animal *b = new Peixe();



 
    a->comer();
    b->comer();

    a->viver();
    b->viver();

    c->viver();
   // c->comer();
 
    return 0;
}