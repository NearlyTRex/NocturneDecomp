// Name: core_script.cpp_CScript_FUN_00566910
// Address: 00566910
// Address Range: [[00566910, 0056699e]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_00566910(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_00566910(CScript *this_ptr)

{
  int iVar1;
  
  iVar1 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)(this_ptr->unk4 + 0x20));
  CEdScrollBar_0310fcd8.current_value = iVar1 + 2;
  if (CEdScrollBar_0310fcd8.current_value <= DAT_0310fd48) {
    DAT_0310fd48 = iVar1 + 1;
  }
  if (DAT_0310fd48 < 0) {
    DAT_0310fd48 = 0;
  }
  if ((int)DAT_0310fd44 < 0) {
    DAT_0310fd44 = 0;
  }
  DAT_0310fd44 = core_script_cpp_CScript_FUN_00566a90(this_ptr,DAT_0310fd48,DAT_0310fd44);
  DAT_0310fd44 = core_script_cpp_CScript_FUN_00566b30(this_ptr,DAT_0310fd48,DAT_0310fd44);
  return;
}
