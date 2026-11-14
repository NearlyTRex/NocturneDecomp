// Name: core_shadowsc.cpp_CShadowsc_setup_FUN_00560510
// Address: 00560510
// Address Range: [[00560510, 0056060c]]
// Convention: __cdecl
// Signature: void __cdecl core_shadowsc_cpp_CShadowsc_setup_FUN_00560510(CShadowsc *this_ptr)

#include "nocturne.h"

void __cdecl core_shadowsc_cpp_CShadowsc_setup_FUN_00560510(CShadowsc *this_ptr)

{
  int iVar1;
  CSkeleton *this_ptr_00;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(&(this_ptr->base).base.model);
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,"COMBATMODEHARD");
  if (iVar1 == 0) {
    this_ptr->difficulty_speed_scale = 0.75;
  }
  else {
    this_ptr->difficulty_speed_scale = 1.0;
  }
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                          (&(this_ptr->base).base.model);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine1",1);
  this_ptr->bone_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Head",1);
  this_ptr->bone_indices[1] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                    (this_ptr_00,"Bip01 R Finger0",1);
  this_ptr->bone_indices[2] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                    (this_ptr_00,"Bip01 L Finger0",1);
  this_ptr->bone_indices[3] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Dummy05",1);
  this_ptr->render_mode = 0;
  this_ptr->unknown_0xc290 = 0;
  this_ptr->fade_alpha = 0;
  (this_ptr->base).base.base.is_transparent = 1;
  this_ptr->bone_indices[4] = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(&this_ptr->base);
  return;
}
