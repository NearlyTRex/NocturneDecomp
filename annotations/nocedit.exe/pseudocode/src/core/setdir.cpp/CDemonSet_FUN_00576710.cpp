// Name: core_setdir.cpp_CDemonSet_FUN_00576710
// Address: 00576710
// Address Range: [[00576710, 0057681d]]
// Convention: __cdecl
// Signature: int core_setdir.cpp_CDemonSet_FUN_00576710(CDemonSet * this_ptr)

#include "nocturne.h"

int __cdecl core_setdir_cpp_CDemonSet_FUN_00576710(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  CDemonSet *pCVar3;
  uint unaff_ESI;
  int iVar4;
  int unaff_EDI;
  int local_24;
  int local_18;
  
  iVar1 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->vdir_box_count) {
    do {
      pCVar3->vdir_boxes[0].field3_0x3c[4] = -1;
      pCVar3->vdir_boxes[0].field3_0x3c[5] = -1;
      pCVar3->vdir_boxes[0].field3_0x3c[6] = -1;
      pCVar3->vdir_boxes[0].field3_0x3c[7] = -1;
      iVar1 = iVar1 + 1;
      pCVar3 = (CDemonSet *)(pCVar3->cameras[0].name + 0x40);
    } while (iVar1 < this_ptr->vdir_box_count);
  }
  local_24 = 0;
  if (0 < this_ptr->vdir_box_count) {
    do {
      core_setdir_cpp_CDemonSet_FUN_00576820(this_ptr);
      iVar1 = local_24 + 1;
      if (iVar1 < this_ptr->vdir_box_count) {
        iVar4 = iVar1 * 0x44 + local_18;
        do {
          iVar2 = core_setdir_cpp_CDemonSet_FUN_00576820(this_ptr);
          if ((iVar2 != unaff_EDI) &&
             ((iVar2 = core_setdir_cpp_FUN_005763a0(), local_24 = iVar4, iVar2 != 0 ||
              (iVar2 = core_setdir_cpp_FUN_005763a0(), iVar2 != 0)))) {
            *(uint *)(this_ptr->vdir_boxes[unaff_EDI].field3_0x3c + 4) = unaff_ESI;
          }
          iVar1 = iVar1 + 1;
          iVar4 = iVar4 + 0x44;
        } while (iVar1 < this_ptr->vdir_box_count);
      }
      iVar1 = local_24 + 1;
      local_24 = iVar1;
    } while (iVar1 < this_ptr->vdir_box_count);
  }
  return iVar1;
}
