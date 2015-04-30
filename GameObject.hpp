#pragma once
#include <GL/glfw.h>
#include <memory>
#include <list>

class GameObject
{
public:
	std::list<std::shared_ptr<GameObject>> gameObjectList;
	GLdouble position[3];
	virtual void run() = 0;
	virtual void draw() const = 0;
};

