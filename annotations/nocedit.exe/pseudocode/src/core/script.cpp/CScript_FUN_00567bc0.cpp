// Name: core_script.cpp_CScript_FUN_00567bc0
// Address: 00567bc0
// Address Range: [[00567bc0, 00567cfa]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_00567bc0(CScript *this_ptr,CStrList *param_2)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_00567bc0(CScript *this_ptr,CStrList *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CCmdParse local_2274 [51];
  int local_21a8;
  byte auStack_2140 [500];
  int aiStack_1f4c [1920];
  char local_14c [300];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  core_script_cpp_CScript_FUN_0055a370(this_ptr);
  local_20 = 0;
  if (0 < *(int *)(this_ptr->unk4 + 0x18)) {
    local_1c = 0;
    do {
      iVar1 = local_1c;
      local_18 = local_1c;
      local_14 = 0;
      do {
        iVar2 = core_script_cpp_CCmdParse_parse_FUN_00561fd0
                          (local_2274,*(int *)(*(int *)(this_ptr->unk4 + 0x1c) + local_18 + 4),
                           *(char **)((int)&PTR_s_label_006441c0_00680e28 + local_14));
        if ((2 < iVar2) && (iVar2 = 0, 0 < local_21a8)) {
          iVar3 = 0;
          do {
            if (*(int *)((int)aiStack_1f4c + iVar3) == 0xd) {
              sprintf
                        (local_14c,"%s\tScript line %d",auStack_2140 + iVar3,
                         *(uint *)(*(int *)(this_ptr->unk4 + 0x1c) + iVar1));
              shape_edittool_cpp_CStrList_add_FUN_004a2b80(param_2,local_14c);
            }
            iVar2 = iVar2 + 1;
            iVar3 = iVar3 + 0x328;
          } while (iVar2 < local_21a8);
        }
        local_14 = local_14 + 4;
      } while (local_14 != 0x1e0);
      local_1c = local_1c + 8;
      local_20 = local_20 + 1;
    } while (local_20 < *(int *)(this_ptr->unk4 + 0x18));
  }
  return;
}
