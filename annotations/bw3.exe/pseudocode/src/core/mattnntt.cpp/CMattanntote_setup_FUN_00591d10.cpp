// Name: core_mattnntt.cpp_CMattanntote_setup_FUN_00591d10
// Address: 00591d10
// Address Range: [[00591d10, 00591ee1]]
// Convention: __cdecl
// Signature: void __cdecl core_mattnntt_cpp_CMattanntote_setup_FUN_00591d10(CMattanntote *this_ptr)

#include "nocturne.h"

void __cdecl core_mattnntt_cpp_CMattanntote_setup_FUN_00591d10(CMattanntote *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  int iVar1;
  SMotion *pSVar2;
  
  if ((this_ptr->base).base.been_damaged == 0) {
    (this_ptr->base).attack_damage = 20.0;
    (this_ptr->base).pain_threshold = 20.0;
    (this_ptr->base).base.hit_points = 200.0;
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr_00);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Hand",1);
  this_ptr->bone_l_hand = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Hand",1);
  this_ptr->bone_r_hand = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Toe0",1);
  this_ptr->bone_l_toe = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Toe0",1);
  this_ptr->bone_r_toe = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Foot",1);
  this_ptr->bone_l_foot = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Foot",1);
  (this_ptr->base).attack_damage = 0.0;
  this_ptr->bone_r_foot = iVar1;
  (this_ptr->base).base.carry_hands[1].bone_index = this_ptr->bone_l_hand;
  (this_ptr->base).base.carry_hands[0].bone_index = this_ptr->bone_r_hand;
  core_enemy_cpp_CEnemy_setup_FUN_00489110(&this_ptr->base);
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
  if (pSVar2->state_index == 9) {
    (this_ptr->base).base.health_bar_mode = HEALTH_BAR_NONE;
  }
  else {
    (this_ptr->base).base.health_bar_mode = HEALTH_BAR_ALWAYS;
  }
  sound_sndmain_cpp_FUN_00556230("mann_firestaff.wav");
  sound_sndmain_cpp_FUN_00556230("mann_stand.wav");
  sound_sndmain_cpp_FUN_00556230("mann_chasewalk.wav");
  sound_sndmain_cpp_FUN_00556230("mann_chasefast.wav");
  sound_sndmain_cpp_FUN_00556230("mann_attack.wav");
  sound_sndmain_cpp_FUN_00556230("mann_attack1.wav");
  sound_sndmain_cpp_FUN_00556230("mann_attack2.wav");
  sound_sndmain_cpp_FUN_00556230("mann_attack3.wav");
  sound_sndmain_cpp_FUN_00556230("mann_pain.wav");
  sound_sndmain_cpp_FUN_00556230("mann_die.wav");
  sound_sndmain_cpp_FUN_00556230("mann_warning.wav");
  sound_sndmain_cpp_FUN_00556230("mann_appear.wav");
  sound_sndmain_cpp_FUN_00556230("mann_disappear.wav");
  return;
}
