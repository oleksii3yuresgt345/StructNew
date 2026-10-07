#include <iostream>
using namespace std;

struct Washing
{
    char name[20];
    char color[20];
    int width;
    int height;
    int power;
    int strengh;
    int temperature;
};

void showStruct(Washing washing)
{
    cout << "Brand : " << washing.name << endl;
    cout << "Color : " << washing.color << endl;
    cout << "Width : " << washing.width << endl;
    cout << "Height : " << washing.height << endl;
    cout << "Power : " << washing.power << endl;
    cout << "Strengh : " << washing.strengh << endl;
    cout << "Temperature : " << washing.temperature << endl;
}

Washing inputStruct(Washing washing)
{
    cout << "Enter brand : "; cin >> washing.name;
    cout << "Enter color : "; cin >> washing.color;
    cout << "Enter width : "; cin >> washing.width;
    cout << "Enter height : "; cin >> washing.height;
    cout << "Enter power : "; cin >> washing.power;
    cout << "Enter strengh : "; cin >> washing.strengh;
    cout << "Enter temperature : "; cin >> washing.temperature;
    return washing;
}

struct Iron
{
    char name[20];
    char color[20];
    int minTemperature;
    int maxTemperature;
    bool ironWork;
    int power;
};

void showStructIron(Iron ironing)
{
    cout << "Brand : " << ironing.name << endl;
    cout << "Color : " << ironing.color << endl;
    cout << "Min temperature : " << ironing.minTemperature << endl;
    cout << "Max temperature : " << ironing.maxTemperature << endl;
    cout << "Iron work : " << ironing.ironWork << endl;
    cout << "Power : " << ironing.power << endl;
}

Iron inputStructIron(Iron ironing)
{
    cout << "Enter brand : "; cin >> ironing.name;
    cout << "Enter color : "; cin >> ironing.color;
    cout << "Enter min temperature : "; cin >> ironing.minTemperature;
    cout << "Enter max temperature : "; cin >> ironing.maxTemperature;
    cout << "Enter iron work : "; cin >> ironing.ironWork;
    cout << "Enter power : "; cin >> ironing.power;
    return ironing;
}

struct Boiler
{
    char name[20];
    char color[20];
    int power;
    int size;
    int temperature;

};

void showStructBoiler(Boiler boilering)
{
    cout << "Brand : " << boilering.name << endl;
    cout << "Color : " << boilering.color << endl;
    cout << "Power : " << boilering.power << endl;
    cout << "Size : " << boilering.size << endl;
    cout << "Temperature : " << boilering.temperature << endl; 
}

Boiler inputStructBoiler(Boiler boilering)
{
    cout << "Enter brand : "; cin >> boilering.name;
    cout << "Enter color : "; cin >> boilering.color;
    cout << "Enter Power : "; cin >> boilering.power;
    cout << "Enter Size : "; cin >> boilering.size;
    cout << "Enter Temperature : "; cin >> boilering.temperature;
    return boilering;
}

int main()
{
    Washing machine = { "Company", "White", 35,135,20,10,55 };
    showStruct(machine);

    Washing newMachine = {};
    newMachine = inputStruct(newMachine);
    showStruct(newMachine);

    cout << "==========================================" << endl;

    Iron iron{ "Corporation","Gray",10,50,true,20 };
    showStructIron(iron);

    Iron newIron = {};
    newIron = inputStructIron(newIron);
    showStructIron(iron);

    cout << "==========================================" << endl;

    Boiler boilered = { "CoCoCo","White",50,100,90 };
    showStructBoiler(boilered);

    Boiler newBoilered = {};
    newBoilered = inputStructBoiler(newBoilered);
    showStructBoiler(newBoilered);


}