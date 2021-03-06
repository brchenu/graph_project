#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "ManipulatingLinkedLists.h"
#include "ManipulatingGraph.h"
#include "MenuGraph.h"
#include "Chinese.h"

/*Commande valgrind:
    valgrind ./main

    options:
        --leak-check=full  : for memory leaks info
        -g                 : for debug info
*/

int main() {

    struct Graph *myGraph = malloc(sizeof(struct Graph));
    
    //graph_create(myGraph, 12, false);


    //NON EULERIAN
    /*graph_add_node(myGraph, 0);
    graph_add_node(myGraph, 1);
    graph_add_node(myGraph, 2);
    graph_add_node(myGraph, 3);
    graph_add_node(myGraph, 4);
    graph_add_node(myGraph, 5);
    graph_add_node(myGraph, 6);


    graph_add_edge(myGraph, 0, 1, 1);
    graph_add_edge(myGraph, 0, 2, 2);
    graph_add_edge(myGraph, 1, 2, 4);
    graph_add_edge(myGraph, 1, 3, 12);
    graph_add_edge(myGraph, 2, 3, 4);
    graph_add_edge(myGraph, 3, 4, 2);
    graph_add_edge(myGraph, 4, 5, 1);
    graph_add_edge(myGraph, 5, 6, 1);
    graph_add_edge(myGraph, 4, 6, 10);*/


    //EULERIAN GRAPH
    /*graph_add_node(myGraph, 0);
    graph_add_node(myGraph, 1);
    graph_add_node(myGraph, 2);
    graph_add_node(myGraph, 3);
    graph_add_node(myGraph, 4);
    graph_add_node(myGraph, 5);
    graph_add_node(myGraph, 6);
    graph_add_node(myGraph, 7);

    graph_add_edge(myGraph, 0, 1, 5);
    graph_add_edge(myGraph, 0, 2, 5);
    graph_add_edge(myGraph, 1, 2, 5);

    graph_add_edge(myGraph, 2, 3, 5);
    graph_add_edge(myGraph, 2, 4, 5);

    graph_add_edge(myGraph, 3, 5, 5);
    graph_add_edge(myGraph, 4, 5, 5);

    graph_add_edge(myGraph, 5, 6, 5);
    graph_add_edge(myGraph, 5, 7, 5);
    graph_add_edge(myGraph, 6, 7, 5);*/



    //SEMI EULERIAN
    /*graph_add_node(myGraph, 0);
    graph_add_node(myGraph, 1);
    graph_add_node(myGraph, 2);
    graph_add_node(myGraph, 3);
    graph_add_node(myGraph, 4);

    graph_add_edge(myGraph, 0, 1, 5);
    graph_add_edge(myGraph, 0, 2, 5);
    graph_add_edge(myGraph, 1, 2, 5);

    graph_add_edge(myGraph, 2, 3, 5);
    graph_add_edge(myGraph, 2, 4, 5);
    graph_add_edge(myGraph, 3, 4, 5);

    graph_add_edge(myGraph, 0, 3, 5);*/


    // Test 6 ODD Degree //
    /*graph_add_node(myGraph, 0);    
    graph_add_node(myGraph, 1);    
    graph_add_node(myGraph, 2);    
    graph_add_node(myGraph, 3);    
    graph_add_node(myGraph, 4);    
    graph_add_node(myGraph, 5);    
    graph_add_node(myGraph, 6);    
    graph_add_node(myGraph, 7);     
    graph_add_edge(myGraph, 0, 1, 1);    
    graph_add_edge(myGraph, 0, 2, 2);    
    graph_add_edge(myGraph, 1, 2, 4);    
    graph_add_edge(myGraph, 1, 3, 12);    
    graph_add_edge(myGraph, 2, 3, 4);    
    graph_add_edge(myGraph, 3, 4, 2);    
    graph_add_edge(myGraph, 4, 5, 1);    
    graph_add_edge(myGraph, 5, 6, 1);    
    graph_add_edge(myGraph, 4, 6, 10);    
    graph_add_edge(myGraph, 5, 7, 2);    
    graph_add_edge(myGraph, 6, 7, 3);*/

    //solveChineseProblem(myGraph, 2);

    //graph_destroy(myGraph);

    MainMenu(myGraph);

    free(myGraph);
}