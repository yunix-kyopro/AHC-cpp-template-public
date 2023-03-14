#include "modules/headers.cpp"
#include "modules/piyo.cpp"
#include "modules/hoge.cpp"

int main()
{
    Hoge hoge = Hoge();
    hoge.say_hoge();
    hoge.say_piyo();

    return 0;
}