/*
Windows

https://stackoverflow.com/questions/64396979/how-do-i-use-sdl2-in-my-programs-correctly

Step 1: download https://www.libsdl.org/release/SDL2-devel-2.0.14-mingw.tar.gz (or whatever the latest version is) and extract to ../

Step 2: compile:

C
PS C:\Users\greg\Documents\programming\c\sdl\sdl_hello> gcc sdl_hello.c -IC:\Users\greg\Documents\programming\c\sdl\SDL2-2.0.14\i686-w64-mingw32\include\SDL2 -lmingw32 -lSDL2main -lSDL2 -LC:\Users\greg\Documents\programming\c\sdl\SDL2-2.0.14\i686-w64-mingw32\lib

PS C:\Users\greg\Documents\programming\c\sdl\sdl_hello> gcc sdl_hello.c -I..\SDL2-2.0.14\i686-w64-mingw32\include\SDL2 -lmingw32 -lSDL2main -lSDL2 -L..\SDL2-2.0.14\i686-w64-mingw32\lib

C++
PS C:\Users\greg\Documents\programming\c\sdl\sdl_hello> g++ sdl_hello.cpp -I..\SDL2-2.0.14\i686-w64-mingw32\include\SDL2 -lmingw32 -lSDL2main -lSDL2 -L..\SDL2-2.0.14\i686-w64-mingw32\lib

Step 3: Ensure SDL2.dll is in .exe directory before running

*/
#include <stdio.h>
#include <SDL.h>

const int WINDOW_W = 640;
const int WINDOW_H = 480;

int main(int argc, char **args) {

    // Test initializing everything
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        fprintf(stderr, "SDL_Error: %s\n", SDL_GetError());
        return 1;
    }

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        fprintf(stderr, "SDL_Error: %s\n", SDL_GetError());
        return 1;
    }

    SDL_Window *window = SDL_CreateWindow(
        "hello sdl",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        WINDOW_W,
        WINDOW_H,
        SDL_WINDOW_SHOWN
    );

    if (!window) {
        fprintf(stderr, "SDL_Error: %s\n", SDL_GetError());
        return 1;
    }
    
    SDL_Surface *surface = SDL_GetWindowSurface(window);
    SDL_FillRect(surface, NULL, SDL_MapRGB(surface->format, 0x00, 0xFF, 0xFF));
    SDL_UpdateWindowSurface(window);
    SDL_Delay(2000);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}

