// Name: core_vampboss.cpp_CVampireBoss_setup_FUN_005e56c0
// Address: 005e56c0
// Address Range: [[005e56c0, 005e58c3]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_setup_FUN_005e56c0(CVampireBoss *this_ptr)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_CVampireBoss_setup_FUN_005e56c0(CVampireBoss *this_ptr)

{
  UOrientationVector *euler;
  CLocation *position;
  CDeformableModelInstance *this_ptr_00;
  CDeformableModelInstance *this_ptr_01;
  char *this_ptr_02;
  CCloth *this_ptr_03;
  CCloth *this_ptr_04;
  char *this_ptr_05;
  CSkeleton *this_ptr_06;
  int iVar1;
  
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  this_ptr_01 = &this_ptr->model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_01);
  this_ptr_02 = this_ptr->unk2;
  core_cloth_cpp_CCloth_load_FUN_00438cf0((CCloth *)this_ptr_02,"batwing.cth");
  euler = &(this_ptr->base).base.base.orient;
  position = &(this_ptr->base).base.base.location;
  core_cloth_cpp_CCloth_setup_FUN_00439710
            ((CCloth *)this_ptr_02,&position->position,&euler->vec,this_ptr_01);
  this_ptr_03 = (CCloth *)(this_ptr->unk2 + 0x3fe70);
  core_cloth_cpp_CCloth_load_FUN_00438cf0(this_ptr_03,"noscape.cth");
  core_cloth_cpp_CCloth_setup_FUN_00439710(this_ptr_03,&position->position,&euler->vec,this_ptr_00);
  this_ptr_04 = (CCloth *)(this_ptr->unk2 + 0x7fce0);
  core_cloth_cpp_CCloth_load_FUN_00438cf0(this_ptr_04,"nosskirt.cth");
  core_cloth_cpp_CCloth_setup_FUN_00439710(this_ptr_04,&position->position,&euler->vec,this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(this_ptr_01);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(this_ptr_01);
  this_ptr_05 = this_ptr->unk3;
  DAT_02f43974 = 0;
  core_morph_cpp_CMorph_FUN_0052b430((CMorph *)this_ptr_05,0);
  core_morph_cpp_CMorph_FUN_0052b580((CMorph *)this_ptr_05,0,(CKeyFramedModel *)this_ptr_03,0);
  DAT_02f43974 = 1;
  core_morph_cpp_CMorph_FUN_0052b580((CMorph *)this_ptr_05,0,(CKeyFramedModel *)this_ptr_03,0);
  DAT_02f43974 = 0;
  core_morph_cpp_CMorph_FUN_0052b580((CMorph *)this_ptr_05,0,(CKeyFramedModel *)this_ptr_04,0);
  DAT_02f43974 = 1;
  core_morph_cpp_CMorph_FUN_0052b580((CMorph *)this_ptr_05,0,(CKeyFramedModel *)this_ptr_04,0);
  DAT_02f43974 = 0;
  core_morph_cpp_CMorph_FUN_0052b430((CMorph *)this_ptr_05,1);
  core_morph_cpp_CMorph_FUN_0052b580((CMorph *)this_ptr_05,1,(CKeyFramedModel *)this_ptr_02,0);
  DAT_02f43974 = 1;
  core_morph_cpp_CMorph_FUN_0052b580((CMorph *)this_ptr_05,1,(CKeyFramedModel *)this_ptr_02,0);
  DAT_02f43974 = 0;
  core_morph_cpp_CMorph_getReady_FUN_0052b680((CMorph *)this_ptr_05);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(this_ptr_01);
  (this_ptr->base).base.base.is_transparent = 1;
  this_ptr_06 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_06,"Bip01 Spine2");
  (this_ptr->base).base.carry_hands[0].secondary_bone_index = 0;
  this_ptr->unk4[0xc] = '\0';
  this_ptr->unk4[0xd] = '\0';
  this_ptr->unk4[0xe] = '\0';
  this_ptr->unk4[0xf] = '\0';
  (this_ptr->base).base.carry_hands[0].bone_index = iVar1;
  return;
}
