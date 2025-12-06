// Name: core_level.cpp_CLevelLoader_cleanup_FUN_00504720
// Address: 00504720
// Address Range: [[00504720, 0050474f]]
// Convention: __cdecl
// Signature: void core_level.cpp_CLevelLoader_cleanup_FUN_00504720(CLevelLoader * this_ptr)

#include "nocturne.h"

void __cdecl core_level_cpp_CLevelLoader_cleanup_FUN_00504720(CLevelLoader *this_ptr)

{
  CConsole *this_ptr_00;
  
  this_ptr_00 = g_CConsolePtr;
  this_ptr->enabled = 0;
  engine_console_cpp_CConsole_printf_FUN_00441890
            (this_ptr_00,"gLevelIndicator: Used %d calls\n",this_ptr->current_frame);
  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(&g_LoadingMoonModel);
  return;
}
