#include <iostream>

using namespace std;

class Klasa
{
    public:
   int liczba[9], pola;
   int suma=0;
    int suma_rz1=0;
     int suma_rz2=0;
      int suma_rz3=0;
   void rysuj_macierz()

   {
      cout <<"MACIERZE\n";
    for (int m=0;m<=8;m++)
    {
        cout << "Podaj "<<m+1<<". liczbe do macierzy od 0 do 9: ";
        cin >> liczba[m];
        suma=suma+liczba[m];
    }
     cout << endl<< endl<< endl<<"OTO WYPELNIONA PRZEZ CIEBIE MACIERZ\n\n";

    for (int j=0;j<=2;j++)
    {
        cout <<" | "<< liczba[j];
        suma_rz1=suma_rz1+liczba[j];
    }
    cout << " |"<<endl;
    cout << endl;
    for (int j=3;j<=5;j++)
    {
        cout <<" | "<< liczba[j];
        suma_rz2=suma_rz2+liczba[j];
    }
  cout << " |"<<endl;
  cout<< endl;
    for (int j=6;j<=8;j++)
    {
        cout <<" | "<< liczba[j];
        suma_rz3=suma_rz3+liczba[j];
    }
    cout << " |"<<endl;
       cout << endl;

   }
   void obliczenia()
   {
        cout <<"Suma wszystkich liczb w macierzy: " << suma<< endl;
       cout <<"Suma w pierwszym rzedzie wynosi: " << suma_rz1<< endl;
       cout <<"Suma w drugim rzedzie wynosi: " << suma_rz2<< endl;
       cout <<"Suma w trzecim rzedzie wynosi: " << suma_rz3<< endl;
   }
};


int main()
{
   Klasa k1;
   k1.rysuj_macierz();
   k1.obliczenia();
   return 0;
}






