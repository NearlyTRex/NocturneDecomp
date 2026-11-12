// Name: core_yow.cpp_FUN_005863e0
// Address: 005863e0
// Address Range: [[005863e0, 005864a5]]
// Convention: unknown
// Signature: void core_yow_cpp_FUN_005863e0(CEnemy *param_1)

#include "nocturne.h"

void core_yow_cpp_FUN_005863e0(CEnemy *param_1)

{
  CDeformableModelInstance *this_ptr;
  CSkeleton *this_ptr_00;
  int iVar1;
  
  this_ptr = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Spine1",1);
  *(int *)param_1[1].base.base.actor_name = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Head",1);
  *(int *)(param_1[1].base.base.actor_name + 4) = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Pelvis",1);
  *(int *)(param_1[1].base.base.actor_name + 8) = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Spine",1);
  *(int *)(param_1[1].base.base.actor_name + 0xc) = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Spine1",1);
  *(int *)(param_1[1].base.base.actor_name + 0x10) = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Spine2",1);
  *(int *)(param_1[1].base.base.actor_name + 0x14) = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Head",1);
  *(int *)(param_1[1].base.base.actor_name + 0x18) = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  return;
}
