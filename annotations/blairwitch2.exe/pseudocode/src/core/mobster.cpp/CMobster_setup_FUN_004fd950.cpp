// Name: core_mobster.cpp_CMobster_setup_FUN_004fd950
// Address: 004fd950
// Address Range: [[004fd950, 004fdc5f]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_setup_FUN_004fd950(CMobster *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mobster_cpp_CMobster_setup_FUN_004fd950(CMobster *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  byte uVar1;
  ushort uVar2;
  CSkeleton *this_ptr_01;
  CDeformableModel *this_ptr_02;
  int iVar3;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr_00);
  _DAT_01d1c710 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Head",1);
  _DAT_01d1c71c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L ForeArm",1);
  _DAT_01d1c720 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R ForeArm",1);
  _DAT_01d1c724 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_01d1c728 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_01d1c72c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Foot",1);
  _DAT_01d1c730 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Foot",1);
  _DAT_01d1c714 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Hand",1);
  _DAT_01d1c718 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Hand",1);
  _DAT_01d1c734 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine",1);
  _DAT_01d1c738 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine1",1);
  _DAT_01d1c73c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine2",1);
  _DAT_01d1c710 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Head",1);
  _DAT_01d1c724 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_01d1c728 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_01d1c734 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine",1);
  _DAT_01d1c73c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine2",1);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr_00);
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"larm01",1);
  this_ptr->part_indices[0] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"l4arm01",1);
  this_ptr->part_indices[1] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"rarm01",1);
  this_ptr->part_indices[2] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"r4arm01",1);
  this_ptr->part_indices[3] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"rthigh01",1);
  this_ptr->part_indices[4] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"rshin01",1);
  this_ptr->part_indices[5] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"lthigh01",1);
  this_ptr->part_indices[6] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"lshin01",1);
  this_ptr->part_indices[7] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"waist01",1);
  this_ptr->part_indices[8] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"torso01",1);
  this_ptr->part_indices[9] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"head01",1);
  this_ptr->part_indices[10] = iVar3;
  uVar1 = DAT_01d1c714_1;
  uVar2 = uRam01d1c716;
  (this_ptr->base).base.carry_hands[0] = (SCarryHand)DAT_01d1c714;
  (this_ptr->base).base.carry_hands[1] = (SCarryHand)uVar1;
  *(ushort *)&(this_ptr->base).base.field_0x261a = uVar2;
  *(int *)&(this_ptr->base).base.field_0x261c = this_ptr->part_indices[1];
  *(int *)&(this_ptr->base).base.field_0x2690 = _DAT_01d1c718;
  *(int *)&(this_ptr->base).base.field_0x2694 = this_ptr->part_indices[3];
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(&this_ptr->base);
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
