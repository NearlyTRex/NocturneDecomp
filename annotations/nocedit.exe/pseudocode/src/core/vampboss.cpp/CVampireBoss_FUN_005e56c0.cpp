// Name: core_vampboss.cpp_CVampireBoss_FUN_005e56c0
// Address: 005e56c0
// Address Range: [[005e56c0, 005e58c3]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_FUN_005e56c0(CVampireBoss *this_ptr)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_CVampireBoss_FUN_005e56c0(CVampireBoss *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDeformableModelInstance *this_ptr_01;
  CCharacter *pCVar1;
  CSkeleton *this_ptr_02;
  int iVar2;
  
  core_enemy_cpp_CEnemy_FUN_004a9650(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  this_ptr_01 = (CDeformableModelInstance *)(this_ptr->unk1 + 8);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_01);
  core_cloth_cpp_CCloth_load_FUN_00438cf0
            ((CCloth *)(this_ptr->unk1 + 0x22bc),"batwing.cth");
  core_cloth_cpp_FUN_00439710();
  core_cloth_cpp_CCloth_load_FUN_00438cf0
            ((CCloth *)(this_ptr->unk1 + 0x4212c),"noscape.cth");
  core_cloth_cpp_FUN_00439710();
  core_cloth_cpp_CCloth_load_FUN_00438cf0
            ((CCloth *)(this_ptr->unk1 + 0x81f9c),"nosskirt.cth");
  core_cloth_cpp_FUN_00439710();
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
  core_morph_cpp_CMorph_getReady_FUN_0052b680((CMorph *)this_ptr->unk2);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(this_ptr_01);
  (this_ptr->base).base.base.is_transparent = 1;
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_02,"Bip01 Spine2");
  pCVar1 = &(this_ptr->base).base;
  pCVar1->carry_hands[0].unk1[4] = '\0';
  pCVar1->carry_hands[0].unk1[5] = '\0';
  pCVar1->carry_hands[0].unk1[6] = '\0';
  pCVar1->carry_hands[0].unk1[7] = '\0';
  this_ptr->unk3[0xc] = '\0';
  this_ptr->unk3[0xd] = '\0';
  this_ptr->unk3[0xe] = '\0';
  this_ptr->unk3[0xf] = '\0';
  *(int *)(this_ptr->base).base.carry_hands[0].unk1 = iVar2;
  return;
}
