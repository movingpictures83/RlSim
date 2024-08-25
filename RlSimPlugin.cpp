#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "RlSimPlugin.h"

void RlSimPlugin::input(std::string file) {
   readParameterFile(file);
}

void RlSimPlugin::run() {}

void RlSimPlugin::output(std::string file) {
	// rlsim -n 100 /biorg/data/RNA/UMiami/small/S12_R1.fastq /biorg/data/RNA/UMiami/small/S12_R2.fastq >& output.fastq
 std::string outputfile = file;
 std::string myCommand = "";
 myCommand += "rlsim -n "+myParameters["n"]+" "+PluginManager::addPrefix(myParameters["fastq1"])+" "+PluginManager::addPrefix(myParameters["fastq2"])+" >& "+file;
std::cout << myCommand << std::endl;
system(myCommand.c_str());
}

PluginProxy<RlSimPlugin> RlSimPluginProxy = PluginProxy<RlSimPlugin>("RlSim", PluginManager::getInstance());
