#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int mnt,det;
    int jarak=0,jarakB=-45, kecB=5;
    double kecA=2, jarakA=0;
    int durasi=0,x=0 ;
    int y = 0;

    while(jarakA<=1000)
    {
        if(x != 0){
            kecA = kecA + 0.1;
        }

        x=x+1;
        jarakA=jarakA+kecA ;
        jarakB=jarakB+kecB ;
        cout<<jarakB<<" - " <<jarakA<<" Detik : "<< x<<endl;
        if(jarakA + jarakB >= 1000)
        {
            if(y == 0){
                y = 1;
                durasi = x ;
                jarak = jarakA;
            }
        }
    }

    mnt = durasi / 60 ;
    det = durasi % 60 ;
    cout<<"\nJarak dari Titik A ke Titik B 1100meter";
    cout<<"\nAmrozi berangkat dari A - B \t: pukul 08:00:00 ";
    cout<<"\nBeryl berangkat dari B - A \t: pukul 08:00:10 ";
    cout<<"\n\nWaktu Saat berpapasan \t\t\t:08:0"<<mnt<<":"<<det ;
    cout<<"\nJarak papasan dari Titik Amrozi \t:"<<jarak<<" meter"<<endl ;
    getch();

}
