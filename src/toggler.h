#ifndef __TOGGLER_H__ 
#define __TOGGLER_H__ 

class Toggler
{
    private:
        bool isOn;
    public:
        Toggler();
        Toggler(bool initial);
        void toggle();
        bool get();
};

#endif
