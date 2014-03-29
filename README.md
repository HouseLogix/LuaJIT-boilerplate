LuaJIT-boilerplate
==================

Boilerplate to execute LuaJIT byte code headers.

This compiles a windows .exe that runs embedded Lua code.
LuaJIT 2.0.3 libs and headers included for compilation.

To create your own byte code, see www.luajit.org


Setup
==================
Compile main.c
Link lua51.lib
Keep lua51.dll next to .exe for execution

main.c
==================
Demonstrates loading LuaJIT byte code headers and direct Lua string calls.

program.h
==================
This is the LuaJIT byte code of program.lua

Created by running luajit -b program.lua program.h


