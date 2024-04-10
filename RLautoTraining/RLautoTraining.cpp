#include "pch.h"
#include "RLautoTraining.h"

using namespace std;

// BakkesMod Macro / init function.
BAKKESMOD_PLUGIN(RLautoTraining, "Auto Training Plugin", "1.0", PERMISSION_ALL)


void RLautoTraining::onLoad()
{
	this->Log("RLautoTraining made by quentinformatique, please see the GitHub repo for more informations");
	this->loadHooks();
}
void RLautoTraining::onUnload()
{

}

void RLautoTraining::loadHooks()
{
	// game events
	gameWrapper->HookEvent("Function TAGame.GameEvent_Soccar_TA.EventMatchEnded", std::bind(&RLautoTraining::GameEndedEvent, this, std::placeholders::_1));
	gameWrapper->HookEvent("Function TAGame.AchievementManager_TA.HandleMatchEnded", std::bind(&RLautoTraining::GameEndedEvent, this, std::placeholders::_1));

}

void RLautoTraining::GameEndedEvent(string name) 
{
	// command to launch you back into freeplay
	cvarManager->executeCommand("load_freeplay");
}

void RLautoTraining::Log(string msg)
{
	cvarManager->log(msg);
}
