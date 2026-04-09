// Name: core_werewolf.cpp_CWerewolf_setup_FUN_005efcc0
// Address: 005efcc0
// Address Range: [[005efcc0, 005efdda]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_setup_FUN_005efcc0(CWerewolf *this_ptr)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_setup_FUN_005efcc0(CWerewolf *this_ptr)

{
  CSkeleton *this_ptr_01;
  int iVar1;
  int iVar2;
  float fVar2;
  float fVar3;
  CDeformableModelInstance *this_ptr_00;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine3",1);
  this_ptr->bone_indices[0] = iVar1;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                    (this_ptr_01,"Bip01 L Finger1",1);
  this_ptr->bone_indices[1] = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                    (this_ptr_01,"Bip01 R Finger1",1);
  this_ptr->bone_indices[2] = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01jaw2",1);
  this_ptr->bone_indices[3] = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Head",1);
  this_ptr->bone_indices[4] = iVar2;
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  (this_ptr->base).base.base.is_transparent = this_ptr->light_up_eyes;
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,1.0);
  this_ptr->eye_glow_phase = fVar2;
  if (this_ptr->type == WEREWOLF_TYPE_TRAIN) {
    (this_ptr->base).base.collision_cylinder_radius = 1.5;
  }
  this_ptr->sfx_handle = 0;
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(10.0,30.0);
  this_ptr->sfx_handles[0] = 0;
  this_ptr->sfx_handles[1] = 0;
  this_ptr->howl_cooldown = fVar3;
  return;
}
