// Name: engine_console.cpp_staticInit_FUN_00436650
// Address: 00436650
// Address Range: [[00436650, 00436672]]
// Convention: __cdecl
// Signature: void __cdecl engine_console_cpp_staticInit_FUN_00436650(void)

#include "nocturne.h"

void __cdecl engine_console_cpp_staticInit_FUN_00436650(void)

{
  uint uStack0000000c;
  
  engine_console_cpp_CConsole_ctor_FUN_00436680(&g_CConsoleInstance,0x28,0x20,1,1);
  uStack0000000c = 0x43666f;
  _atexit(&g_ConsoleDestructorNode);
  return;
}
