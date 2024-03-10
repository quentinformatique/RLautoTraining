#include "pch.h"
#include "RLautoTraining.h"

// BakkesMod Macro / init function.
BAKKESMOD_PLUGIN(RLautoTraining, "Auto Training Plugin", "1.0", PERMISSION_ALL)


void RLautoTraining::onLoad()
{
	this->Log("Plugin: RLautoTraining loaded !");
	this->loadHooks();
}
void RLautoTraining::onUnload()
{

}

void RLautoTraining::loadHooks()
{

}

void RLautoTraining::Log(std::string msg)
{
	cvarManager->log(msg);
}
