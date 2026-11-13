// Name: core_baal.cpp_CBaal_setup_FUN_00596730
// Address: 00596730
// Address Range: [[00596730, 00596876]]
// Convention: __cdecl
// Signature: void __cdecl core_baal_cpp_CBaal_setup_FUN_00596730(CBaal *this_ptr)

#include "nocturne.h"

void __cdecl core_baal_cpp_CBaal_setup_FUN_00596730(CBaal *this_ptr)

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
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Hand",1);
  this_ptr->bone_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Hand",1);
  (this_ptr->base).attack_damage = 0.0;
  this_ptr->bone_indices[1] = iVar1;
  (this_ptr->base).base.carry_hands[0].bone_index = this_ptr->bone_indices[0];
  core_enemy_cpp_CEnemy_setup_FUN_00489110(&this_ptr->base);
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
  if (pSVar2->state_index == 9) {
    (this_ptr->base).base.health_bar_mode = HEALTH_BAR_NONE;
  }
  else {
    (this_ptr->base).base.health_bar_mode = HEALTH_BAR_ALWAYS;
  }
  sound_sndmain_cpp_preloadSfx_FUN_00556230("baal_stand.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("baal_chasewalk.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("baal_chasefast.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("baal_attack.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("baal_attack1.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("baal_attack2.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("baal_attack3.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("baal_pain.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("baal_die.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("baal_warning.wav");
  return;
}
