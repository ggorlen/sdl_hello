### Windows

<https://stackoverflow.com/questions/64396979/how-do-i-use-sdl2-in-my-programs-correctly>

Step 1: download https://www.libsdl.org/release/SDL2-devel-2.0.14-mingw.tar.gz (or whatever the latest version is) and extract to ../

Step 2: compile:

#### C

```
PS C:\Users\greg\Documents\programming\c\sdl\sdl_hello> gcc sdl_hello.c -IC:\Users\greg\Documents\programming\c\sdl\SDL2-2.0.14\i686-w64-mingw32\include\SDL2 -lmingw32 -lSDL2main -lSDL2 -LC:\Users\greg\Documents\programming\c\sdl\SDL2-2.0.14\i686-w64-mingw32\lib
```

```
PS C:\Users\greg\Documents\programming\c\sdl\sdl_hello> gcc sdl_hello.c -I..\SDL2-2.0.14\i686-w64-mingw32\include\SDL2 -lmingw32 -lSDL2main -lSDL2 -L..\SDL2-2.0.14\i686-w64-mingw32\lib
```

#### C++

```
PS C:\Users\greg\Documents\programming\c\sdl\sdl_hello> g++ sdl_hello.cpp -I..\SDL2-2.0.14\i686-w64-mingw32\include\SDL2 -lmingw32 -lSDL2main -lSDL2 -L..\SDL2-2.0.14\i686-w64-mingw32\lib
```

Step 3: Ensure `SDL2.dll` is in `.exe` directory before running. Make sure to use the correct 32 or 64 bit dll.

