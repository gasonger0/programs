#include "start.hpp"

/*class Calc{
    private:
        std::string name{};   std::cout<<"Error! The second argument is invalid or missing. Please choose one of the following options:\n";
                std::cout<<"Help: ./realty -h\n";
            cout<<"Create: ./realty -c\n";
            cout<<"Read: ./realty -r\n";  
        std::string retailer{};
        uint32_t cost{};
        std::string license{};
        uint32_t ammount{};
    public:
        void enterData(){
            std::cout << "\nВведите название продукта: ";
            std::getline(std::cin, name);
            std::cin.clear();

            std::cout << "Введите производителя: ";
            std::getline(std::cin, retailer);
            std::cin.clear();

            std::cout << "Введите стоимость: ";
            (std::cin >> cost).get();
            std::cin.clear();

            std::cout << "Введите номер лицензии: ";
            std::getline(std::cin, license);
            std::cin.clear();

            std::cout << "Введите количество: ";
            (std::cin >> ammount).get();
        }

        void displayData(int iter){

        }

};

bool sysHelp(bool flag){
    flag = true;
        std::cout << "Эта программа предназначена для работы с таблицей учёта программных продуктов\n"
                  << "Поддерживаемые команды\n:"
                  << "--help - справка\n"
                  << "-c [N] [file_name] - создание таблицы с N записей в файле [file_name]\n"
                  << "-r [N] [file_name] - чтение первыйх N записей в файле [file_name]\n";
    return flag;
}

int sysCorrect(int i, char * argv[], Calc::table A)
{
    std::ofstream myfile(argv[i+2], std::ios_base::app);
    myfile.open(argv[i+2]);
    if (myfile.is_open())
    {
        //int j{0};
        //while (j < (std::atoi(argv[i+1])))
        //{
            std::cout << "\nВведите название продукта: ";
            std::getline(std::cin, A.name);
            std::cin.clear();

            std::cout << "Введите производителя: ";
            std::getline(std::cin, A.retailer);
            std::cin.clear();

            std::cout << "Введите стоимость: ";
            (std::cin >> A.cost).get();
            std::cin.clear();

            std::cout << "Введите номер лицензии: ";
            std::getline(std::cin, A.license);
            std::cin.clear();

            std::cout << "Введите количество: ";
            (std::cin >> A.ammount).get();
            myfile.clear();
            myfile << '|' << std::setw(16) << A.name
                   << '|' << std::setw(16) << A.retailer
                   << '|' << std::setw(16) << A.cost
                   << '|' << std::setw(16) << A.license
                   << '|' << std::setw(16) << A.ammount
                   << '|' << std::endl;

            std::flush(myfile);
            std::cin.clear();

            std::cout << std::endl
                      << '|' << std::setw(16) << A.name
                      << '|' << std::setw(16) << A.retailer
                      << '|' << std::setw(16) << A.cost
                      << '|' << std::setw(16) << A.license
                      << '|' << std::setw(16) << A.ammount
                      << '|' << std::endl;

            std::cout << "Запись внесена.\n\n";
            std::cout.clear();
           // j++;
        //}
        myfile.close();
        i+=2;
    }else{
        std::cout << "Файл не может быть открыт." << std::endl;
    }
    return i;
}

int sysRead(int i, char * argv[], Calc::table A)
{
    std::ifstream myfile(argv[i+2]);
    if (myfile.is_open())
    {
        std::string s{};
        int j{0};
        //while (j < (std::atoi(argv[i+1]) + 2))
        //{
            std::getline(myfile, s);
            std::cout << s << std::endl;
           // j++;
        //}
        myfile.close();
    }else{
        std::cout << "Файл не может быть открыт." << std::endl;
    }
    i+=2;
    return i;
}

void sysTroubleshooting()
{
    std::cout << "Введена неправильная команда. Список команд:\n"
              << "--help\n"
              << "-c [N] [file_name]\n"
              << "-r [N] [file_name]\n"
              << std::endl;
}

int main(int argc, char * argv[])
{
    int i{1}, count{0};
    bool flag{false};
    int columns = static_cast<int>(*argv[2]);
    Calc *array = static_cast<Calc*>(operator new[] (columns*sizeof(Calc)));
    //int columns = std::atoi(argv[2])
    //Calc array[columns];
    for(int j = 0; j < columns; j++){
	new (array) Calc[j];
    }
    setlocale(LC_ALL, "Rus");
    while (i < argc)
    {
        if (strncmp(argv[i],"--help", 6) == 0)
        {
           flag = sysHelp(flag);
        }
        if (strncmp(argv[i], "-c", 2) == 0)
        {
            flag = true;
	    for(int l{0}; l < columns; l++){
                i = sysCorrect(i, argv, array[l].A);
	    }
	    i++;
        }
        if (strncmp(argv[i], "-r", 2) == 0)
        {
            flag = true;
	    for(int l{0}; l < columns; l++){
                i = sysRead(i, argv, array[l].A);
	    }
	    i++;
        }
        if (flag == false)
        {
            sysTroubleshooting();
        }
        i++;
    }
    return 0;
}

//////////////////////////////////////////////////////

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstdlib>
#include <string.h>
*/

