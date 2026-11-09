// Name: core_asgaya.cpp_FUN_005a0b00
// Address: 005a0b00
// Address Range: [[005a0b00, 005a0bd8]]
// Convention: unknown
// Signature: void core_asgaya_cpp_FUN_005a0b00(int param_1)

#include "nocturne.h"

void core_asgaya_cpp_FUN_005a0b00(int param_1)

{
  CSkeleton *this_ptr;
  int iVar1;
  CDeformableModelInstance *this_ptr_00;
  
  core_npc_cpp_FUN_00509020(param_1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                       ((CDeformableModelInstance *)(param_1 + 0x158));
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 R Hand",1);
  *(int *)(param_1 + 0x33fb8) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 L Hand",1);
  *(uint *)(param_1 + 0x33fac) = 0x3f400000;
  *(uint *)(param_1 + 0x33fc0) = 0;
  *(int *)(param_1 + 0x33fbc) = iVar1;
  *(uint *)(param_1 + 0x25a8) = *(uint *)(param_1 + 0x33fb8);
  if (*(int *)(param_1 + 0x27a8) != 0) {
    *(uint *)(param_1 + 0xfc) = 1;
  }
  core_fire_cpp_FUN_004a4130(0x01C73654,3);
  core_fire_cpp_FUN_004a41d0(0x01C73654,4);
  core_charactr_cpp_FUN_0042f280(1);
  this_ptr_00 = (CDeformableModelInstance *)(param_1 + 0x158);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090(this_ptr_00);
  core_skeleton_cpp_FUN_0054dd10(this_ptr_00);
  core_skeleton_cpp_FUN_0054e6b0(this_ptr_00);
  core_skeleton_cpp_FUN_0054c110(this_ptr_00);
  return;
}
