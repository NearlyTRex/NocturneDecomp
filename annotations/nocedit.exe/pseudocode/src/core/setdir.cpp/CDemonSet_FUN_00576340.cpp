// Name: core_setdir.cpp_CDemonSet_FUN_00576340
// Address: 00576340
// Address Range: [[00576340, 0057639e]]
// Convention: __cdecl
// Signature: int __cdecl core_setdir_cpp_CDemonSet_FUN_00576340(CDemonSet *this_ptr)

#include "nocturne.h"

int __cdecl core_setdir_cpp_CDemonSet_FUN_00576340(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = core_setdir_cpp_CDemonSet_FUN_00576820(this_ptr);
  if (0 < this_ptr->vdir_box_count) {
    do {
      iVar2 = core_setdir_cpp_CDemonSet_FUN_00576820(this_ptr);
      if (iVar2 == iVar1) {
        iVar2 = core_setdir_cpp_CDemonSet_FUN_005762a0(this_ptr);
        if (iVar2 != 0) {
          return 1;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < this_ptr->vdir_box_count);
  }
  return 0;
}
