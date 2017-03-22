//
// Created by jcespinoza on 3/21/2017.
//

#include "ExamTest.h"

//Returns a vector that maps each vertex to a color (or number)
//Two adjacent vertex cannot have the same color
//The less colors used, the better
//Use a Greedy Paradigm to optimize the process
//The best solution is not required
vector<int> ExamTest::getVertexColors(int** graph, int size)
{
    vector<int> answer;

    for (int vIndex = 0; vIndex < size; ++vIndex) {
        for (int eIndex = 0; eIndex < size; ++eIndex) {
            //answer[vIndex] = 1;
        }
    }

    return answer;
}

void markVertices(vector<int>* vertices, int** graph, int currentIndex){

}