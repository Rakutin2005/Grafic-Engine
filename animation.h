#pragma once
#include "basicio.h"
#include "GLSkeleton.h"
class animation
{
public:
	Skeleton sceleton;//skeleton for doing פערüפורשע
	char *animfile;//file with animation
	int cadrsize;//FPS
	cadrs _cadrs;//body position in 1 cadr
	void show();//show animation
};
class Model
{
public:
	coordinats model;
	filltype ft;
};