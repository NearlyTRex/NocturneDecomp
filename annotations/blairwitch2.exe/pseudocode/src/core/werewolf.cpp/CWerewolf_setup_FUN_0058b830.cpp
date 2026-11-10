// Name: core_werewolf.cpp_CWerewolf_setup_FUN_0058b830
// Address: 0058b830
// Address Range: [[0058b830, 0058b94a]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_setup_FUN_0058b830(CWerewolf *this_ptr)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_setup_FUN_0058b830(CWerewolf *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  int iVar1;
  float fVar2;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr_00);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine3",1);
  this_ptr->bone_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                    (this_ptr_01,"Bip01 L Finger1",1);
  this_ptr->bone_indices[1] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                    (this_ptr_01,"Bip01 R Finger1",1);
  this_ptr->bone_indices[2] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01jaw2",1);
  this_ptr->bone_indices[3] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Head",1);
  this_ptr->bone_indices[4] = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(&this_ptr->base);
  *(int *)&(this_ptr->base).base.base.field_0xfc = this_ptr->light_up_eyes;
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
  this_ptr->eye_glow_phase = fVar2;
  if (this_ptr->type == WEREWOLF_TYPE_TRAIN) {
    *(uint *)&(this_ptr->base).base.field_0x3434 = 0x3fc00000;
  }
  this_ptr->sfx_handle = 0;
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,30.0);
  this_ptr->sfx_handles[0] = 0;
  this_ptr->sfx_handles[1] = 0;
  this_ptr->howl_cooldown = fVar2;
  return;
}
