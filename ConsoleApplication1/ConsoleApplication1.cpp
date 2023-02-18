// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct SmartPhone {
    string name=" ";
    int storageSpace=0;
    string color=" ";
    float price=0;
       
};
struct Person {
    string name=" ";
    int age=0;
    SmartPhone smartphone;
};

void printSmartphoneInfo(SmartPhone smartphone){

    cout << "name = " << smartphone.name << endl;
    cout << "storagespace = " << smartphone.storageSpace << endl;
    cout << "color = " << smartphone.color << endl;
    cout << "price = " << smartphone.price << endl;



}
void PrintPersonInfo(Person p)
{
    cout << "name= " << p.name << endl;
    cout << "age= " << p.age << endl;
    printSmartphoneInfo(p.smartphone);
}
int main()
{

    SmartPhone smartphone;
    smartphone.name = "Iphone";
    smartphone.storageSpace = 32;
    smartphone.color = "black";
    smartphone.price = 999.99;

    SmartPhone smartphone2;
    smartphone2.name = "Samsung";
    smartphone2.storageSpace = 64;
    smartphone2.color = "Gray";
    smartphone2.price = 888.88;
    
    Person p;
    p.name = "Rares";
    p.age = 22;
    p.smartphone = smartphone2;
    

    /*cout << "name = " << smartphone.name << endl;
    cout << "storagespace = " << smartphone.storageSpace << endl;
    cout << "color = " << smartphone.color << endl;
    cout << "price = " << smartphone.price << endl;*/
    
    printSmartphoneInfo(smartphone); cout<< endl;
    printSmartphoneInfo(smartphone2); cout << endl;
    PrintPersonInfo(p);

}

