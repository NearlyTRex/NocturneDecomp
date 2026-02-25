// Name: core_setdir.cpp_CDemonSet_findVdirBoxAtPosition_FUN_00576870
// Address: 00576870
// Address Range: [[00576870, 005768b5]]
// Convention: __cdecl
// Signature: int __cdecl core_setdir_cpp_CDemonSet_findVdirBoxAtPosition_FUN_00576870(CDemonSet *this_ptr,CVector3f *position)

#include "nocturne.h"

int __cdecl core_setdir_cpp_CDemonSet_findVdirBoxAtPosition_FUN_00576870(CDemonSet *this_ptr,CVector3f *position)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < this_ptr->vdir_box_count) {
    do {
      iVar1 = core_setdir_cpp_CDemonSet_FUN_005762a0(this_ptr);
      if (iVar1 != 0) {
        iVar2 = core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_00576820(this_ptr,iVar2);
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < this_ptr->vdir_box_count);
  }
  return -1;
}
