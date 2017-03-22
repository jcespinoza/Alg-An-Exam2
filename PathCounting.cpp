//
// Created by jcespinoza on 3/21/2017.
//

#include "ExamTest.h"


//Counts the number of posibles paths from origin to destination in the given DAG (Directed Acyclic Graph)
//Use Dynamic Programing to optimize the process
int ExamTest::countPaths(int** DAG, int size, int origin, int destination, int* knownPaths){
    int count = 0;
    if(origin == destination){
        return count;
    }

    int* edges = DAG[origin];

    for (int eIndex = 0; eIndex < size; ++eIndex) {
        int weight = edges[eIndex];

        if (weight == NONE) continue;

        if ( eIndex == destination ){
            count++;
            knownPaths[eIndex] += 1;
        }else{
            if( pathIsKnown(knownPaths, eIndex) ){
                count++;
            }else {
                count += countPaths(DAG, size, eIndex, destination);
            }
        }
    }

    return count;
}

int ExamTest::countPaths(int** DAG, int size, int origin, int destination)
{
    int knownPaths[size];
    initArray(knownPaths, size, 0);
    return countPaths(DAG, size, origin, destination, knownPaths);
}

bool ExamTest::pathIsKnown(int *knownPaths, int eIndex) { return knownPaths[eIndex] != 0; }