#pragma once

#include "bakkesmod/plugin/bakkesmodplugin.h"

#pragma comment ( lib, "pluginsdk.lib" )

class RLautoTraining : public BakkesMod::Plugin::BakkesModPlugin
{
public:
	virtual void onLoad();
	virtual void onUnload();

	void loadHooks();

private:
	void Log(std::string msg);
};

