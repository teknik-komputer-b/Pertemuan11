#include <iostream>
using namespace std;
void Tulis10Kali() {
  for (int C=0; C<10; C++) {
    cout<<"Aku sangat menyukai C++"<<endl;
  }
}

void Kamu() {
  for (int D=0; D<5; D++) {
    cout<<"Saya suka kamu"<<endl;
  }
}

int main() {
  Tulis10Kali();
  Kamu();
  return 0;
}
