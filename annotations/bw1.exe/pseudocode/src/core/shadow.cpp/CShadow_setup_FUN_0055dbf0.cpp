// Name: core_shadow.cpp_CShadow_setup_FUN_0055dbf0
// Address: 0055dbf0
// Address Range: [[0055dbf0, 0055ddf1]]
// Convention: __cdecl
// Signature: void __cdecl core_shadow_cpp_CShadow_setup_FUN_0055dbf0(CShadow *this_ptr)

#include "nocturne.h"

void __cdecl core_shadow_cpp_CShadow_setup_FUN_0055dbf0(CShadow *this_ptr)

{
  char *str1;
  int iVar1;
  CSkeleton *this_ptr_00;
  float fVar2;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(&(this_ptr->base).base.model);
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,"COMBATMODEHARD");
  if (iVar1 == 0) {
    this_ptr->difficulty_speed_scale = 0.75;
  }
  else {
    this_ptr->difficulty_speed_scale = 1.0;
  }
  str1 = (this_ptr->base).base.model.model_name;
  this_ptr->is_shadow_beast = 0;
  this_ptr->is_opaque = 0;
  iVar1 = _stricmp(str1,"SHADOWBEAST.DFM");
  if ((iVar1 == 0) ||
     (iVar1 = _stricmp(str1,"WERE_HEADLESS.DFM"), iVar1 == 0)) {
    this_ptr->is_shadow_beast = 1;
  }
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                          (&(this_ptr->base).base.model);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Pelvis",1);
  this_ptr->bone_indices[6] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine2",1);
  this_ptr->bone_indices[7] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Head",1);
  this_ptr->bone_indices[8] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine2",1);
  this_ptr->bone_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                    (this_ptr_00,"Bip01 L Finger1",1);
  this_ptr->bone_indices[1] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                    (this_ptr_00,"Bip01 R Finger1",1);
  this_ptr->bone_indices[2] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Head",1);
  this_ptr->bone_indices[3] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Foot",1);
  this_ptr->bone_indices[5] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Foot",1);
  this_ptr->bone_indices[4] = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(&this_ptr->base);
  (this_ptr->base).base.base.is_transparent = 1;
  iVar1 = this_ptr->type;
  (this_ptr->base).base.base.is_renderable = 0;
  if (iVar1 == 0) {
    (this_ptr->base).base.collision_cylinder_radius = 1.5;
  }
  this_ptr->sfx_handles[0] = 0;
  this_ptr->sfx_handles[1] = 0;
  this_ptr->sfx_handles[2] = 0;
  this_ptr->sfx_handles[3] = 0;
  this_ptr->sfx_handles[6] = 0;
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(10.0,30.0);
  this_ptr->howl_cooldown = fVar2;
  return;
}
