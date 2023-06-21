#include <iostream>

using namespace std;

template<typename Swap>
Swap swap(Swap x, Swap y) {
    cout << y <<"\n";
    return x;
}
template<typename Info>
Info info(Info x) {
    cout << typeid(x).name() << endl;
    return x;
}

int main()
{
    cout << swap("1", "two") << endl;
    cout << swap("first", "second") << endl;
    cout << info("1");
};