class Calc{     
    private:
        std::string name{};
        std::string retailer{};
        uint32_t cost{};
        std::string license{};
        uint32_t ammount{};

    public:
        void enterData(){  
            std::cout << "Name: ";
            std::getline(std::cin, name);
            std::cin.clear();

            std::cout << "Retailer: ";
            std::getline(std::cin, name);
            std::cin.clear();

            std::cout << "Cost: ";
            (std::cin >> cost).get();
            std::cin.clear();

            std::cout << "License: ";
            std::getline(std::cin, license);
            std::cin.clear();

            std::cout << "Ammount: ";
            (std::cin >> ammount).get();
            std::cin.clear();

            std::cout << std::endl;
        }   
    
    //метод вывода
    void displayData(int counter){
        std::cout << std::endl
                      << '|' << std::setw(16) << name
                      << '|' << std::setw(16) << retailer
                      << '|' << std::setw(16) << cost
                      << '|' << std::setw(16) << license
                      << '|' << std::setw(16) << ammount
                      << '|' << std::endl;
    }
};

void header(){
    std::cout << "|            Name|    Manufacturer|            Cost|         License|         Ammount|\n"
              << "--------------------------------------------------------------------------------------\n";

}

int main(int argc, char* argv[]){

    std::cout << logo << std::endl;
    setlocale(LC_ALL, "Rus");    
    std::string str, nameOfFile{argv[3]}, help{"-h"}, create{"-c"}, read{"-r"};
    
    //Защита
    if (argc == 1){  
        std::cout<<"Ошибка! Второй аргумент отсутствует или введён неправильно, используёти следующие команды:\n";
        std::cout<<"Справка:         ./app -h [...]\n";
        std::cout<<"Создание записи: ./app -c [...]\n";
        std::cout<<"Считать запись:  ./app -r [...]\n";
    }
    else{
        //Создаём переменную для использования конструкции switch - case
        int count{0};  
        if ((argv[1] == help) && (argc == 2)){
            count = 1;
        }
        if ((argv[1] == create) && (argc == 4)){
            count = 2;
        }
        if ((argv[1] == read) && (argc == 4)){
            count = 3;
        }
        switch (count){
            case 1:
               {  
                std::cout << "Эта программа предназначена для работы с таблицей учёта программных продуктов\n"
                          << "Поддерживаемые команды:\n"
                          << "-h - справка\n"
                          << "-c [N] [file_name] - создание таблицы с N записей в файле [file_name]\n"
                          << "-r [N] [file_name] - чтение первых N записей в файле [file_name]\n";
                }
                break;

            case 2:
            {
                const int amount{std::stoi(argv[2])};
                std::vector <Calc> tbl(amount);
                FILE* writing;                           //открытие файла с возможностью записи в бинарном виде
                writing = std::fopen(argv[3], "ab");               //проверка на создание или открытие файла
                if (writing == NULL){ 
                    std::cout << "Ошибка! Невозможно открыть или создать файл\n\n";
                }else {
                    int quantity{1};  //переменная для перемещения курсора
                    std::fwrite(&amount, sizeof(int), 1, writing);  //запись числа экземпляров класса
                    std::fseek(writing, sizeof(int), SEEK_SET);  //передвижение курсора в начало
                    for (int q=0; q<amount; q++) {
                        tbl[q].enterData();
                        std::fwrite(&tbl[q], sizeof(Calc), 1, writing);
                        std::fseek(writing, quantity*sizeof(Calc), SEEK_CUR);
                        quantity++;
                    }
                } 
                std::fclose(writing);  //закрытие файла
            }
            break;

            case 3:              //Просмотр объектов
            {
                int amount{std::stoi(argv[2])};
                std::vector <Calc> tbl(amount);
                FILE* reading;
                reading = std::fopen(argv[3], "rb");  //открытие файла в режиме чтение
                if (reading==NULL){    //проверка открытия файла
                    std::cout << "Ошибка! Невозможно прочитать файл\n\n";
                }else{
                    int quantity{1};
                    header();
                    std::fseek(reading, sizeof(int), SEEK_SET);
                    for (int q=0; q<amount; q++){
                        std::fread(&tbl[q], sizeof(Calc), 1, reading);  //чтение экземпляра класса
                        std::fseek(reading, quantity*sizeof(Calc), SEEK_CUR);
                        tbl[q].displayData(q+1);  //вывод
                        quantity++; 
                    }
                }
                std::fclose(reading);  //закрываем файл
            }
            break; 

            default:
            {
                std::cout<<"Ошибка! Второй аргумент отсутствует или введён неправильно, используёти следующие команды:\n";
                std::cout<<"Справка:         ./app -h [...]\n";
                std::cout<<"Создание записи: ./app -c [...]\n";
                std::cout<<"Считать запись:  ./app -r [...]\n";  
            }
        }
    }
    return 0;
}
