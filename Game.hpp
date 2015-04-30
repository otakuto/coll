#pragma once
#include <list>
#include <memory>
#include "GameObject.hpp"
#include "Player.hpp"

class Game
{
private:
	std::list<std::shared_ptr<GameObject>> gameObjectlist;

public:
	Game()
	:
	gameObjectlist()
	{
		gameObjectlist.push_back(std::make_shared<Player>());
	}

	void run()
	{
		for (auto && e : gameObjectlist)
		{
			e->run();
		}
	}

	void draw()
	{
		for (auto && e : gameObjectlist)
		{
			e->draw();
		}
	}
};

