#include <iostream>
#include "Device.h"
using namespace std;


int main()
{
    Device device;

    while (1)
    {
        char ch = 0;
        cin >> ch;
        switch (ch) {
            case 'p':   device.change_pwr();      break;
            case 'm':   device.change_m();        break;
            case 'd':   device.change_d();        break;
            case 'g':   device.change_g();        break;
            default:                     break;
        }

        device.status();

    }

    return 0;
}
