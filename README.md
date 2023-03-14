# C++で分割して書いたソースコードを結合して AHC で提出することができるようにするテンプレート

手元の環境で開発する際には

```
g++ main.cpp -I .
```

とすると分割して記述したソースコードをコンパイルすることができます。

AtCoder に提出する際には

```
python3 combine.py
```

を実行すると、提出用に結合されたソースコード combined.cpp が生成され、それを提出することができます。
使用する際には combined.cpp を手元でビルドしたり、AtCoder のコードテストで実行できるかをチェックすると良いでしょう。

サンプルコードでは combined.cpp は以下のようになります:

```

#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include <chrono>
#include <algorithm>
#include <random>
#include <map>
#include <set>
#include <queue>
#include <random>
#include <chrono>
#include <cmath>
#include <climits>
#include <bitset>
#include <time.h>

using namespace std;




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


int main()
{
    Hoge hoge = Hoge();
    hoge.say_hoge();
    hoge.say_piyo();

    return 0;
}
```
