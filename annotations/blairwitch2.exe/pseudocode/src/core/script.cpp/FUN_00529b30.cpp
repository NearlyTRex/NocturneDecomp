// Name: core_script.cpp_FUN_00529b30
// Address: 00529b30
// Address Range: [[00529b30, 00529c03]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_FUN_00529b30(CScript *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_script_cpp_FUN_00529b30(CScript *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_c;
  
  if (*(int *)&this_ptr->field_0x454 < 0) {
    return 0;
  }
  core_script_cpp_FUN_00529b00(this_ptr);
  iVar3 = 0;
  *(uint *)&this_ptr->field_0x44 = *(uint *)&this_ptr->field_0x454;
  while ((*(int *)&g_CGamePtr->field_0x244 != 0 && (*(int *)this_ptr == 0))) {
    local_c = 0x3e800000;
    iVar1 = *(int *)&this_ptr->field_0x44;
    iVar2 = core_script_cpp_FUN_00522350(this_ptr,&local_c);
    if (iVar2 < 0) {
      shape_edittool_cpp_FUN_0047be40
                (g_CEditorToolsPtr,"Error processing script to skip cinematic.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                 *(uint *)(*(int *)&this_ptr->field_0x30 + iVar1 * 8),
                 *(uint *)(*(int *)&this_ptr->field_0x30 + 4 + iVar1 * 8),&DAT_01e65100);
    }
    iVar3 = iVar3 + 1;
    if (300 < iVar3) {
      _DAT_01d046a4 = 0x1192;
      _DAT_01d046a0 = "..\\core\\script.cpp";
      core_main_c_FUN_004e4500
                ("Infinite loop detected trying to skip cinematic, at script line %d",
                 *(uint *)(*(int *)&this_ptr->field_0x30 + *(int *)&this_ptr->field_0x44 * 8))
      ;
    }
  }
  return 1;
}
