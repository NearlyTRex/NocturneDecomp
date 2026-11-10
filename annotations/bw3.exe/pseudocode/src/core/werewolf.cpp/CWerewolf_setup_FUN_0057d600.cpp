// Name: core_werewolf.cpp_CWerewolf_setup_FUN_0057d600
// Address: 0057d600
// Address Range: [[0057d600, 0057d71a]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_setup_FUN_0057d600(CWerewolf *this_ptr)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_setup_FUN_0057d600(CWerewolf *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  int iVar1;
  float fVar2;
  
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
    *(uint *)&(this_ptr->base).base.field_0x3270 = 0x3fc00000;
  }
  this_ptr->sfx_handle = 0;
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(10.0,30.0);
  this_ptr->sfx_handles[0] = 0;
  this_ptr->sfx_handles[1] = 0;
  this_ptr->howl_cooldown = fVar2;
  return;
}
