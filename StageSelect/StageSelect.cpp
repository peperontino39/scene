#include "StageSelect.h"

StageSelect::StageSelect()
{
}

void StageSelect::update()
{
}

void StageSelect::draw()
{
	drawFillBox(0, 0, 100, 100, Color::green);
}

void StageSelect::shift()
{
	if (env.isPushButton(Mouse::LEFT)) {
		Scene::create<Title>(new Title());
	}
}
