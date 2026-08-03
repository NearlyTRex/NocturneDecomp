// Name: core_level.cpp_CLevelLoader_cleanup_FUN_004c5fa0
// Address: 004c5fa0
// Address Range: [[004c5fa0, 004c5fcf]]
// Convention: __cdecl
// Signature: void __cdecl core_level_cpp_CLevelLoader_cleanup_FUN_004c5fa0(CLevelLoader *this_ptr)

#include "nocturne.h"

void __cdecl core_level_cpp_CLevelLoader_cleanup_FUN_004c5fa0(CLevelLoader *this_ptr)

{
  CConsole *pCVar1;
  
  pCVar1 = g_CConsole_PTR_005ad350;
  this_ptr->enabled = 0;
  engine_console_cpp_CConsole_printf_FUN_0043ac60
            (pCVar1,"gLevelIndicator: Used %d calls\n",this_ptr->current_frame);
  core_dmodel_cpp_FUN_00452f10(&g_CKeyFramedModel_01cc3290);
  return;
}
