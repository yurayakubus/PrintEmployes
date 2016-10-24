#ifndef OFFICE_H
#define OFFICE_H

//#include"Printable.h"
#include <string>
#include <iostream>

class Office// : public Printable
{
    private:
        std::string mName;
        std::string mAddres;
        std::string mArea;
        std::string mNumberOfEmployees;
    public:
        void    setmName(std::string name);
        void    setmAddres(std::string addres);
        void    setmArea(std::string area);
        void    setmNumberOfEmployees(std::string number);

        std::string name();
        std::string addres();
        std::string area();
        std::string number();

        //virtual void print();

};

#endif // OFFICE_H

