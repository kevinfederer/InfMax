/*************************************************************************
    > File Name: graph.h
    > Author: anryyang
    > Mail: anryyang@gmail.com 
    > Created Time: Sat Oct 22 14:44:59 2016
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct Vertex{
    int id;
    string name;
    double activation_threshhold;
    double opinion;
    bool activation_status;
    int in_degree;
    int out_degree;
};

struct Edge{
    int from;
    int to;
    double weight;
};

typedef vector<Vertex> Users;
typedef vector< vector<Edge> > Graph;

