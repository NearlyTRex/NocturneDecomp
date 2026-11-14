// Name: core_hino.cpp_CHino_setup_FUN_0059b770
// Address: 0059b770
// Address Range: [[0059b770, 0059b8f0]]
// Convention: __cdecl
// Signature: void __cdecl core_hino_cpp_CHino_setup_FUN_0059b770(CHino *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hino_cpp_CHino_setup_FUN_0059b770(CHino *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  SMotion *pSVar1;
  
  core_enemy_cpp_CEnemy_setup_FUN_00489110(&this_ptr->base);
  if ((this_ptr->base).base.been_damaged == 0) {
    (this_ptr->base).attack_damage = 20.0;
    (this_ptr->base).pain_threshold = 20.0;
    (this_ptr->base).base.hit_points = 150.0;
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr_00);
  _DAT_02d24c4c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"@Bip01 Head" + 1,1);
  _DAT_02d24c54 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Hand",1);
  (this_ptr->base).base.carry_hands[0].bone_index = _DAT_02d24c54;
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(this_ptr_00);
  (this_ptr->base).base.base.is_transparent = 1;
  (this_ptr->base).base.base.is_renderable = 0;
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
  if (pSVar1->state_index == 8) {
    (this_ptr->base).base.health_bar_mode = HEALTH_BAR_NONE;
  }
  else {
    (this_ptr->base).base.health_bar_mode = HEALTH_BAR_ALWAYS;
  }
  this_ptr->sfx_handle = 0;
  this_ptr->unknown_0xd058 = 0;
  sound_sndmain_cpp_preloadSfx_FUN_00556230("hino_stand_fly.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("hino_walk_fly.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("hino_run_fly.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("hino_reverse.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("hino_attack_fly.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("hino_attack_fly2.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("hino_damage_fly.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("hino_die_fly.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("hino_warning.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("hino_big_attack.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("hino_appear.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("hino_disappear.wav");
  return;
}
