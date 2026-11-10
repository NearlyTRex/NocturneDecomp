// Name: core_vampboss.cpp_CVampireBoss_setup_FUN_00581660
// Address: 00581660
// Address Range: [[00581660, 00581863]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_setup_FUN_00581660(CVampireBoss *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_vampboss_cpp_CVampireBoss_setup_FUN_00581660(CVampireBoss *this_ptr)

{
  UOrientationVector *euler;
  byte *position;
  CDeformableModelInstance *this_ptr_00;
  CDeformableModelInstance *this_ptr_01;
  byte *model_ptr;
  byte *model_ptr_00;
  byte *model_ptr_01;
  CMorph *this_ptr_02;
  CSkeleton *this_ptr_03;
  int iVar1;
  
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(this_ptr_00);
  this_ptr_01 = &this_ptr->model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(this_ptr_01);
  model_ptr = &this_ptr->field_0x12dac;
  core_cloth_cpp_CCloth_load_FUN_005adeb0((CCloth *)model_ptr,"batwing.cth");
  euler = &(this_ptr->base).base.base.orient;
  position = &(this_ptr->base).base.base.field_0x20;
  core_cloth_cpp_FUN_005ae680((CCloth *)model_ptr,(CVector3f *)position,&euler->vec,this_ptr_01);
  model_ptr_00 = &this_ptr->field_0x4d8dc;
  core_cloth_cpp_CCloth_load_FUN_005adeb0((CCloth *)model_ptr_00,"noscape.cth");
  core_cloth_cpp_FUN_005ae680((CCloth *)model_ptr_00,(CVector3f *)position,&euler->vec,this_ptr_00);
  model_ptr_01 = &this_ptr->field_0x8840c;
  core_cloth_cpp_CCloth_load_FUN_005adeb0((CCloth *)model_ptr_01,"nosskirt.cth");
  core_cloth_cpp_FUN_005ae680((CCloth *)model_ptr_01,(CVector3f *)position,&euler->vec,this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60(this_ptr_01);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0(this_ptr_01);
  this_ptr_02 = &this_ptr->morph;
  _DAT_0268014c = 0;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005b6f80(this_ptr_02,0,this_ptr_00);
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_005b70d0
            (this_ptr_02,0,(CKeyFramedModel *)model_ptr_00,0);
  _DAT_0268014c = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_005b70d0
            (this_ptr_02,0,(CKeyFramedModel *)model_ptr_00,0);
  _DAT_0268014c = 0;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_005b70d0
            (this_ptr_02,0,(CKeyFramedModel *)model_ptr_01,0);
  _DAT_0268014c = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_005b70d0
            (this_ptr_02,0,(CKeyFramedModel *)model_ptr_01,0);
  _DAT_0268014c = 0;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005b6f80(this_ptr_02,1,this_ptr_01);
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_005b70d0
            (this_ptr_02,1,(CKeyFramedModel *)model_ptr,0);
  _DAT_0268014c = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_005b70d0
            (this_ptr_02,1,(CKeyFramedModel *)model_ptr,0);
  _DAT_0268014c = 0;
  core_morph_cpp_CMorph_getReady_FUN_005b71d0(this_ptr_02);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0(this_ptr_01);
  *(uint *)&(this_ptr->base).base.base.field_0xfc = 1;
  this_ptr_03 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr_00);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_03,"Bip01 Spine2",1);
  *(uint *)&(this_ptr->base).base.field_0x261c = 0;
  this_ptr->sfx_handle = 0;
  (this_ptr->base).base.carry_hands[0] = (SCarryHand)(char)iVar1;
  (this_ptr->base).base.carry_hands[1] = (SCarryHand)(char)((uint)iVar1 >> 8);
  *(short *)&(this_ptr->base).base.field_0x261a = (short)((uint)iVar1 >> 0x10);
  return;
}
