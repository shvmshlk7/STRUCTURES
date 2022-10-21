#include <iostream>
#include <string>
using namespace std;

int main()
{   struct 
    {
        string brand;
        string model;
        int year;
    } car1 , car2;

car1.brand = "tata";
car1.model = "nexon";
car1.year = 2015;

car2.brand = "BMW";
car2.model = "X7";
car2.year = 1999;

cout<<car1.brand<<" "<<car1.model<<" "<<car1.year<<"\n";
cout<<car2.brand<<" "<<car2.model<<" "<<car2.year<<"\n";


    return 0;
}
