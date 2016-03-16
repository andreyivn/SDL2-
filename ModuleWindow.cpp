#include "Globals.h"
#include "Application.h"
#include "ModuleWindow.h"

#include "SDL\include\SDL_video.h"
#include "SDL\include\SDL.h"

bool ModuleWindow::Init()
{
	SDL_Init(SDL_INIT_VIDEO);

	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		LOG("Error, cannot load video", SDL_GetError());
		return false;
	}
	else
	{
		window = SDL_CreateWindow("SDL 2 Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_RESIZABLE);
		screen = SDL_GetWindowSurface(window);
		return true;
	}
}

bool ModuleWindow::CleanUp()
{
	void SDL_DestroyWindow(SDL_Window* window);
	atexit(SDL_Quit);
	return true;
}


// TODO 2: Init the library and check for possible error
// using SDL_GetError()

// TODO 3: pick the width and height and experiment with flags: borderless / fullscreen / resizable,
// then create the window and check for errors

// TODO 4: Finally create a screen surface and keep it as a public variable

// TODO 5: Fill with code CleanUp() method :)

