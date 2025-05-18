//week 8 in class project
// Created by danan on 5/16/2025.
//
#include <iostream>
#include "assets.h"
using namespace std;

int main() {
    Assets SPUEmployee01;
    Assets SPUStudent01("CSC2430"); // the constructor with name

    SPUStudent01.AddTag("Tag-7891");
    SPUStudent01.AddTag("Tag-1232");
    SPUStudent01.AddTag("Tag-3453");

    Assets SPUStudent02 = SPUStudent01;
    SPUEmployee01 = SPUStudent01;

    cout << SPUStudent01.ToString() << endl;
    cout << SPUStudent02.ToString() << endl;
    cout << SPUEmployee01.ToString() << endl;

    return 0;
}
