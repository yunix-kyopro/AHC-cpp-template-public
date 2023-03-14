#ifndef PIYO_HPP
#define PIYO_HPP
#include "modules/headers.cpp"

/*start*/

class Piyo
{
public:
    Piyo(){};
    void say_piyo();
};

void Piyo::say_piyo()
{
    cout << "piyo" << endl;
}
#endif