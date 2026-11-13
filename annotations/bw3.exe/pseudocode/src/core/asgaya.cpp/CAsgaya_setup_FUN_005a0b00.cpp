// Name: core_asgaya.cpp_CAsgaya_setup_FUN_005a0b00
// Address: 005a0b00
// Address Range: [[005a0b00, 005a0bd8]]
// Convention: __cdecl
// Signature: void __cdecl core_asgaya_cpp_CAsgaya_setup_FUN_005a0b00(CAsgaya *this_ptr)

#include "nocturne.h"

void __cdecl core_asgaya_cpp_CAsgaya_setup_FUN_005a0b00(CAsgaya *this_ptr)

{
  CSkeleton *this_ptr_00;
  int iVar1;
  CDeformableModelInstance *this_ptr_01;
  
  core_npc_cpp_CNPC_setup_FUN_00509020(&this_ptr->base);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          (&(this_ptr->base).base.model);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 R Hand",1);
  this_ptr->bone_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 L Hand",1);
  this_ptr->speed = 0.75;
  this_ptr->cast_count = 0;
  this_ptr->bone_indices[1] = iVar1;
  iVar1 = (this_ptr->base).base.is_spectral;
  (this_ptr->base).base.carry_hands[0].bone_index = this_ptr->bone_indices[0];
  if (iVar1 != 0) {
    (this_ptr->base).base.base.is_transparent = 1;
  }
  core_fire_cpp_CFireEffect_preloadLightningBoltStyle_FUN_004a4130(0x01C73654,3);
  core_fire_cpp_CFireEffect_preloadGunFlameStyle_FUN_004a41d0(0x01C73654,4);
  core_charactr_cpp_FUN_0042f280(1);
  this_ptr_01 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090(this_ptr_01);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10(this_ptr_01);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(this_ptr_01);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110(this_ptr_01);
  return;
}
