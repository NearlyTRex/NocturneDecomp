// Name: core_level.cpp_CLevelLoader_cleanup_FUN_004e1b80
// Address: 004e1b80
// Address Range: [[004e1b80, 004e1baf]]
// Convention: __cdecl
// Signature: void __cdecl core_level_cpp_CLevelLoader_cleanup_FUN_004e1b80(CLevelLoader *this_ptr)

#include "nocturne.h"

void __cdecl core_level_cpp_CLevelLoader_cleanup_FUN_004e1b80(CLevelLoader *this_ptr)

{
  CConsole *pCVar1;
  
  pCVar1 = g_CConsolePtr;
  *(uint *)(this_ptr + 0xc) = 0;
  engine_console_cpp_FUN_00436710
            (pCVar1,"gLevelIndicator: Used %d calls\n",*(uint *)this_ptr);
  core_dmodel_cpp_FUN_0044e590(&g_LoadingMoonModel);
  return;
}
