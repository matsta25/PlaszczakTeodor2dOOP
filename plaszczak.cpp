#include <iostream>

#include "plaszczak.h"

using namespace std;

Plaszczak::Plaszczak(char w, string i, int x, int y){
    posX = x;
    posY = y;
    wyglad = w;
    imie = i;
}

Plaszczak::~Plaszczak(){
    cout << imie << " is dead" << endl;
}

char Plaszczak::getWyglad(){
    return wyglad;
}

int Plaszczak::getPosX() const{
    return posX;
}

int Plaszczak::getPosY() const{
    return posY;
}

void Plaszczak::setPosX(int x){
    posX = x;
}

void Plaszczak::setPosY(int y){
    posY = y;
}
