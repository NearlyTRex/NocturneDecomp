// Name: core_script.cpp_CScript_removeEventXRef_FUN_005676e0
// Address: 005676e0
// Address Range: [[005676e0, 0056776b]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_removeEventXRef_FUN_005676e0(CScript *this_ptr,int index)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_removeEventXRef_FUN_005676e0(CScript *this_ptr,int index)

{
  int iVar1;
  
  if ((index < 0) || (this_ptr->xref_count <= index)) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0x1d77;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::removeEventXRef - invalid index");
  }
  iVar1 = this_ptr->xref_count + -1;
  this_ptr->xref_count = iVar1;
  memmove
            (this_ptr->xref_entries + index,this_ptr->xref_entries + index + 1,
             (iVar1 - index) * 0x114);
  return;
}
