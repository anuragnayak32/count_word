#include <iostream>
#include <fstream>
#include <string>

int main() {
    using namespace std; // Add the using namespace std directive within the scope of the main function
    string filename = "file1.txt"; // Replace with your file path
    ifstream file(filename);

    if (!file) { // Check if the file opened successfully
        cerr << "Error opening file: " << filename << endl;
        return 1; // Return an error code
    }

    string word;
    int wordCount = 0;

    while (file >> word) {
        // You can add additional logic to clean and count words if needed
        wordCount++;
    }

    // The file will be automatically closed when 'file' goes out of scope

    cout << "Number of words in the file: " << wordCount << endl;

    return 0;
}
