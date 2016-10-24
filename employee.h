#ifndef EMPLOYEE_H
#define EMPLOYEE_H

//#include"Printable.h"
#include <string>
#include <iostream>
class Employee //: public Printable
{
    private:
        std::string mName;
        std::string mNumber;
        std::string mAddres;
        std::string mSalary;
        std::string mYear;
    public:


        void    setmName(std::string name);
        void    setmNumber(std::string number);
        void    setmAddres(std::string addres);
        void    setmSalary(std::string salary);
        void    setmYear(std::string year);

        std::string    name();
        std::string    number();
        std::string    addres();
        std::string    salary();
        std::string    year();

        //virtual void print();
};

#endif // EMPLOYEE_H
