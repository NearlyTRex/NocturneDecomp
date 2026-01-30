// Name: core_bride.cpp_FUN_00423810
// Address: 00423810
// Address Range: [[00423810, 00423a04]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_FUN_00423810(void)

#include "nocturne.h"

void __cdecl core_bride_cpp_FUN_00423810(void)

{
  CDeformableModelInstance *this_ptr;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar1;
  float fVar2;
  CEnemy *in_stack_00000004;
  
  this_ptr = &(in_stack_00000004->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  DAT_00822cdc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Head");
  DAT_00822ce8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L ForeArm");
  DAT_00822cec = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R ForeArm");
  INT_00822cf8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Foot");
  INT_00822cfc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Foot");
  DAT_00822ce0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Hand");
  DAT_00822ce4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Hand");
  DAT_00822cf0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L UpperArm");
  DAT_00822cf4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R UpperArm");
  DAT_00822d00 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine");
  INT_00822d04 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2");
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"lshoulderpiece",1);
  *(int *)(in_stack_00000004[1].base.base.actor_name + 8) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"l4armpiece",1);
  *(int *)(in_stack_00000004[1].base.base.actor_name + 0xc) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"rshoulderpiece",1);
  *(int *)(in_stack_00000004[1].base.base.actor_name + 0x10) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"r4armpiece",1);
  *(int *)(in_stack_00000004[1].base.base.actor_name + 0x14) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"lshinpiece",1);
  *(int *)(in_stack_00000004[1].base.base.actor_name + 0x18) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"rshinpiece",1);
  *(int *)(in_stack_00000004[1].base.base.actor_name + 0x1c) = iVar1;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"torsopiece",1);
  in_stack_00000004[1].base.base.location.position.x = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"lowerbodypiece",1);
  in_stack_00000004[1].base.base.location.position.y = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"headpiece",1);
  in_stack_00000004[1].base.base.location.position.z = fVar2;
  core_enemy_cpp_CEnemy_FUN_004a9650(in_stack_00000004);
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,20.0);
  in_stack_00000004[1].base.base.orient.pitch = 0.0;
  in_stack_00000004[1].base.base.orient.bank = 0.0;
  in_stack_00000004[1].base.base.location.area_id = (int)fVar2;
  return;
}
