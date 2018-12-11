#pragma once
#include <fstream>
#include <iostream>
#define WinEngineAPI
#define EngineVertion
#define AnimEngineVertion
#define IOEngineVertion 0.0.01
#define IOEngineSerial 128.0.0.1
#define LinuxEngineAPI
#define FucnArgumentError 3
///file-formats defines (*.fileformat)
#define FileModelFormat ".mdl"
#define FileSkeletonFormat ".skt"
#define FileAnimationFormat ".anim"
#define FileTerrainFormat ".ter"
#define FileStringFormat ".str"
#define FileSoundFormat ".mp3"
#define FileCoordinatsFormat ".coor"
#define FileReslistFormat ".rls"
#define FileApplicationFormat ".win"
#define FileUnitFormat ".unit"
#define FileOtherFormat ".res"
using std::ifstream;
using std::ofstream;
using std::cout;											class sound;
typedef float coordinat[2];									struct cstring;
typedef coordinat *coordinats;								class console;
enum { x, y, z };											class Interface;
enum filltype { lines, polygon, textures, pixel };			class window;
typedef coordinat **cadrs;									class gif;
class reslist;												class picture;
class Skeleton;												class terrain;
class animation;											class controller;
class Model;												class Unit;
int load(char *filename, Model traget);						int load(char *filename, terrain traget);
int load(char *filename, window traget);					int load(char *filename, controller traget);
int load(char *filename, gif traget);						int load(char *filename, cstring traget);
int load(char *filename, picture traget);					int load(char *filename, reslist traget);
int load(char *filename, console traget);					int load(char *filename, Skeleton traget);
int load(char *filename, animation traget);					int load(char *filename, coordinats traget);
int load(char *filename, Unit traget);						int load(char *filename, cadrs traget);






































/*







int loadres(char *filelist, reslist to)
{
	/*
	file list format:{
	fullfile;(||linkfile(body:anim || fullfile))
	body(x:y:z:fill;x:y:z:fill;x:y:z:fill;...);
	anim((x:y:z;...);(x:y:z;...);...);					skeleton cadr coorinats in (x:y:z;...), after ';' writenext cadr
	}
	ifstream fin(filelist);
	if (fin.bad)
	{
		cout << "cant open" << filelist;
		return 0;
	}


}*/