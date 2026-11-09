// Name: core_union.cpp_FUN_005a4c00
// Address: 005a4c00
// Address Range: [[005a4c00, 005a4c4e]]
// Convention: unknown
// Signature: void core_union_cpp_FUN_005a4c00(int param_1)

#include "nocturne.h"

void core_union_cpp_FUN_005a4c00(int param_1)

{
  CSkeleton *this_ptr;
  int iVar1;
  
  core_basicnpc_cpp_FUN_005a4870(param_1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       ((CDeformableModelInstance *)(param_1 + 0x2b4));
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 gun1",1);
  *(int *)(param_1 + 0x11858) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 gun12",1);
  *(int *)(param_1 + 0x1185c) = iVar1;
  return;
}
