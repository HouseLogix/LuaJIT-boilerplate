#include <stdio.h>
#include "program.h"
#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"

static const char *execLua =
"require 'program'\n print(\"Hello World from C\")";


int main()
{
  lua_State *L = luaL_newstate();
  luaL_openlibs(L);
  lua_getglobal(L, "package");
  lua_getfield(L, -1, "preload");
  int loadError = luaL_loadbuffer(L, luaJIT_BC_program, luaJIT_BC_program_SIZE, NULL);
  if (loadError == 0) {
    lua_setfield(L, -2, "program");
    lua_settop(L, 0);
    luaL_dostring(L, execLua);
  }
  lua_close(L);
  return 0;
}
