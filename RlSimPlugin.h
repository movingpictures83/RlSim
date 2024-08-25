#ifndef RlSimPLUGIN_H
#define RlSimPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include "Tool.h"
#include <string>

class RlSimPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "RlSim";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
