// Interface to graph ADT
// With reference to week09 lab files "Graph.c" & "Graph.h"
// Written by Steven Deng and Ying Zhong, October 2018

#ifndef GRAPH_H
#define GRAPH_H

#include <stdio.h>

// Graph rep hidden
typedef struct GraphRep *Graph;

// Function signatures

// Vertexes represented as integers
typedef int Vertex;
int validV(Graph,Vertex); //validity check

// Edges are pairs of vertices (end-points)
typedef struct { Vertex v; Vertex w; } Edge;

// operations on graphs
Graph newGraph(int nV);
void insertEdge(Graph, Vertex, Vertex, int);
void removeEdge(Graph, Vertex, Vertex);
bool adjacent(Graph, Vertex, Vertex);
void deleteGraph(Graph);

// operations on linked lists - rep of adjacency vertices
typedef struct Node *Node;
typedef struct ListRep *List;

bool inLL(Node *list, Vertex v);
Node *newNode (Vertex v);
Node *insertLL(Node *list, Vertex v);
Node *deleteLL(Node *list, Vertex v);

#endif
