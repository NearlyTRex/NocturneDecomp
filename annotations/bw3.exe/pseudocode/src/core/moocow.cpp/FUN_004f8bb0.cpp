// Name: core_moocow.cpp_FUN_004f8bb0
// Address: 004f8bb0
// Address Range: [[004f8bb0, 004f8c98]]
// Convention: unknown
// Signature: void core_moocow_cpp_FUN_004f8bb0(int param_1)

#include "nocturne.h"

void core_moocow_cpp_FUN_004f8bb0(int param_1)

{
  CDeformableModelInstance *this_ptr;
  CSkeleton *this_ptr_00;
  int iVar1;
  CDeformableModel *this_ptr_01;
  
  this_ptr = (CDeformableModelInstance *)(param_1 + 0x158);
  core_skeleton_cpp_FUN_0054e6b0(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr);
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine2",1);
  *(int *)(param_1 + 0xcdcc) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Head",1);
  *(int *)(param_1 + 0xcdd0) = iVar1;
  core_charactr_cpp_FUN_0042b0e0(param_1);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(this_ptr);
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,&DAT_005c918f,1);
  *(int *)(param_1 + 0xcdd8) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"lforearm",1);
  *(int *)(param_1 + 0xcddc) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"rforearm",1);
  *(int *)(param_1 + 0xcde0) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"lshin",1);
  *(int *)(param_1 + 0xcde4) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"rshin",1);
  *(int *)(param_1 + 0xcde8) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"torso",1);
  *(int *)(param_1 + 0xcdec) = iVar1;
  return;
}
