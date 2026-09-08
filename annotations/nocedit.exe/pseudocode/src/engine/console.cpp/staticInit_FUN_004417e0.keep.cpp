// Name: engine_console.cpp_staticInit_FUN_004417e0
// Address: 004417e0
// MANUAL RECONSTRUCTION
// Address Range: [[004417e0, 00441802]]
// Convention: __cdecl
// Signature: void __cdecl engine_console_cpp_staticInit_FUN_004417e0(void)

#include "nocturne.h"

void __cdecl engine_console_cpp_staticInit_FUN_004417e0(void)

{
#if !NOCTURNE_AUTHENTIC_CONSOLE
  int cols;
  int rows;
#endif

#if NOCTURNE_AUTHENTIC_CONSOLE
  engine_console_cpp_CConsole_ctor_FUN_00441810(&g_CConsoleInstance,0x28,0x20,1,1);
#else
  nocturne_console_layout(1,1,NOCTURNE_CONSOLE_MAX_COLS,NOCTURNE_CONSOLE_MAX_ROWS,
                          (int *)0,&cols,&rows);
  engine_console_cpp_CConsole_ctor_FUN_00441810(&g_CConsoleInstance,cols,rows,1,1);
#endif
  _atexit(&g_ConsoleDestructorNode);
  return;
}
