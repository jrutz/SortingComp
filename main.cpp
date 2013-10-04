/* 
 * File:   main.cpp
 * Author: charlie
 *
 * Created on October 2, 2013, 11:17 AM
 */

#include <cstdlib>
#include <string>
#include <iostream>
//#include <chrono>
#include <ctime>
#include "SortingCompetition.h"

using namespace std;

/*
 * 
 */

long fibonacci(int n)
{
    if(n < 3)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main(int argc, char** argv) 
{
    SortingCompetition s(argv[1]);
    s.readData();
    
    
    
    /* 
    std::chrono::time_point<std::chrono::system_clock> start, end;
    start = std::chrono::system_clock::now();
    cout << "f(42)= " << fibonacci(42) << endl;
    end = std::chrono::system_clock::now();
    
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    
    cout << "finished computation at: " << std::ctime(&end_time) << endl
            << "elapsed time " << elapsed_seconds.count() << "s" << endl;
    
    return 0;
    */
}

