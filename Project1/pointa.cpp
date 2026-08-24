#include <iostream>
using namespace std;

int main(void)
{
    //•Ï”éŒ¾
    int a = 0;
    //A‚ÌêŠ‚ğ‚o‚É‹³‚¦‚é
    int* p = &a;

    cout << "a‚Ì‰Šú’l: " << a << endl;
    //‚‚ª‚³‚·êŠ‚ğ•Ï‚¦‚é‚P‚O‚É‚·‚é
    *p = 10;

    cout << "a‚Ì•ÏXŒã‚Ì’l: " << a << endl;

    return 0;
}