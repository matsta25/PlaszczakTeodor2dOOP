#include <iostream>

#include "planeta.h"
#include "windows.h"

using namespace std;

Planeta::Planeta(int s, int w, Plaszczak* p){
    szer = s;
    wys = w;
    postac = p;
}

Planeta::~Planeta(){
    cout<< "Koniec swiata" << endl;
}

ostream& operator<<(ostream& os, const Planeta& P){
    system("cls");
    for(int j = 0; j<P.wys + 2 ; j++){
        for(int i=0; i <P.szer + 2; i++){
            if( i==0 || j==0 || i==P.szer+1 || j==P.wys+1){
                os<<(char)219;
            }else{
                if(i==P.postac -> getPosX() && j==P.postac -> getPosY()){
                    os<<P.postac->getWyglad();
                }else
                os << ' ';
            }
        }
        os << endl;
    }
    return os;
}

void Planeta::wLewo(){
    postac -> setPosX(postac -> getPosX()-1);
    if(postac -> getPosX() == 0)
        postac -> setPosX(szer);
}

void Planeta::wPrawo(){
    postac -> setPosX(postac -> getPosX()+1);
    if(postac -> getPosX() == szer+1 )
        postac -> setPosX(1);
}

void Planeta::wDol(){
    postac -> setPosY(postac -> getPosY()+1);
    if(postac -> getPosY() == wys+1 )
        postac -> setPosY(1);
}

void Planeta::wGore(){
    postac -> setPosY(postac -> getPosY()-1);
    if(postac -> getPosY() == 0)
        postac -> setPosY(wys);
}
