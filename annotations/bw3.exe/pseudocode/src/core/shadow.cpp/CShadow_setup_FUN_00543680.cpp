// Name: core_shadow.cpp_CShadow_setup_FUN_00543680
// Address: 00543680
// Address Range: [[00543680, 0054386c]]
// Convention: __cdecl
// Signature: void __cdecl core_shadow_cpp_CShadow_setup_FUN_00543680(CShadow *this_ptr)

#include "nocturne.h"

void __cdecl core_shadow_cpp_CShadow_setup_FUN_00543680(CShadow *this_ptr)

{
  char *str1;
  int iVar1;
  CSkeleton *this_ptr_00;
  float fVar2;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(&(this_ptr->base).base.model);
  str1 = (this_ptr->base).base.model.model_name;
  this_ptr->is_shadow_beast = 0;
  this_ptr->is_opaque = 0;
  iVar1 = _stricmp(str1,"SHADOWBEAST.DFM");
  if ((iVar1 == 0) ||
     (iVar1 = _stricmp(str1,"WERE_HEADLESS.DFM"), iVar1 == 0)) {
    this_ptr->is_shadow_beast = 1;
  }
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          (&(this_ptr->base).base.model);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Pelvis",1);
  this_ptr->bone_indices[4] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Spine2",1);
  this_ptr->bone_indices[5] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Head",1);
  this_ptr->bone_indices[6] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Spine2",1);
  this_ptr->bone_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                    (this_ptr_00,"Bip01 L Finger1",1);
  this_ptr->bone_indices[1] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                    (this_ptr_00,"Bip01 R Finger1",1);
  this_ptr->bone_indices[2] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Head",1);
  this_ptr->bone_indices[3] = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_00489110(&this_ptr->base);
  (this_ptr->base).base.base.is_transparent = 1;
  iVar1 = this_ptr->type;
  (this_ptr->base).base.base.is_renderable = 0;
  if (iVar1 == 0) {
    (this_ptr->base).base.collision_cylinder_radius = 1.5;
  }
  this_ptr->sfx_handle = 0;
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(10.0,30.0);
  this_ptr->sfx_handles[0] = 0;
  this_ptr->sfx_handles[1] = 0;
  this_ptr->howl_cooldown = fVar2;
  switch(this_ptr->shadow_variant) {
  case 0:
  case 1:
    (this_ptr->base).attack_damage = 15.0;
    break;
  case 2:
    (this_ptr->base).attack_damage = 25.0;
    break;
  case 3:
    (this_ptr->base).attack_damage = 30.0;
    (this_ptr->base).pain_threshold = 20.0;
    (this_ptr->base).base.hit_points = 60.0;
    return;
  default:
    goto switchD_005437f7_default;
  }
  (this_ptr->base).pain_threshold = 20.0;
  (this_ptr->base).base.hit_points = 40.0;
switchD_005437f7_default:
  return;
}
