#include "Unix2Win.h"
#include <iostream>
int main() {
    std::cout << "hello" << std::endl;
    std::cout << "this should work on both unix-like and windows systems" << std::endl;
    usleep(1000000); // Sleep for 1 second
    std::cout << "that wait should've worked on windows and Unix-like systems" << std::endl;
    std::cout << "if you see this, it worked!" << std::endl;
    sleep(1);
    std::cout << std::flush;
    return 0;
}
