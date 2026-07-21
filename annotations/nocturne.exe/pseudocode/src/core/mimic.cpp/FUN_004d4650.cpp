// Name: FUN_004d4650
// Address: 004d4650
// Address Range: [[004d4650, 004d49eb]]
// Convention: unknown
// Signature: void FUN_004d4650(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d4650(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  byte bVar7;
  uint auStackY_1010 [1014];
  char *pcVar8;
  uint uStack_28;
  uint uStack_1c;
  
  bVar7 = 0;
  if (*0x01CEA280 != 0) {
    _DAT_01cc4800 = "..\\core\\mimic.cpp";
    _DAT_01cc4804 = 0xb6;
    FUN_004c8440("CMimic::setup - can't use mimic in multi-player!");
  }
  iVar4 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  if (iVar4 == 0) {
    pcVar8 = "stranger.dfm";
  }
  else {
    pcVar8 = (char *)(iVar4 + 0x23b0);
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(param_1 + 0x150,pcVar8);
  iVar4 = param_1 + 0x150;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(iVar4);
  uVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(iVar4);
  _DAT_01cc9094 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 head",1);
  _DAT_01cc9098 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 L Clavicle",1);
  _DAT_01cc909c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 R Clavicle",1);
  _DAT_01cc90a0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 L UpperArm",1);
  _DAT_01cc90a4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 R UpperArm",1);
  _DAT_01cc90a8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 L ForeArm",1);
  _DAT_01cc90ac =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 R ForeArm",1);
  _DAT_01cc90b0 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 L Foot",1)
  ;
  _DAT_01cc90b4 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 R Foot",1)
  ;
  _DAT_01cc90b8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 L Thigh",1);
  _DAT_01cc90bc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 R Thigh",1);
  _DAT_01cc90c0 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 L Calf",1)
  ;
  _DAT_01cc90c4 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 R Calf",1)
  ;
  _DAT_01cc90d4 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 L Hand",1)
  ;
  _DAT_01cc90d8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 R Hand",1)
  ;
  _DAT_01cc90dc = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 Spine2",1)
  ;
  _DAT_01cc90e0 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 Spine",1);
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  core_cloth_cpp_CCloth_load_FUN_00435240(param_1 + 0xbdec,"strcoat.cth");
  core_cloth_cpp_CCloth_setup_FUN_004359e0(param_1 + 0xbdec,param_1 + 0x20,param_1 + 0x30,iVar4);
  uVar3 = core_actor_cpp_createActorByName_FUN_0040d540(param_1 + 0x46924,_DAT_01bcdef4);
  iVar4 = core_actor_cpp_castToClassHash_FUN_0040d890(uVar3);
  *(int *)(param_1 + 0x4757c) = iVar4;
  if (iVar4 == 0) {
    _DAT_01cc4800 = "..\\core\\mimic.cpp";
    _DAT_01cc4804 = 0x101;
    FUN_004c8440("CMimic failed to create morph target actor!");
  }
  (*(code *)**(uint **)(*(int *)(param_1 + 0x4757c) + 0x14c))(*(int *)(param_1 + 0x4757c));
  iVar4 = param_1 + 0x150;
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(iVar4);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(iVar4);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170(param_1 + 0x4694c,0,iVar4);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(iVar4);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x469a0)) {
    iVar5 = 0;
    do {
      iVar4 = iVar4 + 1;
      *(float *)(*(int *)(param_1 + 0x469a4) + 4 + iVar5) =
           -*(float *)(*(int *)(param_1 + 0x469a4) + 4 + iVar5);
      iVar5 = iVar5 + 0x10;
    } while (iVar4 < *(int *)(param_1 + 0x469a0));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x469a8)) {
    iVar5 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x469ac);
      puVar1 = (uint *)(iVar5 + 0x30 + iVar2);
      puVar6 = puVar1 + (uint)bVar7 * -2 + 1;
      uStack_1c = *puVar1;
      *(uint *)(&stack0xffffffe8 + (uint)bVar7 * -8) = *puVar6;
      *(uint *)(&stack0xffffffec + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
           puVar6[(uint)bVar7 * -2 + 1];
      puVar1 = (uint *)(iVar5 + 0x18 + iVar2);
      puVar6 = puVar1 + (uint)bVar7 * -2 + 1;
      uStack_28 = *puVar1;
      *(uint *)(&stack0xffffffdc + (uint)bVar7 * -8) = *puVar6;
      *(uint *)(&stack0xffffffe0 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
           puVar6[(uint)bVar7 * -2 + 1];
      puVar1 = (uint *)(iVar5 + 0x18 + iVar2);
      puVar6 = puVar1 + (uint)bVar7 * -2 + 1;
      *puVar1 = uStack_1c;
      *puVar6 = *(uint *)(&stack0xffffffe8 + (uint)bVar7 * -8);
      puVar6[(uint)bVar7 * -2 + 1] =
           *(uint *)(&stack0xffffffec + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      puVar1 = (uint *)(iVar5 + 0x30 + iVar2);
      puVar6 = puVar1 + (uint)bVar7 * -2 + 1;
      *puVar1 = uStack_28;
      *puVar6 = *(uint *)(&stack0xffffffdc + (uint)bVar7 * -8);
      puVar6[(uint)bVar7 * -2 + 1] =
           *(uint *)(&stack0xffffffe0 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x3c;
    } while (iVar4 < *(int *)(param_1 + 0x469a8));
  }
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800
            (*(int *)(param_1 + 0x4757c) + 0x150);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0
            (*(int *)(param_1 + 0x4757c) + 0x150);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170
            (param_1 + 0x4694c,1,*(int *)(param_1 + 0x4757c) + 0x150);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
            (*(int *)(param_1 + 0x4757c) + 0x150);
  core_morph_cpp_CMorph_getReady_FUN_004e03c0(param_1 + 0x4694c);
  return;
}
