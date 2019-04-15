#include <iostream>
using namespace std;
void Tulis10Kali() {
  for (int C=0; C<10; C++) {
    cout<<"Aku sangat menyukai C++"<<endl;
  }
}
void kamu () {
 for (int C=0; C<=4; C++) {
    cout<<"Saya Suka kamu!"<<endl;
  }
}
int main() {
  Tulis10Kali();
  cout<<endl;
  kamu ();
  return 0;
}
