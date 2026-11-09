// Name: core_confedrt.cpp_FUN_005a0a90
// Address: 005a0a90
// Address Range: [[005a0a90, 005a0b18]]
// Convention: unknown
// Signature: void core_confedrt_cpp_FUN_005a0a90(int param_1)

#include "nocturne.h"

void core_confedrt_cpp_FUN_005a0a90(int param_1)

{
  CSkeleton *this_ptr;
  int iVar1;
  
  unkafter_basicene_cpp_FUN_0059e6a0(param_1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       ((CDeformableModelInstance *)(param_1 + 0x2b4));
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 gun1",1);
  *(int *)(param_1 + 0x11858) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 gun12",1);
  *(int *)(param_1 + 0x1185c) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00540e80
                    (*(CSkeleton **)(param_1 + 0x113b0),"Bip01 Spine",1);
  *(int *)(param_1 + 0x11860) = iVar1;
  unkaddr_005a7eb0_cpp_FUN_005a8030(param_1 + 0x154,0x100);
  unkaddr_005a7eb0_cpp_FUN_005a8050(param_1 + 0x154,param_1);
  return;
}
