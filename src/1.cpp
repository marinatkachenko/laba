#include <iostream>
using namespace std;
class Frukti
{
//setlocale(LC_ALL, "Russian");
public:
string sort; // iмя
float price;
char vyrobnyk; // ціна
void Input(); // метод класу (введення)
void Output(); // (виведення)
};
void Frukti::Input() // метод класу Konditer для введення
{
cout<<"Enter sort: "<<endl;
cin>>sort;
cout<<"Enter vyrobnyk: "<<endl;
cin>>vyrobnyk;
cout<<"Enter price: "<<endl;
cin>>price;
}
void Frukti::Output() // метод класу Konditer для виведення
{
cout <<"sort"<<endl;
cout <<"vyrobnyk"<<endl;
cout <<"price"<<endl;
}

int main()
{
Frukti Apple; // декларація об'єкта tort класу Konditer
Frukti Orange; // декларація об'єкта pechivo класу Konditer
Apple.Input(); // використання методу класу Konditer до об'єкта
Orange.Input();
Apple.Output();
Orange.Output();
return 0;
}
