// Name: core_bride.cpp_CBride_setup_FUN_0041fc20
// Address: 0041fc20
// Address Range: [[0041fc20, 0041fe3f]]
// Convention: unknown
// Signature: void core_bride_cpp_CBride_setup_FUN_0041fc20(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bride_cpp_CBride_setup_FUN_0041fc20(CEnemy *param_1)

{
  CDeformableModelInstance *this_ptr;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar1;
  float fVar2;
  
  this_ptr = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr);
  DAT_00764b2c = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_00,"Bip01 Head",1);
  DAT_00764b38 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_00,"Bip01 L ForeArm",1);
  DAT_00764b3c = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_00764b48 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Foot",1);
  _DAT_00764b4c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Foot",1);
  DAT_00764b30 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_00,"Bip01 L Hand",1);
  DAT_00764b34 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_00,"Bip01 R Hand",1);
  DAT_00764b40 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_00,"Bip01 L UpperArm",1);
  DAT_00764b44 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_00,"Bip01 R UpperArm",1);
  DAT_00764b50 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_00,"Bip01 Spine",1);
  _DAT_00764b54 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine2",1);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(this_ptr);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"lshoulderpiece",1);
  *(int *)param_1[1].base.base.actor_name = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"l4armpiece",1);
  *(int *)(param_1[1].base.base.actor_name + 4) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"rshoulderpiece",1);
  *(int *)(param_1[1].base.base.actor_name + 8) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"r4armpiece",1);
  *(int *)(param_1[1].base.base.actor_name + 0xc) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"lshinpiece",1);
  *(int *)(param_1[1].base.base.actor_name + 0x10) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"rshinpiece",1);
  *(int *)(param_1[1].base.base.actor_name + 0x14) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"torsopiece",1);
  *(int *)(param_1[1].base.base.actor_name + 0x18) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"lowerbodypiece",1);
  *(int *)(param_1[1].base.base.actor_name + 0x1c) = iVar1;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                           (this_ptr_01,"headpiece",1);
  param_1[1].base.base.location.position.x = fVar2;
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  fVar2 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40000000,0x41a00000);
  param_1[1].base.base.location.position.z = 0.0;
  param_1[1].base.base.location.area_id = 0;
  param_1[1].base.base.location.position.y = fVar2;
  return;
}
