#include "trafficgraph.h"

void TrafficGraph::mapEndpoints(Car& car);
std::vector<Route> TrafficGraph::findAllPaths(Point* source, Point* destination);
std::vector<Route> TrafficGraph::findAlternativePaths(Point* source, Point* destination);
