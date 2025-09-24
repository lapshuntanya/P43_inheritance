#include "PaidLesson.h"

PaidLesson::PaidLesson()
{
    //Lesson() -> "undefined", "undefined", "undefined"
    price = 0;
    cout << "PaidLesson() " << theme << endl;
}

PaidLesson::PaidLesson(string theme, string info, string home, float price)
    :Lesson(theme, info, home)
{
    //Lesson() -> "undefined", "undefined", "undefined"   
    this->price = price;
    cout << "PaidLesson(t, i, h) " << theme << endl;
}

PaidLesson::~PaidLesson()
{
    cout << "~PaidLesson() " << theme << endl;
}

void PaidLesson::setPrice(float price){ this->price = price; }
float PaidLesson::getPrice() const{     return price;}

void PaidLesson::showInfo() const{
    Lesson::showInfo(); //theme, info, home
    cout << "Price: " << price << "UAH\n\n";
}
