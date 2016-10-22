/*************************************************************************
    > File Name: file_2_graph.cpp
    > Author: anryyang
    > Mail: anryyang@gmail.com 
    > Created Time: Sat Oct 22 16:02:51 2016
 ************************************************************************/

#include "file_2_graph.h"

FileToGraph::~FileToGraph(){}

void FileToGraph::convert(){

}

void FileToGraph::get_graph(Graph &g){
    g = graph;
}

void FileToGraph::get_users(Users &u){
    u = users;
}

double FileToGraph::get_weight(){
    return 0;
}

double FileToGraph::get_opinion(){
    return 1;
}



