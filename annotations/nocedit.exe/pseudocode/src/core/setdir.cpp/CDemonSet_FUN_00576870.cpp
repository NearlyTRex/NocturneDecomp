// Name: core_setdir.cpp_CDemonSet_FUN_00576870
// Address: 00576870
// Address Range: [[00576870, 005768b5]]
// Convention: __cdecl
// Signature: int core_setdir.cpp_CDemonSet_FUN_00576870(CDemonSet * this_ptr)

#include "nocturne.h"

int __cdecl core_setdir_cpp_CDemonSet_FUN_00576870(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < this_ptr->vdir_box_count) {
    do {
      iVar1 = core_setdir_cpp_CDemonSet_FUN_005762a0(this_ptr);
      if (iVar1 != 0) {
        iVar2 = core_setdir_cpp_CDemonSet_FUN_00576820(this_ptr);
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < this_ptr->vdir_box_count);
  }
  return -1;
}
