#include <iostream>
#include <fstream>

int main(int _len, char* _args[]){


    std::string tmp;
    if (_len > 1){
        // compile file
        std::string _file = _args[1];
        std::ifstream fin(_file);

        while(fin>>tmp){
            std::cout << tmp << " ";
            }
        //for i in file:
            //cmd(i);
        fin.close();
    }

    std::string ext = "exit";
    while (true){
        std::cout << ">";
        std::cin>> tmp;
        //std::cout <<_args[0] << " "<<ext <<std::endl;
        if (tmp==ext)
            break;
    }


    return 0;
}

