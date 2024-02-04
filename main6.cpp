#include <iostream>
#include <sstream>
#include <map>

int main() {
    std::string input;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, input);

    std::istringstream iss(input);
    std::map<std::string, int> wordCount;

    std::string word;
    while (iss >> word) {
        // Convert the word to lowercase for case-insensitive counting
        for (char& c : word) {
            c = std::tolower(c);
        }
        wordCount[word]++;
    }

    std::cout << "Word count:\n";
    for (const auto& pair : wordCount) {
        std::cout << pair.first << ": " << pair.second << " occurrences\n";
    }

    return 0;
}
