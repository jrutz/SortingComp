/* 
 * File:   SortingCompetition.cpp
 * Author: charlie
 * xxx
 * Created on October 2, 2013, 11:18 AM
 */
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include "SortingCompetition.h"
using namespace std;

SortingCompetition::SortingCompetition(char*& inputFileName) 
{
    this->inputFileName = inputFileName;
}

SortingCompetition::SortingCompetition(const SortingCompetition& orig) {
}

SortingCompetition::~SortingCompetition() {
}

void SortingCompetition::setFileName(char*& inputFileName)
{
    this->inputFileName = inputFileName;
}

void SortingCompetition::readData()
{
    ifstream fin;
    string temp;
    fin.open(inputFileName);
    while(fin >> temp)
    {
        cout << temp << endl;
        fileList.push_back(temp);
    }
    cout << "The vector contains " << fileList.size() << " words." << endl;
}

void SortingCompetition::prepareData()
{
    
}

void SortingCompetition::sortData()
{
    
}

void SortingCompetition::outputData(char*& outputFileName)
{
    
}






