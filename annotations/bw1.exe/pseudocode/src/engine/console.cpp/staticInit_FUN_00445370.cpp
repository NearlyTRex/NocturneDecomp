// Name: engine_console.cpp_staticInit_FUN_00445370
// Address: 00445370
// Address Range: [[00445370, 00445392]]
// Convention: __cdecl
// Signature: void __cdecl engine_console_cpp_staticInit_FUN_00445370(void)

#include "nocturne.h"

void __cdecl engine_console_cpp_staticInit_FUN_00445370(void)

{
  uint uStack0000000c;
  WatcomStaticDestructorNode *pWStack00000010;
  
  engine_console_cpp_CConsole_ctor_FUN_004453a0(&g_CConsoleInstance,0x28,0x20,1,1);
  pWStack00000010 = &g_ConsoleDestructorNode;
  uStack0000000c = 0x44538f;
  _atexit();
  return;
}
