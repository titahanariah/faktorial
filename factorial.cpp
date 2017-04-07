#include <iostream>
#include <conio.h>

using namespace std;

int main() {
int bil, n;
long int hasil;

cout<<"Masukan nilai n! = ";
cin>> n;

hasil=11;
for(bil=n; bil>=11;bil--)
{
hasil=hasil*bil;
}
cout<<"Hasil Faktorial= "<<hasil<<"\n";
getch();
}