#include <iostream>

namespace MyNamespace {
    void myFunction() {
        std::cout << "Hello from MyNamespace!" << std::endl;
    }
}

using namespace MyNamespace;

int main() {
    myFunction(); // Викликає MyNamespace::myFunction
    return 0;
}
