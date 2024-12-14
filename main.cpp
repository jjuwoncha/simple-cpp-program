#include <iostream>
#include <fstream>
#include <string>

int main() {
    // 파일 쓰기
    std::ofstream outFile("output.txt");
    if (outFile.is_open()) {
        outFile << "Hello, WSL and Visual Studio Code!\n";
        outFile << "This is a test file." << std::endl;
        outFile.close();
        std::cout << "Data written to file successfully!" << std::endl;
    } else {
        std::cerr << "Unable to open file for writing!" << std::endl;
        return 1;
    }

    // 파일 읽기
    std::ifstream inFile("output.txt");
    if (inFile.is_open()) {
        std::string line;
        while (getline(inFile, line)) {
            std::cout << line << std::endl;
        }
        inFile.close();
    } else {
        std::cerr << "Unable to open file for reading!" << std::endl;
        return 1;
    }

    return 0;
}
