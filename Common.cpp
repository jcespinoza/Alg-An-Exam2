//
// Created by jcespinoza on 3/21/2017.
//

#include "ExamTest.h"

void ExamTest::initArray(int* array, int size, int defaultValue){
    for(int index=0;index<size;index++)
    {
        array[index] = defaultValue;
    }
}

int** ExamTest::_initGraph(int size)
{
    int **answer = new int* [size];
    for(int i=0;i<size;i++)
    {
        answer[i]=new int[size];
        initArray(answer[i], size, NONE);
    }
    return answer;
}