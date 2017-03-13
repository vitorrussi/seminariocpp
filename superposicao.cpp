#include <iostream>

using namespace std;

 class animal
 {
   public:
      void comer() { cout << "Comendo..." << endl;}
      void mover() { cout << "Movendo..." << endl;}
      void dormir() { cout << "Dormindo..." << endl; }
 };

 class ave : public animal
 {
   public:
      void comer(){ cout << "Bicando..." << endl; }
      void mover(){ cout << "Voando..." << endl; }
 };

 class peixe : public animal
 {
   public:
      void comer(){ cout << "Mordendo..." << endl; }
      void mover(){ cout << "Nadando..." << endl; }
 };

int main()
{
  ave passarinho;
  peixe sardinha;

  passarinho.mover();
  sardinha.mover();
  passarinho.animal::mover();
  sardinha.animal::mover();

 return 0;
}
