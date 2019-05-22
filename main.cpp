/* 
 * File:   main.cpp
 * Author: megankale
 *
 * Created on February 2, 2019, 11:20 PM
 */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>

using namespace std;


class Histogram{
private:
    int numRows, numCols, minVal, maxVal;
    int *histogram;
    
public:    
    Histogram(ifstream& inFile){
        int temp = 0;
        if (inFile){
            inFile >> numRows >> numCols >> minVal >> maxVal;
            histogram = new int[maxVal+1](); // dynamically allocate histogram array
            
            while (inFile >> temp) {
                histogram[temp] += 1; //increment count for value
            }
        } 
    }
    void computeHistogram(ofstream& outFile){
        outFile << numRows << " " << numCols << " " << minVal << " " << maxVal << "\n";
        for (int i = 0; i < maxVal+1; i++){
            outFile << i << "   " << histogram[i] << "\n";
        }
    
    }
};

int main(int argc, char* argv[]) {
    if(!argv[1]){
        cout<< "Provide both an input file and an output file please!";
    }
    else;
    ifstream input(argv[1]);
    ofstream output(argv[2]);
    
    Histogram histogram(input);
    histogram.computeHistogram(output);
    
    input.close(); output.close();
    
    return 0;
};

