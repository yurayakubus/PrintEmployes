#include <iostream>
#include <vector>

#include "Printable.h"

#include "employee.h"
#include "office.h"

void printList(const std::vector<Printable *> listToPrint)
{
    for (auto item: listToPrint)
    {
        item->print();
        std::cout << std::endl;
    }
}

int main()
{
    std::vector<Printable *> employeesToPrint;
    Employee a;

    a.setmName("Yura");
    a.setmAddres("Golovackogo");
    a.setmNumber("0673407181");
    a.setmSalary("999999$");
    a.setmYear("2013");

    std::cout << "Name: " << a.name() << std::endl;
    std::cout << "Addres: " << a.addres() << std::endl;
    std::cout << "Phone number: " << a.number() << std::endl;
    std::cout << "Salary: " << a.salary() << std::endl;
    std::cout << "Working since: " << a.year() << std::endl;

    printList(employeesToPrint);

    std::cout << std::endl;

    std::vector<Printable *> officesToPrint;


    Office b;

    b.setmAddres("Gorodocka");
    b.setmArea("2000 square meters");
    b.setmName("Oleg");
    b.setmNumberOfEmployees("6000");

    std::cout << "Name: " << b.name() << std::endl;
    std::cout << "Area: " << b.area() << std::endl;
    std::cout << "Addres" << b.addres() << std::endl;
    std::cout << "Number of employees: " << b.number() << std::endl;

    printList(officesToPrint);

    return 0;
}
