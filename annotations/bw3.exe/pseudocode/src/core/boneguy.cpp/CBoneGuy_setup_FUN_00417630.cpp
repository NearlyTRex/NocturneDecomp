// Name: core_boneguy.cpp_CBoneGuy_setup_FUN_00417630
// Address: 00417630
// Address Range: [[00417630, 00417991]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_setup_FUN_00417630(CBoneGuy *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_boneguy_cpp_CBoneGuy_setup_FUN_00417630(CBoneGuy *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  int iVar1;
  CSkeleton *this_ptr_01;
  CDeformableModel *pCVar2;
  float fVar3;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr_00);
  DAT_007e1620 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                           (this_ptr_01,"CBip01 Head" + 1,1);
  _DAT_007e162c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L ForeArm",1);
  _DAT_007e1630 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R ForeArm",1);
  DAT_007e1634 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                           (this_ptr_01,"Bip01 L UpperArm",1);
  DAT_007e1638 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                           (this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_007e163c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Foot",1);
  _DAT_007e1640 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Foot",1);
  DAT_007e1624 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                           (this_ptr_01,"Bip01 L Hand",1);
  DAT_007e1628 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                           (this_ptr_01,"Bip01 R Hand",1);
  DAT_007e1644 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                           (this_ptr_01,"Bip01 Spine",1);
  DAT_007e1648 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                           (this_ptr_01,"Bip01 Spine2",1);
  DAT_007e1620 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                           (this_ptr_01,"Bip01 Head",1);
  DAT_007e1634 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                           (this_ptr_01,"Bip01 L UpperArm",1);
  DAT_007e1638 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                           (this_ptr_01,"Bip01 R UpperArm",1);
  DAT_007e1644 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                           (this_ptr_01,"Bip01 Spine",1);
  DAT_007e1648 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                           (this_ptr_01,"Bip01 Spine2",1);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(this_ptr_00);
  iVar1 = pCVar2->num_parts;
  this_ptr->box_count = iVar1;
  if (0x14 < iVar1) {
    _DAT_01d71de0 = "..\\core\\boneguy.cpp";
    _DAT_01d71de4 = 0x136;
    core_main_c_FUN_004e4330("CBoneGuy::explode - Not enough containers");
  }
  (this_ptr->base).base.carry_hands[0].bone_index = DAT_007e1624;
  (this_ptr->base).base.carry_hands[1].bone_index = DAT_007e1628;
  core_enemy_cpp_CEnemy_setup_FUN_00489110(&this_ptr->base);
  this_ptr->sfx_handle = 0;
  this_ptr->guard_idle = 0;
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(1.3,1.8);
  iVar1 = (this_ptr->base).base.been_damaged;
  (this_ptr->base).speed = fVar3;
  if (iVar1 == 0) {
    switch(this_ptr->skeleton_variant) {
    case 0:
    case 1:
      (this_ptr->base).attack_damage = 8.0;
      (this_ptr->base).pain_threshold = 5.0;
      (this_ptr->base).base.hit_points = 25.0;
      break;
    case 2:
      (this_ptr->base).attack_damage = 12.0;
      (this_ptr->base).pain_threshold = 8.0;
      (this_ptr->base).base.hit_points = 30.0;
      this_ptr->start_hit_points = (this_ptr->base).base.hit_points;
      return;
    case 3:
      (this_ptr->base).attack_damage = 20.0;
      (this_ptr->base).pain_threshold = 10.0;
      (this_ptr->base).base.hit_points = 40.0;
      this_ptr->start_hit_points = (this_ptr->base).base.hit_points;
      return;
    case 4:
      (this_ptr->base).base.hit_points = 10.0;
      (this_ptr->base).attack_damage = 5.0;
      (this_ptr->base).pain_threshold = 5.0;
      fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(2.0,2.5);
      (this_ptr->base).speed = fVar3;
      this_ptr->start_hit_points = (this_ptr->base).base.hit_points;
      return;
    }
    this_ptr->start_hit_points = (this_ptr->base).base.hit_points;
    return;
  }
  switch(this_ptr->skeleton_variant) {
  case 0:
  case 1:
    this_ptr->start_hit_points = 25.0;
    break;
  case 2:
    this_ptr->start_hit_points = 30.0;
    return;
  case 3:
    this_ptr->start_hit_points = 40.0;
    return;
  case 4:
    this_ptr->start_hit_points = 10.0;
    return;
  }
  return;
}
