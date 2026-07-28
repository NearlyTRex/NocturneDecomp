// Name: core_mobster.cpp_CMobster_setup_FUN_004da290
// Address: 004da290
// Address Range: [[004da290, 004da59f]]
// Convention: unknown
// Signature: void core_mobster_cpp_CMobster_setup_FUN_004da290(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mobster_cpp_CMobster_setup_FUN_004da290(CEnemy *param_1)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  CCharacter *pCVar2;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar3;
  
  this_ptr = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr);
  _DAT_01ccdba8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Head",1);
  _DAT_01ccdbb4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_01ccdbb8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_01ccdbbc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01ccdbc0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01ccdbc4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Foot",1);
  _DAT_01ccdbc8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Foot",1);
  _DAT_01ccdbac =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Hand",1);
  _DAT_01ccdbb0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Hand",1);
  _DAT_01ccdbcc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine",1);
  _DAT_01ccdbd0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine1",1);
  _DAT_01ccdbd4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine2",1);
  _DAT_01ccdba8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Head",1);
  _DAT_01ccdbbc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01ccdbc0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01ccdbcc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine",1);
  _DAT_01ccdbd4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine2",1);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(this_ptr);
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"larm01",1);
  *(int *)(param_1[1].base.base.create_event + 0x2c) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"l4arm01",1);
  *(int *)(param_1[1].base.base.create_event + 0x30) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"rarm01",1);
  *(int *)(param_1[1].base.base.create_event + 0x34) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"r4arm01",1);
  *(int *)(param_1[1].base.base.create_event + 0x38) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"rthigh01",1);
  *(int *)(param_1[1].base.base.create_event + 0x3c) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"rshin01",1);
  *(int *)(param_1[1].base.base.create_event + 0x40) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"lthigh01",1);
  *(int *)(param_1[1].base.base.create_event + 0x44) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"lshin01",1);
  *(int *)(param_1[1].base.base.create_event + 0x48) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"waist01",1);
  *(int *)(param_1[1].base.base.create_event + 0x4c) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"torso01",1);
  *(int *)(param_1[1].base.base.create_event + 0x50) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"head01",1);
  *(int *)(param_1[1].base.base.create_event + 0x54) = iVar3;
  (param_1->base).carry_hands[0].bone_index = _DAT_01ccdbac;
  (param_1->base).carry_hands[0].secondary_bone_index =
       *(int *)(param_1[1].base.base.create_event + 0x30);
  (param_1->base).carry_hands[1].bone_index = _DAT_01ccdbb0;
  (param_1->base).carry_hands[1].secondary_bone_index =
       *(int *)(param_1[1].base.base.create_event + 0x38);
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  pCVar2 = &param_1[1].base;
  (pCVar2->base).create_event[0x58] = '\0';
  (pCVar2->base).create_event[0x59] = '\0';
  (pCVar2->base).create_event[0x5a] = '\0';
  (pCVar2->base).create_event[0x5b] = '\0';
  fVar1 = param_1[1].base.base.location.position.x;
  pCVar2 = &param_1[1].base;
  (pCVar2->base).create_event[0x5c] = '\0';
  (pCVar2->base).create_event[0x5d] = '\0';
  (pCVar2->base).create_event[0x5e] = '\0';
  (pCVar2->base).create_event[0x5f] = '\0';
  if (fVar1 != 0.0) {
    param_1->allow_pathfind_to_new_targets = 1;
  }
  pCVar2 = &param_1[1].base;
  (pCVar2->base).create_event[0x20] = '\0';
  (pCVar2->base).create_event[0x21] = '\0';
  (pCVar2->base).create_event[0x22] = '\0';
  (pCVar2->base).create_event[0x23] = '\0';
  pCVar2 = &param_1[1].base;
  (pCVar2->base).create_event[0x24] = '\0';
  (pCVar2->base).create_event[0x25] = '\0';
  (pCVar2->base).create_event[0x26] = '\0';
  (pCVar2->base).create_event[0x27] = '\0';
  pCVar2 = &param_1[1].base;
  (pCVar2->base).create_event[0x28] = '\0';
  (pCVar2->base).create_event[0x29] = '\0';
  (pCVar2->base).create_event[0x2a] = '\0';
  (pCVar2->base).create_event[0x2b] = '\0';
  pCVar2 = &param_1[1].base;
  (pCVar2->base).create_event[0x1c] = '\0';
  (pCVar2->base).create_event[0x1d] = '\0';
  (pCVar2->base).create_event[0x1e] = '\0';
  (pCVar2->base).create_event[0x1f] = '\0';
  return;
}
