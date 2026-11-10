// Name: core_vampboss.cpp_CVampireBoss_setup_FUN_005a52a0
// Address: 005a52a0
// Address Range: [[005a52a0, 005a54a3]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_setup_FUN_005a52a0(CVampireBoss *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_vampboss_cpp_CVampireBoss_setup_FUN_005a52a0(CVampireBoss *this_ptr)

{
  UOrientationVector *euler;
  CLocation *position;
  CDeformableModelInstance *this_ptr_00;
  CDeformableModelInstance *this_ptr_01;
  byte *model_ptr;
  byte *model_ptr_00;
  byte *model_ptr_01;
  byte *this_ptr_02;
  CSkeleton *this_ptr_03;
  int iVar1;
  
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(this_ptr_00);
  this_ptr_01 = &this_ptr->model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(this_ptr_01);
  model_ptr = &this_ptr->field_0xe60c;
  core_cloth_cpp_CCloth_load_FUN_0043e6d0((CCloth *)model_ptr,"batwing.cth");
  euler = &(this_ptr->base).base.base.orient;
  position = &(this_ptr->base).base.base.location;
  core_cloth_cpp_FUN_0043eea0((CCloth *)model_ptr,&position->position,&euler->vec,this_ptr_01);
  model_ptr_00 = &this_ptr->field_0x4913c;
  core_cloth_cpp_CCloth_load_FUN_0043e6d0((CCloth *)model_ptr_00,"noscape.cth");
  core_cloth_cpp_FUN_0043eea0((CCloth *)model_ptr_00,&position->position,&euler->vec,this_ptr_00);
  model_ptr_01 = &this_ptr->field_0x83c6c;
  core_cloth_cpp_CCloth_load_FUN_0043e6d0((CCloth *)model_ptr_01,"nosskirt.cth");
  core_cloth_cpp_FUN_0043eea0((CCloth *)model_ptr_01,&position->position,&euler->vec,this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500(this_ptr_01);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(this_ptr_01);
  this_ptr_02 = &this_ptr->field_0xbe7a0;
  _DAT_01d39d30 = 0;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0((CMorph *)this_ptr_02,0,this_ptr_00);
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_00523210
            ((CMorph *)this_ptr_02,0,(CKeyFramedModel *)model_ptr_00,0);
  _DAT_01d39d30 = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_00523210
            ((CMorph *)this_ptr_02,0,(CKeyFramedModel *)model_ptr_00,0);
  _DAT_01d39d30 = 0;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_00523210
            ((CMorph *)this_ptr_02,0,(CKeyFramedModel *)model_ptr_01,0);
  _DAT_01d39d30 = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_00523210
            ((CMorph *)this_ptr_02,0,(CKeyFramedModel *)model_ptr_01,0);
  _DAT_01d39d30 = 0;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0((CMorph *)this_ptr_02,1,this_ptr_01);
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_00523210
            ((CMorph *)this_ptr_02,1,(CKeyFramedModel *)model_ptr,0);
  _DAT_01d39d30 = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_00523210
            ((CMorph *)this_ptr_02,1,(CKeyFramedModel *)model_ptr,0);
  _DAT_01d39d30 = 0;
  core_morph_cpp_CMorph_getReady_FUN_00523310((CMorph *)this_ptr_02);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(this_ptr_01);
  (this_ptr->base).base.base.is_transparent = 1;
  this_ptr_03 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr_00);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_03,"Bip01 Spine2",1);
  *(uint *)&(this_ptr->base).base.field_0x25ac = 0;
  this_ptr->sfx_handle = 0;
  (this_ptr->base).base.carry_hands[0] = (SCarryHand)(char)iVar1;
  (this_ptr->base).base.carry_hands[1] = (SCarryHand)(char)((uint)iVar1 >> 8);
  *(short *)&(this_ptr->base).base.field_0x25aa = (short)((uint)iVar1 >> 0x10);
  return;
}
