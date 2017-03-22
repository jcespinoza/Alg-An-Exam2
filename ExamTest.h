//
// Created by jcespinoza on 3/21/2017.
//

#ifndef AA_CLASSEXERCISES_EXAMTEST_H
#define AA_CLASSEXERCISES_EXAMTEST_H
#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <map>
#include <queue>
#include <list>
#include <set>

#define NONE -1

using namespace std;

class ExamTest {
private:
    int countPaths(int** DAG, int size, int origin, int destination, int* knownPaths);

    void initArray(int* array, int size, int defaultValue);

    int** _initGraph(int size);

    bool _checkColors(int **graph, int size, vector<int> colors);

    int _countColors(vector<int> colors);

    bool pathIsKnown(int *knownPaths, int eIndex);

public:
    //Counts the number of possible paths from origin to destination in the given DAG (Directed Acyclic Graph)
    //Use Dynamic Programing to optimize the process
    int countPaths(int** DAG, int size, int origin, int destination);

    //Returns a vector that maps each vertex to a color (or number)
    //Two adjacent vertex cannot have the same color
    //The less colors used, the better
    //Use a Greedy Paradigm to optimize the process
    //The best solution is not required
    vector<int> getVertexColors(int** graph, int size);

    void test();
};


#endif //AA_CLASSEXERCISES_EXAMTEST_H
