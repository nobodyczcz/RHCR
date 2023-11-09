#pragma once
#include "BasicGraph.h"


class KivaGrid :
	public BasicGraph
{
public:
	vector<int> endpoints;
	vector<int> agent_home_locations;

    std::vector<int> agents;
	std::vector<int> tasks;
    int k;
    
    bool load(std::string fname,std::string starts, std::string tasks, int k);
    bool load_map(std::string fname);
    void preprocessing(bool consider_rotation); // compute heuristics
private:
    bool load_weighted_map(string fname);
    bool load_unweighted_map(string fname);
};
