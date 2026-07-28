// Name: core_cow.cpp_CZombieCow_setup_FUN_0043bc50
// Address: 0043bc50
// Address Range: [[0043bc50, 0043bd90]]
// Convention: unknown
// Signature: void core_cow_cpp_CZombieCow_setup_FUN_0043bc50(CEnemy *param_1)

#include "nocturne.h"

void core_cow_cpp_CZombieCow_setup_FUN_0043bc50(CEnemy *param_1)

{
  CDeformableModelInstance *this_ptr;
  CSkeleton *this_ptr_00;
  int iVar1;
  CDeformableModel *this_ptr_01;
  float fVar2;
  
  this_ptr = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine2",1);
  *(int *)param_1[1].base.base.actor_name = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Head",1);
  *(int *)(param_1[1].base.base.actor_name + 4) = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(this_ptr);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"head01",1);
  *(int *)(param_1[1].base.base.actor_name + 0xc) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"neck01",1);
  *(int *)(param_1[1].base.base.actor_name + 0x10) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"lfrontleg01",1);
  *(int *)(param_1[1].base.base.actor_name + 0x14) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"rfrontleg01",1);
  *(int *)(param_1[1].base.base.actor_name + 0x18) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"rbackleg01",1);
  *(int *)(param_1[1].base.base.actor_name + 0x1c) = iVar1;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                           (this_ptr_01,"lbackleg01",1);
  param_1[1].base.base.location.position.x = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                           (this_ptr_01,"torso01",1);
  param_1[1].base.base.location.position.y = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                           (this_ptr_01,"utter01",1);
  param_1[1].base.base.location.position.z = fVar2;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"back01",1);
  param_1[1].base.base.location.area_id = iVar1;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                           (this_ptr_01,"tail01",1);
  param_1[1].base.base.orient.vec.x = fVar2;
  return;
}
