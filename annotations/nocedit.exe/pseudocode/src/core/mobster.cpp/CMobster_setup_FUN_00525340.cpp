// Name: core_mobster.cpp_CMobster_setup_FUN_00525340
// Address: 00525340
// Address Range: [[00525340, 0052564f]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_setup_FUN_00525340(CMobster *this_ptr)

#include "nocturne.h"

void __cdecl core_mobster_cpp_CMobster_setup_FUN_00525340(CMobster *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  CDeformableModel *this_ptr_02;
  int iVar1;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  INT_02f37ec8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Head",1);
  INT_02f37ed4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L ForeArm",1);
  INT_02f37ed8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R ForeArm",1);
  INT_02f37edc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L UpperArm",1);
  INT_02f37ee0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R UpperArm",1);
  INT_02f37ee4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Foot",1);
  INT_02f37ee8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Foot",1);
  INT_02f37ecc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Hand",1);
  INT_02f37ed0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Hand",1);
  INT_02f37eec = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine",1);
  INT_02f37ef0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine1",1);
  INT_02f37ef4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine2",1);
  INT_02f37ec8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Head",1);
  INT_02f37edc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L UpperArm",1);
  INT_02f37ee0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R UpperArm",1);
  INT_02f37eec = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine",1);
  INT_02f37ef4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine2",1);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"larm01",1);
  this_ptr->part_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"l4arm01",1);
  this_ptr->part_indices[1] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rarm01",1);
  this_ptr->part_indices[2] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"r4arm01",1);
  this_ptr->part_indices[3] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rthigh01",1);
  this_ptr->part_indices[4] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rshin01",1);
  this_ptr->part_indices[5] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"lthigh01",1);
  this_ptr->part_indices[6] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"lshin01",1);
  this_ptr->part_indices[7] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"waist01",1);
  this_ptr->part_indices[8] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"torso01",1);
  this_ptr->part_indices[9] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"head01",1);
  this_ptr->part_indices[10] = iVar1;
  (this_ptr->base).base.carry_hands[0].bone_index = INT_02f37ecc;
  (this_ptr->base).base.carry_hands[0].secondary_bone_index = this_ptr->part_indices[1];
  (this_ptr->base).base.carry_hands[1].bone_index = INT_02f37ed0;
  (this_ptr->base).base.carry_hands[1].secondary_bone_index = this_ptr->part_indices[3];
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  this_ptr->firing_blend = 0.0;
  this_ptr->firing_cooldown = 0.0;
  if (this_ptr->our_post != (CDemonActor *)0x0) {
    (this_ptr->base).allow_pathfind_to_new_targets = 1;
  }
  this_ptr->sfx_handles[1] = 0;
  this_ptr->death_sound_played = 0;
  this_ptr->sfx_handle = 0;
  this_ptr->sfx_handles[0] = 0;
  return;
}
