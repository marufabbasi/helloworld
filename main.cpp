#include <iostream>
#include <string>

void showVersion() {
    std::cout << "Hello World! ASCII Art Program - Version "
              << PROJECT_VERSION_MAJOR << "."
              << PROJECT_VERSION_MINOR << "."
              << PROJECT_VERSION_PATCH << std::endl;
}

void showMosque() {
    std::cout << R"(
#   #        #  #          #   #   #          #     #  #
#   #        #  #          #  # #  #          #     #  #
#   #   ##   #  #   ##      # # # #   ##   ## #   ###  #
#####  #  #  #  #  #  #     # # # #  #  #  #  #  #  #  #
#   #  ####  #  #  #  #     # # # #  #  #  #  #  #  #  #
#   #  #     #  #  #  #     # # # #  #  #  #  #  #  #   
#   #   ###  #  #   ##       #   #    ##   #  #   ###  #
)" << std::endl;
}

int main(int argc, char* argv[]) {
    if (argc > 1 && std::string(argv[1]) == "--version") {
        showVersion();
    } else {
        showMosque();
    }

    return 0;
}