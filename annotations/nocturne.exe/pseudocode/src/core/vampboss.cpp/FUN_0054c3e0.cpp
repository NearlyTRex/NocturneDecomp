// Name: core_vampboss.cpp_FUN_0054c3e0
// Address: 0054c3e0
// Address Range: [[0054c3e0, 0054c5e3]]
// Convention: unknown
// Signature: void core_vampboss_cpp_FUN_0054c3e0(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_vampboss_cpp_FUN_0054c3e0(CEnemy *param_1)

{
  UOrientationVector *euler;
  CLocation *position;
  CDeformableModelInstance *this_ptr;
  CEnemy *this_ptr_00;
  CCloth *this_ptr_01;
  CCloth *this_ptr_02;
  float *this_ptr_03;
  CMorph *this_ptr_04;
  CSkeleton *this_ptr_05;
  int iVar1;
  
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  this_ptr = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr);
  this_ptr_00 = param_1 + 1;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0
            ((CDeformableModelInstance *)this_ptr_00);
  this_ptr_01 = (CCloth *)(param_1[1].base.model.part_data.visibility_flags + 9);
  core_cloth_cpp_CCloth_load_FUN_00435240(this_ptr_01,"batwing.cth");
  euler = &(param_1->base).base.orient;
  position = &(param_1->base).base.location;
  core_cloth_cpp_CCloth_setup_FUN_004359e0
            (this_ptr_01,&position->position,&euler->vec,(CDeformableModelInstance *)this_ptr_00);
  this_ptr_02 = (CCloth *)(param_1[6].base.model.bone_transform.bone_world_matrices + 0x42);
  core_cloth_cpp_CCloth_load_FUN_00435240(this_ptr_02,"noscape.cth");
  core_cloth_cpp_CCloth_setup_FUN_004359e0(this_ptr_02,&position->position,&euler->vec,this_ptr);
  this_ptr_03 = &param_1[0xb].base.model.bone_transform.bone_world_matrices[0x1f].m[0].z;
  core_cloth_cpp_CCloth_load_FUN_00435240((CCloth *)this_ptr_03,"nosskirt.cth");
  core_cloth_cpp_CCloth_setup_FUN_004359e0
            ((CCloth *)this_ptr_03,&position->position,&euler->vec,this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800
            ((CDeformableModelInstance *)this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0
            ((CDeformableModelInstance *)this_ptr_00);
  this_ptr_04 = (CMorph *)(param_1[0x10].base.model.bone_transform.bone_scales + 0x3b);
  _DAT_01cd4314 = 0;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170(this_ptr_04,0,this_ptr);
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0
            (this_ptr_04,0,(CKeyFramedModel *)this_ptr_02,0);
  _DAT_01cd4314 = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0
            (this_ptr_04,0,(CKeyFramedModel *)this_ptr_02,0);
  _DAT_01cd4314 = 0;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0
            (this_ptr_04,0,(CKeyFramedModel *)this_ptr_03,0);
  _DAT_01cd4314 = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0
            (this_ptr_04,0,(CKeyFramedModel *)this_ptr_03,0);
  _DAT_01cd4314 = 0;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170
            (this_ptr_04,1,(CDeformableModelInstance *)this_ptr_00);
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0
            (this_ptr_04,1,(CKeyFramedModel *)this_ptr_01,0);
  _DAT_01cd4314 = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0
            (this_ptr_04,1,(CKeyFramedModel *)this_ptr_01,0);
  _DAT_01cd4314 = 0;
  core_morph_cpp_CMorph_getReady_FUN_004e03c0(this_ptr_04);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
            ((CDeformableModelInstance *)this_ptr_00);
  (param_1->base).base.is_transparent = 1;
  this_ptr_05 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_05,"Bip01 Spine2",1);
  (param_1->base).carry_hands[0].secondary_bone_index = 0;
  param_1[0x10].base.model.bone_transform.bone_world_matrices[0x3d].m[2].y = 0.0;
  (param_1->base).carry_hands[0].bone_index = iVar1;
  return;
}
