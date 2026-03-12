// Name: core_vampboss.cpp_CVampireBoss_setup_FUN_005e56c0
// Address: 005e56c0
// Address Range: [[005e56c0, 005e58c3]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_setup_FUN_005e56c0(CVampireBoss *this_ptr)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_CVampireBoss_setup_FUN_005e56c0(CVampireBoss *this_ptr)

{
  UOrientationVector *euler_00;
  CLocation *position_00;
  CCloth *this_ptr_07;
  CCloth *this_ptr_08;
  CCloth *this_ptr_09;
  CSkeleton *this_ptr_06;
  int iVar1;
  CDeformableModelInstance *this_ptr_00;
  CDeformableModelInstance *this_ptr_01;
  UOrientationVector *euler;
  CLocation *position;
  CCloth *this_ptr_04;
  CMorph *this_ptr_05;
  CCloth *this_ptr_02;
  CCloth *this_ptr_03;
  
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  this_ptr_01 = &this_ptr->model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_01);
  this_ptr_07 = &this_ptr->wing_cloth;
  core_cloth_cpp_CCloth_load_FUN_00438cf0(this_ptr_07,"batwing.cth");
  euler_00 = &(this_ptr->base).base.base.orient;
  position_00 = &(this_ptr->base).base.base.location;
  core_cloth_cpp_CCloth_setup_FUN_00439710
            (this_ptr_07,&position_00->position,&euler_00->vec,this_ptr_01);
  this_ptr_08 = &this_ptr->cape_cloth;
  core_cloth_cpp_CCloth_load_FUN_00438cf0(this_ptr_08,"noscape.cth");
  core_cloth_cpp_CCloth_setup_FUN_00439710
            (this_ptr_08,&position_00->position,&euler_00->vec,this_ptr_00);
  this_ptr_09 = &this_ptr->skirt_cloth;
  core_cloth_cpp_CCloth_load_FUN_00438cf0(this_ptr_09,"nosskirt.cth");
  core_cloth_cpp_CCloth_setup_FUN_00439710
            (this_ptr_09,&position_00->position,&euler_00->vec,this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(this_ptr_01);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(this_ptr_01);
  this_ptr_05 = &this_ptr->morph;
  INT_02f43974 = 0;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_0052b430(this_ptr_05,0,this_ptr_00);
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_0052b580(this_ptr_05,0,&this_ptr_08->model,0);
  INT_02f43974 = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_0052b580(this_ptr_05,0,&this_ptr_08->model,0);
  INT_02f43974 = 0;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_0052b580(this_ptr_05,0,&this_ptr_09->model,0);
  INT_02f43974 = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_0052b580(this_ptr_05,0,&this_ptr_09->model,0);
  INT_02f43974 = 0;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_0052b430(this_ptr_05,1,this_ptr_01);
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_0052b580(this_ptr_05,1,&this_ptr_07->model,0);
  INT_02f43974 = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_0052b580(this_ptr_05,1,&this_ptr_07->model,0);
  INT_02f43974 = 0;
  core_morph_cpp_CMorph_getReady_FUN_0052b680(this_ptr_05);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(this_ptr_01);
  (this_ptr->base).base.base.is_transparent = 1;
  this_ptr_06 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_06,"Bip01 Spine2",1);
  (this_ptr->base).base.carry_hands[0].secondary_bone_index = 0;
  this_ptr->sfx_handle = 0;
  (this_ptr->base).base.carry_hands[0].bone_index = iVar1;
  return;
}
