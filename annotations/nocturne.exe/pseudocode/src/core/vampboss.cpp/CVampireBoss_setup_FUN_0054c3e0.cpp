// Name: core_vampboss.cpp_CVampireBoss_setup_FUN_0054c3e0
// Address: 0054c3e0
// Address Range: [[0054c3e0, 0054c5e3]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_setup_FUN_0054c3e0(CVampireBoss *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_vampboss_cpp_CVampireBoss_setup_FUN_0054c3e0(CVampireBoss *this_ptr)

{
  UOrientationVector *euler;
  CLocation *position;
  CDeformableModelInstance *this_ptr_00;
  CDeformableModelInstance *this_ptr_01;
  CCloth *this_ptr_02;
  CCloth *this_ptr_03;
  CCloth *this_ptr_04;
  CMorph *this_ptr_05;
  CSkeleton *this_ptr_06;
  int iVar1;
  
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr_00);
  this_ptr_01 = &this_ptr->model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr_01);
  this_ptr_02 = &this_ptr->wing_cloth;
  core_cloth_cpp_CCloth_load_FUN_00435240(this_ptr_02,"batwing.cth");
  euler = &(this_ptr->base).base.base.orient;
  position = &(this_ptr->base).base.base.location;
  core_cloth_cpp_CCloth_setup_FUN_004359e0(this_ptr_02,&position->position,&euler->vec,this_ptr_01);
  this_ptr_03 = &this_ptr->cape_cloth;
  core_cloth_cpp_CCloth_load_FUN_00435240(this_ptr_03,"noscape.cth");
  core_cloth_cpp_CCloth_setup_FUN_004359e0(this_ptr_03,&position->position,&euler->vec,this_ptr_00);
  this_ptr_04 = &this_ptr->skirt_cloth;
  core_cloth_cpp_CCloth_load_FUN_00435240(this_ptr_04,"nosskirt.cth");
  core_cloth_cpp_CCloth_setup_FUN_004359e0(this_ptr_04,&position->position,&euler->vec,this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(this_ptr_01);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(this_ptr_01);
  this_ptr_05 = &this_ptr->morph;
  _DAT_01cd4314 = 0;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170(this_ptr_05,0,this_ptr_00);
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0(this_ptr_05,0,&this_ptr_03->model,0);
  _DAT_01cd4314 = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0(this_ptr_05,0,&this_ptr_03->model,0);
  _DAT_01cd4314 = 0;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0(this_ptr_05,0,&this_ptr_04->model,0);
  _DAT_01cd4314 = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0(this_ptr_05,0,&this_ptr_04->model,0);
  _DAT_01cd4314 = 0;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170(this_ptr_05,1,this_ptr_01);
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0(this_ptr_05,1,&this_ptr_02->model,0);
  _DAT_01cd4314 = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0(this_ptr_05,1,&this_ptr_02->model,0);
  _DAT_01cd4314 = 0;
  core_morph_cpp_CMorph_getReady_FUN_004e03c0(this_ptr_05);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(this_ptr_01);
  (this_ptr->base).base.base.is_transparent = 1;
  this_ptr_06 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr_00);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_06,"Bip01 Spine2",1);
  (this_ptr->base).base.carry_hands[0].secondary_bone_index = 0;
  this_ptr->sfx_handle = 0;
  (this_ptr->base).base.carry_hands[0].bone_index = iVar1;
  return;
}
