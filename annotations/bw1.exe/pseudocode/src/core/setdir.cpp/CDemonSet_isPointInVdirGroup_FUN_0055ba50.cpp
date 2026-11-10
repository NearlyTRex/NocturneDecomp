// Name: core_setdir.cpp_CDemonSet_isPointInVdirGroup_FUN_0055ba50
// Address: 0055ba50
// Address Range: [[0055ba50, 0055baae]]
// Convention: __cdecl
// Signature: int __cdecl core_setdir_cpp_CDemonSet_isPointInVdirGroup_FUN_0055ba50(CDemonSet *this_ptr,int box_index,CVector3f *point)

#include "nocturne.h"

int __cdecl core_setdir_cpp_CDemonSet_isPointInVdirGroup_FUN_0055ba50(CDemonSet *this_ptr,int box_index,CVector3f *point)

{
  int iVar1;
  int iVar2;
  int box_index_00;
  
  box_index_00 = 0;
  iVar1 = core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_0055c020(this_ptr,box_index);
  if (0 < this_ptr->vdir_box_count) {
    do {
      iVar2 = core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_0055c020(this_ptr,box_index_00);
      if (iVar2 == iVar1) {
        iVar2 = core_setdir_cpp_FUN_0055b990(this_ptr,box_index_00,point);
        if (iVar2 != 0) {
          return 1;
        }
      }
      box_index_00 = box_index_00 + 1;
    } while (box_index_00 < this_ptr->vdir_box_count);
  }
  return 0;
}
