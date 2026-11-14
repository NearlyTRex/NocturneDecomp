// Name: core_setdir.cpp_CDemonSet_findVdirBoxAtPosition_FUN_0053a760
// Address: 0053a760
// Address Range: [[0053a760, 0053a7a5]]
// Convention: __cdecl
// Signature: int __cdecl core_setdir_cpp_CDemonSet_findVdirBoxAtPosition_FUN_0053a760(CDemonSet *this_ptr,CVector3f *position)

#include "nocturne.h"

int __cdecl core_setdir_cpp_CDemonSet_findVdirBoxAtPosition_FUN_0053a760(CDemonSet *this_ptr,CVector3f *position)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < this_ptr->vdir_box_count) {
    do {
      iVar1 = core_setdir_cpp_FUN_0053a090(this_ptr,iVar2,position);
      if (iVar1 != 0) {
        iVar2 = core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_0053a720(this_ptr,iVar2);
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < this_ptr->vdir_box_count);
  }
  return -1;
}
