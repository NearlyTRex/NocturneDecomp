// Name: core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_0055c020
// Address: 0055c020
// Address Range: [[0055c020, 0055c05a]]
// Convention: __cdecl
// Signature: int __cdecl core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_0055c020(CDemonSet *this_ptr,int box_index)

#include "nocturne.h"

int __cdecl core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_0055c020(CDemonSet *this_ptr,int box_index)

{
  int iVar1;
  int iVar2;
  
  iVar1 = box_index;
  do {
    iVar2 = iVar1;
    iVar1 = *(int *)&this_ptr->vdir_boxes[iVar2].field_0x40;
  } while (-1 < iVar1);
  while (box_index != iVar2) {
    iVar1 = *(int *)&this_ptr->vdir_boxes[box_index].field_0x40;
    *(int *)&this_ptr->vdir_boxes[box_index].field_0x40 = iVar2;
    box_index = iVar1;
  }
  return iVar2;
}
