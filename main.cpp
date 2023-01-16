#include <iostream>
#include <string>

//to compile and run:

//go to build folder
//cmake ..
//make -j4
//./main {name}

std::string getName(const std::string &arg){
    return arg;
}

int main(int argc, char const *argv[])
{
    if(argc > 1){
        std::cout << "Hello " << getName(argv[1]) << '\n';
    }
    return 0;
}
