// Name: core_schngeis.cpp_FUN_005a3140
// Address: 005a3140
// Address Range: [[005a3140, 005a31ba]]
// Convention: unknown
// Signature: void core_schngeis_cpp_FUN_005a3140(int param_1)

#include "nocturne.h"

void core_schngeis_cpp_FUN_005a3140(int param_1)

{
  CSkeleton *this_ptr;
  int iVar1;
  
  unkafter_basicene_cpp_FUN_0059e6a0(param_1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       ((CDeformableModelInstance *)(param_1 + 0x2b4));
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Tongue",1);
  *(int *)(param_1 + 0x11850) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Dummy07",1);
  *(int *)(param_1 + 0x11854) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Tongue",1);
  *(int *)(param_1 + 0x11858) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Finger0",1);
  *(int *)(param_1 + 0x1185c) = iVar1;
  return;
}
