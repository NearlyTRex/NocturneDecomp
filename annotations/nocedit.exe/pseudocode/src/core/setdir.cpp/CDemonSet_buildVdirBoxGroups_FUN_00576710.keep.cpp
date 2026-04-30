// Name: core_setdir.cpp_CDemonSet_buildVdirBoxGroups_FUN_00576710
// Address: 00576710
// MANUAL RECONSTRUCTION
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
  int box_index;
  SVDBox *obb_a;
  SVDBox *obb_b;
  int local_24;
  
  for (iVar1 = 0; iVar1 < this_ptr->vdir_box_count; iVar1 = iVar1 + 1) {
    this_ptr->vdir_boxes[iVar1].parent_index = -1;
  }
  for (local_24 = 0; local_24 < this_ptr->vdir_box_count; local_24 = local_24 + 1) {
    iVar4 = core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_00576820(this_ptr,local_24);
    obb_a = &this_ptr->vdir_boxes[local_24];
    for (box_index = local_24 + 1; box_index < this_ptr->vdir_box_count;
         box_index = box_index + 1) {
      iVar2 = core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_00576820(this_ptr,box_index);
      if (iVar2 != iVar4) {
        obb_b = &this_ptr->vdir_boxes[box_index];
        iVar3 = core_setdir_cpp_testOBBIntersection_FUN_005763a0(obb_a,obb_b);
        if ((iVar3 != 0) ||
           (iVar5 = core_setdir_cpp_testOBBIntersection_FUN_005763a0(obb_b,obb_a), iVar5 != 0))
        {
          this_ptr->vdir_boxes[iVar2].parent_index = iVar4;
        }
      }
    }
    iVar1 = local_24 + 1;
  }
  return iVar1;
}
