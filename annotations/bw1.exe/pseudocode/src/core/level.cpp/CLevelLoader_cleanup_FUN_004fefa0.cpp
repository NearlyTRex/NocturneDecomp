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
  this_ptr->enabled = 0;
  engine_console_cpp_FUN_00445430
            (pCVar1,"gLevelIndicator: Used %d calls\n",this_ptr->current_frame);
  core_dmodel_cpp_FUN_00467160(&g_LoadingMoonModel);
  return;
}
