#include "clSliFile.h"
#include <iostream>
#include <string>

int main() {
    clSliFile sliFile;
    std::string hardcodedPath = "C:\\Users\\kaho2\\EOS-Formats\\examples\\Box.sli";
    std::string txtFilename = hardcodedPath + ".txt";

    if (sliFile.readFromFile(hardcodedPath.c_str())) {
        std::cout << "File read successfully." << std::endl;
        sliFile.writeToTxt(txtFilename);
        std::cout << "Data has been written to " << txtFilename << std::endl;
    } else {
        std::cerr << "Failed to read SLI file." << std::endl;
        return 1;
    }

    return 0;
}