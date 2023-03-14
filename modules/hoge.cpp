#ifndef HOGE_HPP
#define HOGE_HPP

#include "modules/headers.cpp"
#include "modules/piyo.cpp"

/*start*/

class Hoge
{
public:
    Hoge(){};
    void say_hoge();
    void say_piyo();
};

void Hoge::say_hoge()
{
    cout << "hoge" << endl;
}

void Hoge::say_piyo()
{
    Piyo piyo = Piyo();
    piyo.say_piyo();
}
#endif