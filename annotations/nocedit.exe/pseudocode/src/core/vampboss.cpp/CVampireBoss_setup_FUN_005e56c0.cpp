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
  CSkeleton *this_ptr_02;
  int iVar1;
  
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  this_ptr_01 = &this_ptr->model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_01);
  core_cloth_cpp_CCloth_load_FUN_00438cf0((CCloth *)this_ptr->unk2,"batwing.cth");
  euler = &(this_ptr->base).base.base.orient;
  position = &(this_ptr->base).base.base.location;
  core_cloth_cpp_CCloth_setup_FUN_00439710
            ((CCloth *)this_ptr->unk2,&position->position,&euler->vec,this_ptr_01);
  core_cloth_cpp_CCloth_load_FUN_00438cf0
            ((CCloth *)(this_ptr->unk2 + 0x3fe70),"noscape.cth");
  core_cloth_cpp_CCloth_setup_FUN_00439710
            ((CCloth *)(this_ptr->unk2 + 0x3fe70),&position->position,&euler->vec,this_ptr_00);
  core_cloth_cpp_CCloth_load_FUN_00438cf0
            ((CCloth *)(this_ptr->unk2 + 0x7fce0),"nosskirt.cth");
  core_cloth_cpp_CCloth_setup_FUN_00439710
            ((CCloth *)(this_ptr->unk2 + 0x7fce0),&position->position,&euler->vec,this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(this_ptr_01);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(this_ptr_01);
  DAT_02f43974 = 0;
  core_morph_cpp_FUN_0052b430();
  core_morph_cpp_FUN_0052b580();
  DAT_02f43974 = 1;
  core_morph_cpp_FUN_0052b580();
  DAT_02f43974 = 0;
  core_morph_cpp_FUN_0052b580();
  DAT_02f43974 = 1;
  core_morph_cpp_FUN_0052b580();
  DAT_02f43974 = 0;
  core_morph_cpp_FUN_0052b430();
  core_morph_cpp_FUN_0052b580();
  DAT_02f43974 = 1;
  core_morph_cpp_FUN_0052b580();
  DAT_02f43974 = 0;
  core_morph_cpp_CMorph_getReady_FUN_0052b680((CMorph *)this_ptr->unk3);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(this_ptr_01);
  (this_ptr->base).base.base.is_transparent = 1;
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_02,"Bip01 Spine2");
  (this_ptr->base).base.carry_hands[0].secondary_bone_index = 0;
  this_ptr->unk4[0xc] = '\0';
  this_ptr->unk4[0xd] = '\0';
  this_ptr->unk4[0xe] = '\0';
  this_ptr->unk4[0xf] = '\0';
  (this_ptr->base).base.carry_hands[0].bone_index = iVar1;
  return;
}
