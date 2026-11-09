// Name: core_level.cpp_CLevelLoader_cleanup_FUN_004fefa0
// Address: 004fefa0
// Address Range: [[004fefa0, 004fefcf]]
// Convention: __cdecl
// Signature: void __cdecl core_level_cpp_CLevelLoader_cleanup_FUN_004fefa0(CLevelLoader *this_ptr)

#include "nocturne.h"

void __cdecl core_level_cpp_CLevelLoader_cleanup_FUN_004fefa0(CLevelLoader *this_ptr)

{
  CConsole *pCVar1;
  
  pCVar1 = g_CConsolePtr;
  *(uint *)(this_ptr + 0xc) = 0;
  engine_console_cpp_FUN_00445430
            (pCVar1,"gLevelIndicator: Used %d calls\n",*(uint *)this_ptr);
  core_dmodel_cpp_FUN_00467160(&g_LoadingMoonModel);
  return;
}
