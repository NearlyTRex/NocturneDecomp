// Name: core_level.cpp_CLevelLoader_cleanup_FUN_004fefa0
// Address: 004fefa0
// Address Range: [[004fefa0, 004fefcf]]
// Convention: __cdecl
// Signature: void __cdecl core_level_cpp_CLevelLoader_cleanup_FUN_004fefa0(CLevelLoader *this_ptr)

#include "nocturne.h"

void __cdecl core_level_cpp_CLevelLoader_cleanup_FUN_004fefa0(CLevelLoader *this_ptr)

{
  CConsole *this_ptr_00;
  
  this_ptr_00 = g_CConsolePtr;
  this_ptr->enabled = 0;
  engine_console_cpp_CConsole_printf_FUN_00445430(this_ptr_00,"gLevelIndicator: Used %d calls\n");
  core_dmodel_cpp_FUN_00467160(&g_LoadingMoonModel);
  return;
}
