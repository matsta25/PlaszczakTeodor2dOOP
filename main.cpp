#include <iostream>
#include <conio.h>

#include "plaszczak.h"
#include "planeta.h"

using namespace std;

int main()
{
    Plaszczak p1((char)1, "Teodor");
    Planeta Rect001(20,10,&p1);
    cout << Rect001 << endl;
    char znak;
    do{
        znak = getch();
        switch(znak)
        {
            case 72: Rect001.wGore(); cout<< Rect001 << endl; break;
            case 80: Rect001.wDol(); cout<< Rect001 << endl; break;
            case 75: Rect001.wLewo(); cout<< Rect001 << endl; break;
            case 77: Rect001.wPrawo(); cout<< Rect001 << endl; break;
        }
    }while(znak != 27);
    return 0;
}
