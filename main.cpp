#include <iostream>
using namespace std;
class Frukti
{
//setlocale(LC_ALL, "Russian");
public:
string sort; // i��
float price;
char vyrobnyk; // ����
void Input(); // ����� ����� (��������)
void Output(); // (���������)
};
void Frukti::Input() // ����� ����� Konditer ��� ��������
{
cout<<"Enter sort: "<<endl;
cin>>sort;
cout<<"Enter vyrobnyk: "<<endl;
cin>>vyrobnyk;
cout<<"Enter price: "<<endl;
cin>>price;
}
void Frukti::Output() // ����� ����� Konditer ��� ���������
{
cout <<"sort"<<endl;
cout <<"vyrobnyk"<<endl;
cout <<"price"<<endl;
}

int main()
{
Frukti Apple; // ���������� ��'���� tort ����� Konditer
Frukti Orange; // ���������� ��'���� pechivo ����� Konditer
Apple.Input(); // ������������ ������ ����� Konditer �� ��'����
Orange.Input();
Apple.Output();
Orange.Output();
return 0;
}
