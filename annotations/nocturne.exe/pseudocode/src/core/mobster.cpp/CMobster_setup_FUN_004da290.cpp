// Name: core_mobster.cpp_CMobster_setup_FUN_004da290
// Address: 004da290
// Address Range: [[004da290, 004da59f]]
// Convention: unknown
// Signature: void core_mobster_cpp_CMobster_setup_FUN_004da290(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mobster_cpp_CMobster_setup_FUN_004da290(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = param_1 + 0x150;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(iVar1);
  uVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(iVar1);
  _DAT_01ccdba8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 Head",1);
  _DAT_01ccdbb4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 L ForeArm",1);
  _DAT_01ccdbb8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 R ForeArm",1);
  _DAT_01ccdbbc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 L UpperArm",1);
  _DAT_01ccdbc0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 R UpperArm",1);
  _DAT_01ccdbc4 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 L Foot",1)
  ;
  _DAT_01ccdbc8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 R Foot",1)
  ;
  _DAT_01ccdbac = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 L Hand",1)
  ;
  _DAT_01ccdbb0 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 R Hand",1)
  ;
  _DAT_01ccdbcc = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 Spine",1);
  _DAT_01ccdbd0 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 Spine1",1)
  ;
  _DAT_01ccdbd4 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 Spine2",1)
  ;
  _DAT_01ccdba8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 Head",1);
  _DAT_01ccdbbc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 L UpperArm",1);
  _DAT_01ccdbc0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 R UpperArm",1);
  _DAT_01ccdbcc = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 Spine",1);
  _DAT_01ccdbd4 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 Spine2",1)
  ;
  uVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(iVar1);
  uVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(uVar2,"larm01",1);
  *(uint *)(param_1 + 0xbdc8) = uVar3;
  uVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(uVar2,"l4arm01",1)
  ;
  *(uint *)(param_1 + 0xbdcc) = uVar3;
  uVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(uVar2,"rarm01",1);
  *(uint *)(param_1 + 0xbdd0) = uVar3;
  uVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(uVar2,"r4arm01",1)
  ;
  *(uint *)(param_1 + 0xbdd4) = uVar3;
  uVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (uVar2,"rthigh01",1);
  *(uint *)(param_1 + 0xbdd8) = uVar3;
  uVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(uVar2,"rshin01",1)
  ;
  *(uint *)(param_1 + 0xbddc) = uVar3;
  uVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (uVar2,"lthigh01",1);
  *(uint *)(param_1 + 0xbde0) = uVar3;
  uVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(uVar2,"lshin01",1)
  ;
  *(uint *)(param_1 + 0xbde4) = uVar3;
  uVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(uVar2,"waist01",1)
  ;
  *(uint *)(param_1 + 0xbde8) = uVar3;
  uVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(uVar2,"torso01",1)
  ;
  *(uint *)(param_1 + 0xbdec) = uVar3;
  uVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(uVar2,"head01",1);
  *(uint *)(param_1 + 0xbdf0) = uVar2;
  *(uint *)(param_1 + 0x24a4) = _DAT_01ccdbac;
  *(uint *)(param_1 + 0x24a8) = *(uint *)(param_1 + 0xbdcc);
  *(uint *)(param_1 + 0x24e8) = _DAT_01ccdbb0;
  *(uint *)(param_1 + 0x24ec) = *(uint *)(param_1 + 0xbdd4);
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  *(uint *)(param_1 + 0xbdf4) = 0;
  *(uint *)(param_1 + 0xbdf8) = 0;
  if (*(int *)(param_1 + 0xbd44) != 0) {
    *(uint *)(param_1 + 0xbd20) = 1;
  }
  *(uint *)(param_1 + 0xbdbc) = 0;
  *(uint *)(param_1 + 0xbdc0) = 0;
  *(uint *)(param_1 + 0xbdc4) = 0;
  *(uint *)(param_1 + 0xbdb8) = 0;
  return;
}
