#include "Start.h"
#include <iostream>
#include "ArgumentsHandler/ArgumentsHandler.h"



void Start::Run(int argc, char *argv[]) {
    ArgumentsHandler myHandler;
    myHandler.Handle(argc, argv);
}
