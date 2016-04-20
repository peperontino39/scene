#pragma once
#include "../SceneBase/CreateScene.h"

class GameMain : public SceneBase
{
public:
	GameMain();
	void update() override;
	void draw() override;
	void shift() override;

private:

};