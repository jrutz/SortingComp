/* 
 * File:   SortingCompetition.h
 * Author: charlie
 *
 * Created on October 2, 2013, 11:18 AM
 */

#include <string>
#include <vector>
using namespace std;

#ifndef SORTINGCOMPETITION_H
#define	SORTINGCOMPETITION_H

class SortingCompetition {
public:
    SortingCompetition(char*& inputFileName);
    SortingCompetition(const SortingCompetition& orig);
    virtual ~SortingCompetition();
    
    void setFileName(char*& inputFileName);
    void readData();
    void prepareData();
    void sortData();
    void outputData(char*& outputFileName);
    
private:
    const char* inputFileName;
    vector<string> fileList;
    vector<vector<string>> lengthSortedList;

};

#endif	/* SORTINGCOMPETITION_H */

