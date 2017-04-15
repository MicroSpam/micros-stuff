#ifndef APPLICATION_H_INCLUDED
#define APPLICATION_H_INCLUDED

#include<iostream>
#include<SDL2/SDL.h>

//class includes
#include"ErrorHandler.h"

class Application {
public:

Application();
~Application();

SDL_Window* window;
SDL_Surface* surface;

ErrorHandler errHandler;

bool Init();

void Close();

//Temporary. This will be replaced with a gamestate system.
void MainLoop();

private:
    const int m_SCREEN_WIDTH = 1280;
    const int m_SCREEN_HEIGHT = 728;

    bool _windowWlose = false;
};


#endif // APPLICATION_H_INCLUDED
