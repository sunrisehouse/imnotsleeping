#include <iostream>
#include <Windows.h>
#include "toggler.h"

using namespace std;
const int MOVING_DISTANCE = 100;
const int MOVING_DELAY_MILLISEC = 10000;

int main(int argc, char* argv[])
{
    Toggler* toggler = new Toggler();
    POINT curCursorPos;
    POINT prevCursorPos;
    int count = 0;
    while(true)
    {
        GetCursorPos(&curCursorPos);
        if (prevCursorPos.x == curCursorPos.x && prevCursorPos.y == curCursorPos.y)
        {
            curCursorPos.x += MOVING_DISTANCE * (toggler->get() ? 1 : -1);
            SetCursorPos(curCursorPos.x, curCursorPos.y);
            toggler->toggle();
            cout << "i'm not sleeping. (" << ++count << ")" << endl;
        }
        prevCursorPos = curCursorPos;
        Sleep(MOVING_DELAY_MILLISEC);
    }
    return 0;
}
