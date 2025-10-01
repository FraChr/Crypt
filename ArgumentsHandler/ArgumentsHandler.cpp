#include "ArgumentsHandler.h"
#include <iostream>

void ArgumentsHandler::Handle(int argc, char *argv[]) {
    if (argc == 1) return;


    std::string arg = argv[1];

    if (arg == "-h" || arg == "-help") {
        std::cout << "HELPLINE!!!" << std::endl;
    }


    // for (int i = 1; i < argc; i++) {
    //     std::cout << argv[i] << std::endl;
    // }
}
