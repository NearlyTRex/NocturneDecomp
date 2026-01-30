// Name: core_script.cpp_CScript_FUN_00565aa0
// Address: 00565aa0
// Address Range: [[00565aa0, 00565ad3]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_00565aa0(CScript *this_ptr,int param_2,int param_3)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_00565aa0(CScript *this_ptr,int param_2,int param_3)

{
  int iVar1;
  
  if (-1 < param_3) {
    iVar1 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)(this_ptr->unk4 + 0x20));
    if (param_3 < iVar1) {
      core_script_cpp_CScript_FUN_00566a90(this_ptr,param_3,param_2);
      return;
    }
  }
  return;
}
