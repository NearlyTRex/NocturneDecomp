// Name: core_batcreat.cpp_CBatCreature_setup_FUN_00412160
// Address: 00412160
// Address Range: [[00412160, 00412459]]
// Convention: unknown
// Signature: void core_batcreat_cpp_CBatCreature_setup_FUN_00412160(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_batcreat_cpp_CBatCreature_setup_FUN_00412160(CEnemy *param_1)

{
  CDeformableModelInstance *this_ptr;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar1;
  float fVar2;
  
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  this_ptr = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr);
  DAT_0076459c = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_00,"Bip01 Head",1);
  _DAT_007645a8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_007645ac =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_007645b0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_007645b4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_007645b8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Foot",1);
  _DAT_007645bc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Foot",1);
  _DAT_007645a0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Hand",1);
  DAT_007645a4 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_00,"Bip01 R Hand",1);
  _DAT_007645c0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine",1);
  _DAT_007645c4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine1",1);
  _DAT_007645c8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine2",1);
  DAT_0076459c = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_00,"Bip01 Head",1);
  _DAT_007645b0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_007645b4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_007645c0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine",1);
  _DAT_007645c8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine2",1);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(this_ptr);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"head01",1);
  *(int *)param_1[1].base.base.actor_name = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"torso01",1);
  *(int *)(param_1[1].base.base.actor_name + 4) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"ass01",1);
  *(int *)(param_1[1].base.base.actor_name + 8) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"tail01",1);
  *(int *)(param_1[1].base.base.actor_name + 0xc) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"lthigh01",1);
  *(int *)(param_1[1].base.base.actor_name + 0x10) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"lshin01",1);
  *(int *)(param_1[1].base.base.actor_name + 0x14) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"rthigh01",1);
  *(int *)(param_1[1].base.base.actor_name + 0x18) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"rshin01",1);
  *(int *)(param_1[1].base.base.actor_name + 0x1c) = iVar1;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                           (this_ptr_01,"larm01",1);
  param_1[1].base.base.location.position.x = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                           (this_ptr_01,"l4arm01",1);
  param_1[1].base.base.location.position.y = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                           (this_ptr_01,"rarm01",1);
  param_1[1].base.base.location.position.z = fVar2;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"r4arm01",1);
  param_1[1].base.base.location.area_id = iVar1;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                           (this_ptr_01,"lwing",1);
  param_1[1].base.base.orient.vec.x = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                           (this_ptr_01,"rwing",1);
  param_1[1].base.base.orient.vec.z = 0.0;
  param_1[1].base.base.orient_matrix.m[0].x = 0.0;
  param_1[1].base.base.orient_matrix.m[0].y = 0.0;
  param_1[1].base.base.orient_matrix.m[0].z = 0.0;
  param_1[1].base.base.orient.vec.y = fVar2;
  return;
}
