// Name: core_succubus.cpp_FUN_00540c20
// Address: 00540c20
// Address Range: [[00540c20, 00540f45]]
// Convention: unknown
// Signature: void core_succubus_cpp_FUN_00540c20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_succubus_cpp_FUN_00540c20(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(0x01C775EC + 0x18) == 0) {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
              (param_1 + 0x150,"succubusx.dfm");
    pcVar4 = "hotdemonx.dfm";
  }
  else {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
              (param_1 + 0x150,"succubus.dfm");
    pcVar4 = "hotdemon.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(param_1 + 0xbd24,pcVar4);
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  iVar1 = param_1 + 0x150;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(iVar1);
  iVar2 = param_1 + 0xbd24;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(iVar2);
  core_cloth_cpp_CClothList_load_FUN_00438270(param_1 + 0xdfd8);
  iVar5 = param_1 + 0x30;
  iVar6 = param_1 + 0x20;
  core_cloth_cpp_CClothList_setup_FUN_00438510(param_1 + 0xdfd8,iVar6,iVar5,iVar2,iVar5,iVar6);
  core_cloth_cpp_CClothList_process_FUN_00438550
            (param_1 + 0x2a8c,iVar6,iVar5,0x3d4ccccd,*(uint *)(param_1 + 0x240c),iVar2);
  uVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(iVar1);
  _DAT_02dc9fec = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 Head",1);
  _DAT_02dc9ff8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 L ForeArm",1);
  _DAT_02dc9ffc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 R ForeArm",1);
  _DAT_02dca000 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 L UpperArm",1);
  _DAT_02dca004 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 R UpperArm",1);
  _DAT_02dca008 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 L Foot",1)
  ;
  _DAT_02dca00c = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 R Foot",1)
  ;
  _DAT_02dc9ff0 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 L Hand",1)
  ;
  _DAT_02dc9ff4 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 R Hand",1)
  ;
  _DAT_02dca010 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 Spine",1);
  _DAT_02dca014 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 Spine1",1)
  ;
  _DAT_02dca018 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 Spine2",1)
  ;
  _DAT_02dc9fec = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 Head",1);
  _DAT_02dca000 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 L UpperArm",1);
  _DAT_02dca004 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 R UpperArm",1);
  _DAT_02dca010 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 Spine",1);
  _DAT_02dca018 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 Spine2",1)
  ;
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(iVar2);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(iVar1);
  *(float *)(param_1 + 0x7fc) = *(float *)(param_1 + 0x7fc) + 0.4f;
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(iVar1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(iVar2);
  iVar5 = param_1 + 0xe1a4;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170(iVar5,0,iVar1);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170(iVar5,1,iVar2);
  _DAT_01cd4314 = 0;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0
            (iVar5,1,*(uint *)(param_1 + 0xe16c),0);
  _DAT_01cd4314 = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0
            (iVar5,1,*(uint *)(param_1 + 0xe16c),0);
  _DAT_01cd4314 = 0;
  *(uint *)(param_1 + 0xedcc) = 0;
  core_morph_cpp_CMorph_getReady_FUN_004e03c0(iVar5);
  *(uint *)(param_1 + 0xe19c) = 0;
  *(uint *)(param_1 + 0xe1a0) = 0;
  *(uint *)(param_1 + 0xe194) = 0;
  *(uint *)(param_1 + 0xe198) = 0x40a00000;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(iVar2);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(iVar1);
  return;
}
