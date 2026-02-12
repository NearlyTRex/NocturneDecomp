// Name: engine_console.cpp_staticInit_FUN_004417e0
// Address: 004417e0
// Address Range: [[004417e0, 00441802]]
// Convention: __cdecl
// Signature: void __cdecl engine_console_cpp_staticInit_FUN_004417e0(void)

#include "nocturne.h"

void __cdecl engine_console_cpp_staticInit_FUN_004417e0(void)

{
  engine_console_cpp_CConsole_ctor_FUN_00441810(&g_CConsoleInstance,0x28,0x20,1,1);
  _atexit(&g_ConsoleDestructorNode);
  return;
}
