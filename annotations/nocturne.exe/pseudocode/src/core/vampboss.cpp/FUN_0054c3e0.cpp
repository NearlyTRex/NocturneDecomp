// Name: core_vampboss.cpp_FUN_0054c3e0
// Address: 0054c3e0
// Address Range: [[0054c3e0, 0054c5e3]]
// Convention: unknown
// Signature: void core_vampboss_cpp_FUN_0054c3e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_vampboss_cpp_FUN_0054c3e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  iVar2 = param_1 + 0x150;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(iVar2);
  iVar3 = param_1 + 0xbd24;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(iVar3);
  iVar4 = param_1 + 0xdfd8;
  core_cloth_cpp_CCloth_load_FUN_00435240(iVar4,"batwing.cth");
  iVar7 = param_1 + 0x30;
  iVar1 = param_1 + 0x20;
  core_cloth_cpp_CCloth_setup_FUN_004359e0(iVar4,iVar1,iVar7,iVar3,iVar7);
  iVar5 = param_1 + 0x48b08;
  core_cloth_cpp_CCloth_load_FUN_00435240(iVar5,"noscape.cth");
  core_cloth_cpp_CCloth_setup_FUN_004359e0(iVar5,iVar1,iVar7,iVar2);
  iVar8 = param_1 + 0x83638;
  core_cloth_cpp_CCloth_load_FUN_00435240(iVar8,"nosskirt.cth",iVar7,iVar8);
  core_cloth_cpp_CCloth_setup_FUN_004359e0(iVar8,iVar1,iVar7,iVar2);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(iVar2);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(iVar2);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(iVar3);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(iVar3);
  iVar7 = param_1 + 0xbe16c;
  _DAT_01cd4314 = 0;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170(iVar7,0,iVar2);
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0(iVar7,0,iVar5,0);
  _DAT_01cd4314 = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0(iVar7,0,iVar5,0);
  _DAT_01cd4314 = 0;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0(iVar7,0,iVar8,0);
  _DAT_01cd4314 = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0(iVar7,0,iVar8,0);
  _DAT_01cd4314 = 0;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170(iVar7,1,iVar3);
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0(iVar7,1,iVar4,0);
  _DAT_01cd4314 = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0(iVar7,1,iVar4,0);
  _DAT_01cd4314 = 0;
  core_morph_cpp_CMorph_getReady_FUN_004e03c0(iVar7);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(iVar2);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(iVar3);
  *(uint *)(param_1 + 0xfc) = 1;
  uVar6 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(iVar2);
  uVar6 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar6,"Bip01 Spine2",1);
  *(uint *)(param_1 + 0x24a8) = 0;
  *(uint *)(param_1 + 0xbeda8) = 0;
  *(uint *)(param_1 + 0x24a4) = uVar6;
  return;
}
