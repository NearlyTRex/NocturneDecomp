// Name: core_script.cpp_CScript_FUN_0055a4b0
// Address: 0055a4b0
// Address Range: [[0055a4b0, 0055a537]]
// Convention: __cdecl
// Signature: int * __cdecl core_script_cpp_CScript_FUN_0055a4b0(CScript *this_ptr,int *param_2)

#include "nocturne.h"

int * __cdecl core_script_cpp_CScript_FUN_0055a4b0(CScript *this_ptr,int *param_2)

{
  int iVar1;
  int iVar2;
  uint local_10;
  
  DAT_0310ec9c = 1;
  core_script_cpp_CScript_FUN_0055a540(this_ptr);
  shape_edittool_cpp_CPickList_clear_FUN_004a5770(&DAT_0310f4b0);
  if (this_ptr->next_cmd < *(int *)(this_ptr->unk4 + 0x18)) {
    do {
      iVar2 = this_ptr->next_cmd;
      local_10 = 0x3e800000;
      iVar1 = core_script_cpp_CScript_step_FUN_0055a810(this_ptr,(int)&local_10);
      if (iVar1 < 0) {
        *param_2 = *(int *)(*(int *)(this_ptr->unk4 + 0x1c) + iVar2 * 8) + -1;
        return (int *)&DAT_0310eca0;
      }
      iVar2 = iVar2 + 1;
      this_ptr->next_cmd = iVar2;
    } while (iVar2 < *(int *)(this_ptr->unk4 + 0x18));
  }
  DAT_0310ec9c = 0;
  return (int *)0x0;
}
