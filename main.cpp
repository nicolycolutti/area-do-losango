#include <iostream>

using namespace std;

int main()
{
   float diagmenor;
   float diagmaior;
   float arealosang;
   
   cout<<"Insira o valor da diagonal menor: ";
   cin>>diagmenor;
   cout<<"Insira o valor da diagonal maior: ";
   cin>>diagmaior;
   
   arealosang=(diagmenor*diagmaior)/2;
   
   cout<<"O valor da área do losango é: "<<arealosang;

   return 0;
}
