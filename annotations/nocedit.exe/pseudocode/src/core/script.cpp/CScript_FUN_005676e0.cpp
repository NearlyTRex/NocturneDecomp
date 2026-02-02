// Name: core_script.cpp_CScript_FUN_005676e0
// Address: 005676e0
// Address Range: [[005676e0, 0056776b]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_005676e0(CScript *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_005676e0(CScript *this_ptr,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0) || (this_ptr->unk3 <= param_2)) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0x1d77;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::removeEventXRef - invalid index");
  }
  iVar1 = this_ptr->unk3 + -1;
  this_ptr->unk3 = iVar1;
  memmove
            ((void *)(param_2 * 0x114 + (int)this_ptr->unk4),
             (void *)((param_2 + 1) * 0x114 + (int)this_ptr->unk4),(iVar1 - param_2) * 0x114);
  return;
}
