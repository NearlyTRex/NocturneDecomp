// Name: core_imp.cpp_CImp_setup_FUN_004bb7d0
// Address: 004bb7d0
// Address Range: [[004bb7d0, 004bbac7]]
// Convention: unknown
// Signature: void core_imp_cpp_CImp_setup_FUN_004bb7d0(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_imp_cpp_CImp_setup_FUN_004bb7d0(CEnemy *param_1)

{
  CDeformableModelInstance *this_ptr;
  CEnemy *pCVar1;
  CCharacter *pCVar2;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar3;
  float fVar4;
  uint uVar5;
  
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  this_ptr = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr);
  _DAT_01cae30c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Head",1);
  _DAT_01cae318 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_01cae31c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_01cae320 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01cae324 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01cae328 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Foot",1);
  _DAT_01cae32c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Foot",1);
  _DAT_01cae310 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Hand",1);
  _DAT_01cae314 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Hand",1);
  _DAT_01cae330 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine",1);
  _DAT_01cae334 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine1",1);
  _DAT_01cae338 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine2",1);
  _DAT_01cae30c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Head",1);
  _DAT_01cae320 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01cae324 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01cae330 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine",1);
  _DAT_01cae338 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine2",1);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(this_ptr);
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"larm01",1);
  *(int *)(param_1[1].base.base.actor_name + 0xc) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"l4arm01",1);
  *(int *)(param_1[1].base.base.actor_name + 0x10) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"rarm01",1);
  *(int *)(param_1[1].base.base.actor_name + 0x14) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"r4arm01",1);
  *(int *)(param_1[1].base.base.actor_name + 0x18) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"rthigh01",1);
  *(int *)(param_1[1].base.base.actor_name + 0x1c) = iVar3;
  fVar4 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                           (this_ptr_01,"rshin01",1);
  param_1[1].base.base.location.position.x = fVar4;
  fVar4 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                           (this_ptr_01,"lthigh01",1);
  param_1[1].base.base.location.position.y = fVar4;
  fVar4 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                           (this_ptr_01,"lshin01",1);
  param_1[1].base.base.location.position.z = fVar4;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"ass01",1);
  param_1[1].base.base.location.area_id = iVar3;
  fVar4 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                           (this_ptr_01,"torso01",1);
  param_1[1].base.base.orient.vec.x = fVar4;
  fVar4 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                           (this_ptr_01,"head01",1);
  pCVar1 = param_1 + 1;
  (pCVar1->base).base.actor_name[0] = '\0';
  (pCVar1->base).base.actor_name[1] = '\0';
  (pCVar1->base).base.actor_name[2] = '\0';
  (pCVar1->base).base.actor_name[3] = '\0';
  pCVar2 = &param_1[1].base;
  (pCVar2->base).actor_name[4] = '\0';
  (pCVar2->base).actor_name[5] = '\0';
  (pCVar2->base).actor_name[6] = '\0';
  (pCVar2->base).actor_name[7] = '\0';
  param_1[1].base.base.orient.vec.y = fVar4;
  (param_1->base).carry_hands[0].bone_index = _DAT_01cae310;
  (param_1->base).carry_hands[0].secondary_bone_index =
       *(int *)(param_1[1].base.base.actor_name + 0x10);
  (param_1->base).carry_hands[1].bone_index = _DAT_01cae314;
  (param_1->base).carry_hands[1].secondary_bone_index =
       *(int *)(param_1[1].base.base.actor_name + 0x18);
  uVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x41200000,0x41a00000);
  *(uint *)(param_1[1].base.base.actor_name + 8) = uVar5;
  return;
}
