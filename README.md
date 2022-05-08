# `sdl_hello`

## Windows

Refer to: <https://stackoverflow.com/questions/64396979/how-do-i-use-sdl2-in-my-programs-correctly>

### Setup

Download <https://www.libsdl.org/release/SDL2-devel-2.0.14-mingw.tar.gz> (or whatever the latest version is) and extract to `../sdl_hello`, then run `make`.

```
.
├───SDL2-2.0.14 <-- add mingw development library and `make` it
└───sdl_hello
    │   .gitignore
    │   Makefile
    │   README.md
    │   SDL2.dll <-- add 64 bit runtime binary DLL 2.0.14
    │   
    └───src
            sdl_hello.c
```

### Compiling

```
PS sdl_hello> gcc src/sdl_hello.c -I..\SDL2-2.0.14\x86_64-w64-mingw32\include\SDL2 -lmingw32 -lSDL2main -lSDL2 -L..\SDL2-2.0.14\x86_64-w64-mingw32\lib
```

### Running

Ensure `SDL2.dll` is in the `.exe` directory before running. Make sure to use the correct 32 or 64 bit dll.
