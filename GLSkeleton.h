#pragma once
#include "basicio.h"
typedef float bodypcoor[14];
typedef bodypcoor *bodycoor;
enum  { sx, sy, sz, xt, yt, zt, xb, yb, zb, xl, yl, zl, xr, yr, zr };//SkeletonArrayTypes; sxsysz - ������� ����� ���������. t - ����, b - ���, l - �����, r - ������ ������� �� ����
class Skeleton
{
public:
	bodycoor coor;
};