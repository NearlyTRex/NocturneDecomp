// Name: core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_00576820
// Address: 00576820
// Address Range: [[00576820, 00576861]]
// Convention: __cdecl
// Signature: int __cdecl core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_00576820(CDemonSet *this_ptr,int box_index)

#include "nocturne.h"

int __cdecl core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_00576820(CDemonSet *this_ptr,int box_index)

{
  int iVar1;
  int iVar2;
  
  iVar1 = box_index;
  do {
    iVar2 = iVar1;
    iVar1 = this_ptr->vdir_boxes[iVar2].parent_index;
  } while (-1 < iVar1);
  while (box_index != iVar2) {
    iVar1 = this_ptr->vdir_boxes[box_index].parent_index;
    this_ptr->vdir_boxes[box_index].parent_index = iVar2;
    box_index = iVar1;
  }
  return iVar2;
}
