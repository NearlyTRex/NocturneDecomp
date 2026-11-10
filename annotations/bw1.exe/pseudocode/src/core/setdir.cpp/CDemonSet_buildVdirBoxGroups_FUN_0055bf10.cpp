// Name: core_setdir.cpp_CDemonSet_buildVdirBoxGroups_FUN_0055bf10
// Address: 0055bf10
// Address Range: [[0055bf10, 0055c01d]]
// Convention: __cdecl
// Signature: int __cdecl core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_0055bf10(CDemonSet *this_ptr)

#include "nocturne.h"

int __cdecl core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_0055bf10(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CDemonSet *pCVar4;
  int box_index;
  byte *puVar5;
  SVDBox *pSVar6;
  int local_28;
  int local_24;
  
  iVar1 = 0;
  pCVar4 = this_ptr;
  if (0 < this_ptr->vdir_box_count) {
    do {
      *(uint *)&pCVar4->vdir_boxes[0].field_0x40 = 0xffffffff;
      iVar1 = iVar1 + 1;
      pCVar4 = (CDemonSet *)&pCVar4->cameras[0].field_0x40;
    } while (iVar1 < this_ptr->vdir_box_count);
  }
  local_24 = 0;
  if (0 < this_ptr->vdir_box_count) {
    local_28 = 0;
    do {
      iVar1 = core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_0055c020(this_ptr,local_24);
      box_index = local_24 + 1;
      if (box_index < this_ptr->vdir_box_count) {
        pSVar6 = this_ptr->vdir_boxes + local_24 + 1;
        do {
          iVar2 = core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_0055c020(this_ptr,box_index);
          if (iVar2 != iVar1) {
            puVar5 = &this_ptr->vdir_boxes[0].field_0x0 + local_28;
            iVar3 = core_setdir_cpp_testOBBIntersection_FUN_0055bab0(puVar5,pSVar6);
            if ((iVar3 != 0) ||
               (iVar3 = core_setdir_cpp_testOBBIntersection_FUN_0055bab0(pSVar6,puVar5), iVar3 != 0)
               ) {
              *(int *)&this_ptr->vdir_boxes[iVar2].field_0x40 = iVar1;
            }
          }
          box_index = box_index + 1;
          pSVar6 = pSVar6 + 1;
        } while (box_index < this_ptr->vdir_box_count);
      }
      local_28 = local_28 + 0x44;
      iVar1 = local_24 + 1;
      local_24 = iVar1;
    } while (iVar1 < this_ptr->vdir_box_count);
  }
  return iVar1;
}
