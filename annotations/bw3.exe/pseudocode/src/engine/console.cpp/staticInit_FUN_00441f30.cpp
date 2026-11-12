// Name: engine_console.cpp_staticInit_FUN_00441f30
// Address: 00441f30
// Address Range: [[00441f30, 00441f52]]
// Convention: __cdecl
// Signature: void __cdecl engine_console_cpp_staticInit_FUN_00441f30(void)

#include "nocturne.h"

void __cdecl engine_console_cpp_staticInit_FUN_00441f30(void)

{
  uint uStack0000000c;
  
  engine_console_cpp_CConsole_ctor_FUN_00441f60(&g_CConsoleInstance,0x28,0x20,1,1);
  uStack0000000c = 0x441f4f;
  _atexit(&g_ConsoleDestructorNode);
  return;
}
