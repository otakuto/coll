#pragma once
#include <memory>
#include <GL/glfw.h>
#include "GameObject.hpp"

class Player
:
public GameObject
{
public:
	Player()
	:
	GameObject()
	{
	}

	void run()
	{
	}

	void draw() const
	{
		static GLdouble const vertex[][3] =
		{
			{0, 0, 0},
			{8, 0, 0},
			{8, 16, 0},
			{0, 16, 0}
		};
		static GLubyte const color[3] = {0xFF, 0xFF, 0xFF};

		glPushMatrix();
		glTranslated(position[0], position[1], position[2]);
		glColor3ubv(color);
		glBegin(GL_QUADS);
		for (auto && e : vertex)
		{
			glVertex3dv(e);
		}
		glEnd();
		glPopMatrix();
	}
};

