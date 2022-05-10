#include "start.hpp"

class TCharArray{
    private:
			
    public:
        int ind{};
        char 
        char at(char* arr, int index){
            if (arr[index]){
                return arr[index];
            }else{
                return 0;
            }
        }
        TCharArray operator[](char** arr, int index){
            return *arr[index];
        }
};

class String: TCharArray{
    private:

	public:
		std::string operator+ (std::string op1, std::string op2){
            return (op1 + op2);
        };
		//TCharArray operator==(){}
		//TCharArray operator>(){}
		//TCharArray operator<(){}
		//TCharArray operator!=(){}
};


/*bool sysHelp(bool flag){
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
*/
