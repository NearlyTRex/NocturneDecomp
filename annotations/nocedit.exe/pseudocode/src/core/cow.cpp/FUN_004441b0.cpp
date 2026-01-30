// Name: core_cow.cpp_FUN_004441b0
// Address: 004441b0
// Address Range: [[004441b0, 004442f0]]
// Convention: __cdecl
// Signature: void __cdecl core_cow_cpp_FUN_004441b0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_cow.cpp_FUN_004441b0(uint param_1) */

void __cdecl core_cow_cpp_FUN_004441b0(void)

{
  CDeformableModelInstance *this_ptr;
  CSkeleton *this_ptr_00;
  int iVar1;
  CDeformableModel *this_ptr_01;
  float fVar2;
  CEnemy *in_stack_00000004;
  
  this_ptr = &(in_stack_00000004->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 Spine2");
  *(int *)(in_stack_00000004[1].base.base.actor_name + 8) = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 Head");
  *(int *)(in_stack_00000004[1].base.base.actor_name + 0xc) = iVar1;
  core_enemy_cpp_CEnemy_FUN_004a9650(in_stack_00000004);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"head01",1);
  *(int *)(in_stack_00000004[1].base.base.actor_name + 0x14) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"neck01",1);
  *(int *)(in_stack_00000004[1].base.base.actor_name + 0x18) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"lfrontleg01",1);
  *(int *)(in_stack_00000004[1].base.base.actor_name + 0x1c) = iVar1;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"rfrontleg01",1);
  in_stack_00000004[1].base.base.location.position.x = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"rbackleg01",1);
  in_stack_00000004[1].base.base.location.position.y = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"lbackleg01",1);
  in_stack_00000004[1].base.base.location.position.z = fVar2;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"torso01",1);
  in_stack_00000004[1].base.base.location.area_id = iVar1;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"utter01",1);
  in_stack_00000004[1].base.base.orient.pitch = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"back01",1);
  in_stack_00000004[1].base.base.orient.bank = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"tail01",1);
  in_stack_00000004[1].base.base.orient.heading = fVar2;
  return;
}
