#include "PaidLesson.h"

PaidLesson::PaidLesson()
{
    //Lesson() -> "undefined", "undefined", "undefined"
    price = 0;
    cout << "PaidLesson() " << this->theme << endl;
}

PaidLesson::PaidLesson(string theme, string info, string home, float price)
{
}

PaidLesson::~PaidLesson()
{
}

void PaidLesson::setPrice(float price)
{
}

float PaidLesson::getPrice() const
{
    return 0.0f;
}

void PaidLesson::showInfo() const
{
}
