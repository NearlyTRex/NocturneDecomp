// Name: unkafter_bird.cpp_FUN_0040fac0
// Address: 0040fac0
// Address Range: [[0040fac0, 0040fb35]]
// Convention: unknown
// Signature: void unkafter_bird_cpp_FUN_0040fac0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_bird_cpp_FUN_0040fac0(int param_1)

{
  int iVar1;
  CSkeleton *this_ptr;
  
  core_charactr_cpp_FUN_0042b0e0(param_1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                       ((CDeformableModelInstance *)(param_1 + 0x158));
  DAT_007dff08 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 L Foot",0);
  _DAT_007dff0c = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 R Foot",0);
  iVar1 = DAT_007dff08;
  *(int *)(param_1 + 0x2620) = _DAT_007dff0c;
  *(int *)(param_1 + 0x25a8) = iVar1;
  if (*(int *)(param_1 + 0x27a8) == 0) {
    return;
  }
  *(uint *)(param_1 + 0xfc) = 1;
  return;
}
