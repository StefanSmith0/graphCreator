#include "graph.h"

using namespace std;

int main() {
  Graph* graph = new Graph();
  string input;
  bool running = true;
  while(running) {
    cout << "Command: ";
    getline(cin, input);
    if(!input.compare("add vertex") || !input.compare("av")) {
      cout << "Add vertex: ";
      getline(cin, input);
      graph->addNode(input);
      graph->print();
    }
    else if(!input.compare("remove vertex") || !input.compare("rv")) {
      cout << "Remove vertex: ";
      getline(cin, input);
      graph->removeNode(input);
      graph->print();
    }
    else if(!input.compare("add edge") || !input.compare("ae")) {
      string newEnd;
      cout << "First node: ";
      getline(cin, input);
      cout << "Second node: ";
      getline(cin, newEnd);
      graph->addEdge(input, newEnd);
      cin.ignore();
      cin.clear();
    }
    else if(!input.compare("remove edge") || !input.compare("re")) {
      string newEnd;
      cout << "First node: ";
      getline(cin, input);
      cout << "Second node: ";
      getline(cin, newEnd);
      graph->removeEdge(input, newEnd);
    }
    else if(!input.compare("print") || !input.compare("p")) {
      graph->print();
    }
    else if(!input.compare("quit")) {
      running = false;
    }
    else if(!input.compare("q")) {
      running = false;
    }
  }
  delete graph;
  return 0;
}
