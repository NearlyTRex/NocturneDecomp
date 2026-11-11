// Name: core_zombiepriest.cpp_FUN_0058d5e0
// Address: 0058d5e0
// Address Range: [[0058d5e0, 0058d937]]
// Convention: unknown
// Signature: void core_zombiepriest_cpp_FUN_0058d5e0(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_zombiepriest_cpp_FUN_0058d5e0(CEnemy *param_1)

{
  CDeformableModelInstance *this_ptr;
  CCharacter *pCVar1;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar2;
  SMotion *pSVar3;
  
  if ((param_1->base).been_damaged == 0) {
    param_1->attack_damage = 10.0;
    param_1->pain_threshold = 15.0;
    (param_1->base).hit_points = 125.0;
  }
  this_ptr = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr);
  _DAT_02d24970 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Head",1);
  _DAT_02d2497c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_02d24980 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_02d24984 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_02d24988 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_02d2498c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 L Foot",1);
  _DAT_02d24990 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 R Foot",1);
  _DAT_02d24974 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 L Hand",1);
  _DAT_02d24978 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 R Hand",1);
  _DAT_02d24994 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Spine",1);
  _DAT_02d24998 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Spine1",1);
  _DAT_02d2499c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Spine2",1);
  _DAT_02d24970 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Head",1);
  _DAT_02d24984 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_02d24988 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_02d24994 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Spine",1);
  _DAT_02d2499c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Spine2",1);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(this_ptr);
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_01,"larm01",1);
  *(int *)(param_1[1].base.base.create_event + 0x14) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_01,"l4arm01",1);
  *(int *)(param_1[1].base.base.create_event + 0x18) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_01,"rarm01",1);
  *(int *)(param_1[1].base.base.create_event + 0x1c) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_01,"r4arm01",1);
  *(int *)(param_1[1].base.base.create_event + 0x20) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_01,"rthigh01",1);
  *(int *)(param_1[1].base.base.create_event + 0x24) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_01,"rshin01",1);
  *(int *)(param_1[1].base.base.create_event + 0x28) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_01,"lthigh01",1);
  *(int *)(param_1[1].base.base.create_event + 0x2c) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_01,"lshin01",1);
  *(int *)(param_1[1].base.base.create_event + 0x30) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_01,"waist01",1);
  *(int *)(param_1[1].base.base.create_event + 0x34) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_01,"torso01",1);
  *(int *)(param_1[1].base.base.create_event + 0x38) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_01,"head01",1);
  *(int *)(param_1[1].base.base.create_event + 0x3c) = iVar2;
  (param_1->base).carry_hands[0].bone_index = _DAT_02d24974;
  (param_1->base).carry_hands[0].secondary_bone_index =
       *(int *)(param_1[1].base.base.create_event + 0x18);
  (param_1->base).carry_hands[1].bone_index = _DAT_02d24978;
  (param_1->base).carry_hands[1].secondary_bone_index =
       *(int *)(param_1[1].base.base.create_event + 0x20);
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  pCVar1 = &param_1[1].base;
  (pCVar1->base).create_event[0x40] = '\0';
  (pCVar1->base).create_event[0x41] = '\0';
  (pCVar1->base).create_event[0x42] = '\0';
  (pCVar1->base).create_event[0x43] = '\0';
  iVar2 = *(int *)(param_1[1].base.base.actor_name + 0x14);
  pCVar1 = &param_1[1].base;
  (pCVar1->base).create_event[0x44] = '\0';
  (pCVar1->base).create_event[0x45] = '\0';
  (pCVar1->base).create_event[0x46] = '\0';
  (pCVar1->base).create_event[0x47] = '\0';
  if (iVar2 != 0) {
    param_1->allow_pathfind_to_new_targets = 1;
  }
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     (&(param_1->base).model.base);
  if (pSVar3->state_index == 5) {
    (param_1->base).health_bar_mode = HEALTH_BAR_NONE;
  }
  else {
    (param_1->base).health_bar_mode = HEALTH_BAR_ALWAYS;
  }
  pCVar1 = &param_1[1].base;
  (pCVar1->base).create_event[0xc] = '\0';
  (pCVar1->base).create_event[0xd] = '\0';
  (pCVar1->base).create_event[0xe] = '\0';
  (pCVar1->base).create_event[0xf] = '\0';
  pCVar1 = &param_1[1].base;
  (pCVar1->base).create_event[0x10] = '\0';
  (pCVar1->base).create_event[0x11] = '\0';
  (pCVar1->base).create_event[0x12] = '\0';
  (pCVar1->base).create_event[0x13] = '\0';
  pCVar1 = &param_1[1].base;
  (pCVar1->base).create_event[8] = '\0';
  (pCVar1->base).create_event[9] = '\0';
  (pCVar1->base).create_event[10] = '\0';
  (pCVar1->base).create_event[0xb] = '\0';
  return;
}
