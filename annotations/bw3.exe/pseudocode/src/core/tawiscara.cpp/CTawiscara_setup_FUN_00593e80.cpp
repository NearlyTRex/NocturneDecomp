// Name: core_tawiscara.cpp_CTawiscara_setup_FUN_00593e80
// Address: 00593e80
// Address Range: [[00593e80, 00593ff2]]
// Convention: __cdecl
// Signature: void __cdecl core_tawiscara_cpp_CTawiscara_setup_FUN_00593e80(CTawiscara *this_ptr)

#include "nocturne.h"

void __cdecl core_tawiscara_cpp_CTawiscara_setup_FUN_00593e80(CTawiscara *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  int iVar1;
  float fVar2;
  SMotion *pSVar3;
  
  if ((this_ptr->base).base.been_damaged == 0) {
    (this_ptr->base).attack_damage = 15.0;
    (this_ptr->base).pain_threshold = 10.0;
    (this_ptr->base).base.hit_points = 100.0;
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr_00);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine3",1);
  this_ptr->bone_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                    (this_ptr_01,"Bip01 L Finger1",1);
  this_ptr->bone_indices[1] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                    (this_ptr_01,"Bip01 R Finger1",1);
  this_ptr->bone_indices[2] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01jaw2",1);
  this_ptr->bone_indices[3] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Head",1);
  this_ptr->bone_indices[4] = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_00489110(&this_ptr->base);
  (this_ptr->base).base.base.is_transparent = this_ptr->light_up_eyes;
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
  this_ptr->eye_glow_phase = fVar2;
  if (this_ptr->type == WEREWOLF_TYPE_TRAIN) {
    (this_ptr->base).base.collision_cylinder_radius = 1.5;
  }
  this_ptr->sfx_handle = 0;
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(10.0,30.0);
  this_ptr->sfx_handles[0] = 0;
  this_ptr->sfx_handles[1] = 0;
  this_ptr->howl_cooldown = fVar2;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     (&(this_ptr->base).base.model.base);
  if (pSVar3->state_index == 0xd) {
    (this_ptr->base).base.health_bar_mode = HEALTH_BAR_NONE;
    return;
  }
  (this_ptr->base).base.health_bar_mode = HEALTH_BAR_ALWAYS;
  return;
}
