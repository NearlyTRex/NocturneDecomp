// Name: core_mobster.cpp_CMobster_setup_FUN_004da290
// Address: 004da290
// Address Range: [[004da290, 004da59f]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_setup_FUN_004da290(CMobster *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mobster_cpp_CMobster_setup_FUN_004da290(CMobster *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  CDeformableModel *this_ptr_02;
  int iVar1;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr_00);
  _DAT_01ccdba8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 Head",1);
  _DAT_01ccdbb4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L ForeArm",1);
  _DAT_01ccdbb8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R ForeArm",1);
  _DAT_01ccdbbc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_01ccdbc0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_01ccdbc4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L Foot",1);
  _DAT_01ccdbc8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R Foot",1);
  _DAT_01ccdbac =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L Hand",1);
  _DAT_01ccdbb0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R Hand",1);
  _DAT_01ccdbcc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 Spine",1);
  _DAT_01ccdbd0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 Spine1",1);
  _DAT_01ccdbd4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 Spine2",1);
  _DAT_01ccdba8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 Head",1);
  _DAT_01ccdbbc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_01ccdbc0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_01ccdbcc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 Spine",1);
  _DAT_01ccdbd4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 Spine2",1);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"larm01",1);
  this_ptr->part_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"l4arm01",1);
  this_ptr->part_indices[1] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"rarm01",1);
  this_ptr->part_indices[2] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"r4arm01",1);
  this_ptr->part_indices[3] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"rthigh01",1);
  this_ptr->part_indices[4] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"rshin01",1);
  this_ptr->part_indices[5] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"lthigh01",1);
  this_ptr->part_indices[6] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"lshin01",1);
  this_ptr->part_indices[7] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"waist01",1);
  this_ptr->part_indices[8] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"torso01",1);
  this_ptr->part_indices[9] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"head01",1);
  this_ptr->part_indices[10] = iVar1;
  (this_ptr->base).base.carry_hands[0].bone_index = _DAT_01ccdbac;
  (this_ptr->base).base.carry_hands[0].secondary_bone_index = this_ptr->part_indices[1];
  (this_ptr->base).base.carry_hands[1].bone_index = _DAT_01ccdbb0;
  (this_ptr->base).base.carry_hands[1].secondary_bone_index = this_ptr->part_indices[3];
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(&this_ptr->base);
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
