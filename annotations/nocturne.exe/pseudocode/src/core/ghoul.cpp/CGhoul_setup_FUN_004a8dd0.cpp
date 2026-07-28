// Name: core_ghoul.cpp_CGhoul_setup_FUN_004a8dd0
// Address: 004a8dd0
// Address Range: [[004a8dd0, 004a9031]]
// Convention: unknown
// Signature: void core_ghoul_cpp_CGhoul_setup_FUN_004a8dd0(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_ghoul_cpp_CGhoul_setup_FUN_004a8dd0(CEnemy *param_1)

{
  CDeformableModelInstance *this_ptr;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  float fVar1;
  int iVar2;
  
  this_ptr = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr);
  _DAT_01c78c14 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Head",1);
  _DAT_01c78c20 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_01c78c24 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_01c78c28 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01c78c2c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01c78c30 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Foot",1);
  _DAT_01c78c34 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Foot",1);
  _DAT_01c78c18 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Hand",1);
  _DAT_01c78c1c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Hand",1);
  _DAT_01c78c38 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine",1);
  _DAT_01c78c3c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine2",1);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(this_ptr);
  fVar1 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                           (this_ptr_01,"r high arm01",1);
  param_1[1].base.base.location.position.y = fVar1;
  fVar1 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                           (this_ptr_01,"r lo arm01",1);
  param_1[1].base.base.location.position.z = fVar1;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"l high arm01",1);
  param_1[1].base.base.location.area_id = iVar2;
  fVar1 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                           (this_ptr_01,"l lo arm01",1);
  param_1[1].base.base.orient.vec.x = fVar1;
  fVar1 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                           (this_ptr_01,"r thigh01",1);
  param_1[1].base.base.orient.vec.y = fVar1;
  fVar1 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                           (this_ptr_01,"r shin01",1);
  param_1[1].base.base.orient.vec.z = fVar1;
  fVar1 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                           (this_ptr_01,"l thigh01",1);
  param_1[1].base.base.orient_matrix.m[0].x = fVar1;
  fVar1 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                           (this_ptr_01,"l shin01",1);
  param_1[1].base.base.orient_matrix.m[0].y = fVar1;
  fVar1 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                           (this_ptr_01,"lo torso01",1);
  param_1[1].base.base.orient_matrix.m[0].z = fVar1;
  fVar1 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                           (this_ptr_01,"high torso01",1);
  param_1[1].base.base.orient_matrix.m[1].x = fVar1;
  fVar1 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                           (this_ptr_01,"head01",1);
  param_1[1].base.base.orient_matrix.m[1].y = fVar1;
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  param_1[1].base.base.orient_matrix.m[2].z = 0.0;
  param_1[1].base.base.runtime_state = 0;
  param_1[1].base.base.health = 0;
  param_1[1].base.base.validation_magic = 0;
  param_1[1].base.base.direction_hint = 0;
  param_1[1].base.base.orient_matrix.m[1].z = 0.0;
  param_1[1].base.base.orient_matrix.m[2].x = 0.0;
  param_1[1].base.base.orient_matrix.m[2].y = 0.0;
  return;
}
