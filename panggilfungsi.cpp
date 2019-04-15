#include <iostream>
using namespace std;
void Tulis10kali() {
  for (int C=0; C<10; C++) {
    cout<<"aku sangat menyukai C++"<<endl;
  }
}
void kamu()
{
  for (int C=0; C<5; C++)
    cout<<"saya suka kamu!"<<endl;
}
int main() {
  Tulis10kali();
  kamu();
  return 0;
}
