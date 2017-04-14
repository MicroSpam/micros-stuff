#include"ErrorHandler.h"

ErrorHandler::ErrorHandler()
{   }

void ErrorHandler::GetError()
{
    std::cout << "SDL Has encountered a fatal error! SDL_Error: " << SDL_GetError() << std::endl;
}
