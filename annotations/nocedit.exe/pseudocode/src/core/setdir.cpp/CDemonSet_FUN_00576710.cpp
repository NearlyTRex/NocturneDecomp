// Name: core_setdir.cpp_CDemonSet_FUN_00576710
// Address: 00576710
// Address Range: [[00576710, 0057681d]]
// Convention: __cdecl
// Signature: int __cdecl core_setdir_cpp_CDemonSet_FUN_00576710(CDemonSet *this_ptr)

#include "nocturne.h"

int __cdecl core_setdir_cpp_CDemonSet_FUN_00576710(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CDemonSet *pCVar4;
  int iVar5;
  int local_24;
  
  iVar1 = 0;
  pCVar4 = this_ptr;
  if (0 < this_ptr->vdir_box_count) {
    do {
      pCVar4->vdir_boxes[0].unk[4] = -1;
      pCVar4->vdir_boxes[0].unk[5] = -1;
      pCVar4->vdir_boxes[0].unk[6] = -1;
      pCVar4->vdir_boxes[0].unk[7] = -1;
      iVar1 = iVar1 + 1;
      pCVar4 = (CDemonSet *)(pCVar4->cameras[0].name + 0x40);
    } while (iVar1 < this_ptr->vdir_box_count);
  }
  local_24 = 0;
  if (0 < this_ptr->vdir_box_count) {
    do {
      iVar1 = core_setdir_cpp_CDemonSet_FUN_00576820(this_ptr);
      iVar5 = local_24 + 1;
      if (iVar5 < this_ptr->vdir_box_count) {
        do {
          iVar2 = core_setdir_cpp_CDemonSet_FUN_00576820(this_ptr);
          if ((iVar2 != iVar1) &&
             ((iVar3 = core_setdir_cpp_FUN_005763a0(), iVar3 != 0 ||
              (iVar3 = core_setdir_cpp_FUN_005763a0(), iVar3 != 0)))) {
            *(int *)(this_ptr->vdir_boxes[iVar2].unk + 4) = iVar1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < this_ptr->vdir_box_count);
      }
      iVar1 = local_24 + 1;
      local_24 = iVar1;
    } while (iVar1 < this_ptr->vdir_box_count);
  }
  return iVar1;
}
