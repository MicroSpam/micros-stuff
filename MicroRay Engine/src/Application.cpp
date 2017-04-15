#include"Application.h"

Application::Application()
{
    window = NULL;
    surface = NULL;
    Init();
}

Application::~Application()
{
    window = NULL;
    surface = NULL;
}

bool Application::Init()
{
    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        //call error handler
        errHandler.GetError();
        return false;
    }
    else
    {
    window = SDL_CreateWindow("MicroRay Engine", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, m_SCREEN_WIDTH, m_SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        if (window == NULL)
        {
            errHandler.GetError();
            return false;
        }
        else
        {
            surface = SDL_GetWindowSurface(window);
            MainLoop();
        }
    }
    return true;
}

void Application::MainLoop()
{
    SDL_FillRect(surface, NULL, SDL_MapRGB(surface->format, 0,0,0));
    SDL_UpdateWindowSurface(window);
    SDL_Delay(2000);
    Close();
}

void Application::Close()
{
    SDL_DestroyWindow(window);
    SDL_Quit();
}
