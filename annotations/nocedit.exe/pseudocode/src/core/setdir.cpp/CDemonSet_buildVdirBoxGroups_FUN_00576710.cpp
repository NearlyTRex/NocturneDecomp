// Name: core_setdir.cpp_CDemonSet_buildVdirBoxGroups_FUN_00576710
// Address: 00576710
// Address Range: [[00576710, 0057681d]]
// Convention: __cdecl
// Signature: int __cdecl core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_00576710(CDemonSet *this_ptr)

#include "nocturne.h"

int __cdecl core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_00576710(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar4;
  int iVar5;
  int iVar2;
  int iVar3;
  CDemonSet *pCVar4;
  int box_index;
  SVDBox *obb_a;
  SVDBox *obb_b;
  int local_28;
  int local_24;
  
  iVar1 = 0;
  pCVar4 = this_ptr;
  if (0 < this_ptr->vdir_box_count) {
    do {
      pCVar4->vdir_boxes[0].parent_index = -1;
      iVar1 = iVar1 + 1;
      pCVar4 = (CDemonSet *)(pCVar4->cameras[0].name + 0x40);
    } while (iVar1 < this_ptr->vdir_box_count);
  }
  local_24 = 0;
  if (0 < this_ptr->vdir_box_count) {
    local_28 = 0;
    do {
      iVar4 = core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_00576820(this_ptr,local_24);
      box_index = local_24 + 1;
      if (box_index < this_ptr->vdir_box_count) {
        obb_b = this_ptr->vdir_boxes + local_24 + 1;
        do {
          iVar2 = core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_00576820(this_ptr,box_index);
          if (iVar2 != iVar4) {
            obb_a = (SVDBox *)((int)(this_ptr->vdir_boxes[0].rotation_matrix.m + -2) + local_28);
            iVar3 = core_setdir_cpp_testOBBIntersection_FUN_005763a0(obb_a,obb_b);
            if ((iVar3 != 0) ||
               (iVar5 = core_setdir_cpp_testOBBIntersection_FUN_005763a0(obb_b,obb_a), iVar5 != 0))
            {
              this_ptr->vdir_boxes[iVar2].parent_index = iVar4;
            }
          }
          box_index = box_index + 1;
          obb_b = obb_b + 1;
        } while (box_index < this_ptr->vdir_box_count);
      }
      local_28 = local_28 + 0x44;
      iVar1 = local_24 + 1;
      local_24 = iVar1;
    } while (iVar1 < this_ptr->vdir_box_count);
  }
  return iVar1;
}
