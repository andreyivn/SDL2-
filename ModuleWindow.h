#ifndef __ModuleWindow_H__
#define __ModuleWindow_H__

#include "SDL\include\SDL.h"
#include "SDL\include\SDL_video.h"

class ModuleWindow : public Module
{
public:
	bool Init();
	bool CleanUp();
	SDL_Window* window;
	SDL_Surface* screen;
};

// TODO 1: Create the declaration of ModuleWindow class

#endif // __ModuleWindow_H__