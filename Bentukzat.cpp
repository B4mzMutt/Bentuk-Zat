#include <conio.h>
#include <iostream>
using namespace std;

int main ()
{
                int suhu ;
                cout<<"PROGRAM MENENTUKAN WUJUD AIR"<<endl;
                cout<<"   BERDASARKAN TEMPERATUR"<<endl;
                cout<<"============================="<<endl;
                cout<<"\nMasukan Temperatur Suhu \nDalam Celcius : ";
                cin>>suhu;
                if (suhu < 0) {
                cout<<"Wujud Air Berupa Es";
                }
                else if ((suhu >= 0)&&(suhu <= 100)) {
                cout<<"Wujud Air Berupa Cair";
                }
                else if (suhu > 100) {
                cout<<"Wujud Air Berupa Uap / Gas";
                }
                else cout<<"Bukan Wujud Air";
                getch ();
}
