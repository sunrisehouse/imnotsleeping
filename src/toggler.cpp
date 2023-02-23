#include "toggler.h"

Toggler::Toggler()
{
    this->isOn = true;
}

Toggler::Toggler(bool initial)
{
    this->isOn = initial;
}

bool Toggler::get()
{
    return this->isOn;
}

void Toggler::toggle()
{
    this->isOn = !this->isOn;
}
