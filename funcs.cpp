/*
    Author: Halil Akca
    Course: CSCI-135
    Instructor: Zamansky
    Assignment: Lab 12
    This program will perform all the tasks
*/

#include <iostream>
#include <cmath>
#include <vector>

void printVector(std::vector<int> &test)
{
    std::cout << "[";
    if(test.size()==0)
    {
        std::cout << "]\n";
    }
    for(int i=0; i<test.size(); i++)
    {
        if(i != test.size()-1)
        {
            std::cout << test[i] << ", ";
        }
        else
        {
            std::cout << test[i] << "]\n";
        }
    }
}

std::vector<int> makeVector(int n)
{
    std::vector<int> j = {};

    for(int i=0; i<n; i++)
    {
        j.push_back(i);
    }
    return j;
}

std::vector<int> goodVibes(const std::vector<int> &v)
{
    std::vector<int> j = {};

    for(int i=0; i<v.size(); i++)
    {
        if(v[i] >= 0)
        {
            j.push_back(v[i]);
        }
    }

    return j;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta)
{
    for(int i=0; i<vegeta.size(); i++)
    {
        goku.push_back(vegeta[i]);
    }

    vegeta.clear();
}

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2)
{
    std::vector<int> larger;
    std::vector<int> smaller;

    if(v1.size() >= v2.size())
    {
        larger = v1;
        smaller = v2;
    }
    else
    {
        larger = v2;
        smaller = v1;
    }

    std::vector<int> sum;
    int index = 0;
    for(int i=0; i<smaller.size(); i++)
    {
        sum.push_back(larger[i] + smaller[i]);
        index++;
    }

    for(int j=index; j<larger.size(); j++)
    {
        sum.push_back(larger[j]);
    }

    return sum;
}