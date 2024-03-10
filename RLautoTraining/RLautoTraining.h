#pragma once

#include "bakkesmod/plugin/bakkesmodplugin.h"

#pragma comment ( lib, "pluginsdk.lib" )

using namespace std;

class RLautoTraining : public BakkesMod::Plugin::BakkesModPlugin
{
public:
	virtual void onLoad();
	virtual void onUnload();

	void loadHooks();
	void GameEndedEvent(string name);

private:
	void Log(string msg);
};

