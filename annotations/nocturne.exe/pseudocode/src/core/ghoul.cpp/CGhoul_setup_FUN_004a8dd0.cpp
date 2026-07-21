// Name: core_ghoul.cpp_CGhoul_setup_FUN_004a8dd0
// Address: 004a8dd0
// Address Range: [[004a8dd0, 004a9031]]
// Convention: unknown
// Signature: void core_ghoul_cpp_CGhoul_setup_FUN_004a8dd0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_ghoul_cpp_CGhoul_setup_FUN_004a8dd0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = param_1 + 0x150;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(iVar1);
  uVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(iVar1);
  _DAT_01c78c14 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"@Bip01 Head" + 1,1);
  _DAT_01c78c20 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 L ForeArm",1);
  _DAT_01c78c24 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 R ForeArm",1);
  _DAT_01c78c28 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 L UpperArm",1);
  _DAT_01c78c2c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 R UpperArm",1);
  _DAT_01c78c30 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 L Foot",1)
  ;
  _DAT_01c78c34 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 R Foot",1)
  ;
  _DAT_01c78c18 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 L Hand",1)
  ;
  _DAT_01c78c1c = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 R Hand",1)
  ;
  _DAT_01c78c38 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 Spine",1);
  _DAT_01c78c3c = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 Spine2",1)
  ;
  uVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(iVar1);
  uVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (uVar2,"r high arm01",1);
  *(uint *)(param_1 + 0xbd48) = uVar3;
  uVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (uVar2,"r lo arm01",1);
  *(uint *)(param_1 + 0xbd4c) = uVar3;
  uVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (uVar2,"l high arm01",1);
  *(uint *)(param_1 + 0xbd50) = uVar3;
  uVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (uVar2,"l lo arm01",1);
  *(uint *)(param_1 + 0xbd54) = uVar3;
  uVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (uVar2,"r thigh01",1);
  *(uint *)(param_1 + 0xbd58) = uVar3;
  uVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (uVar2,"r shin01",1);
  *(uint *)(param_1 + 0xbd5c) = uVar3;
  uVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (uVar2,"l thigh01",1);
  *(uint *)(param_1 + 0xbd60) = uVar3;
  uVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (uVar2,"l shin01",1);
  *(uint *)(param_1 + 0xbd64) = uVar3;
  uVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (uVar2,"lo torso01",1);
  *(uint *)(param_1 + 0xbd68) = uVar3;
  uVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (uVar2,"high torso01",1);
  *(uint *)(param_1 + 0xbd6c) = uVar3;
  uVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(uVar2,"head01",1);
  *(uint *)(param_1 + 0xbd70) = uVar2;
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  *(uint *)(param_1 + 0xbd80) = 0;
  *(uint *)(param_1 + 0xbd84) = 0;
  *(uint *)(param_1 + 0xbd88) = 0;
  *(uint *)(param_1 + 0xbd8c) = 0;
  *(uint *)(param_1 + 0xbd90) = 0;
  *(uint *)(param_1 + 0xbd74) = 0;
  *(uint *)(param_1 + 0xbd78) = 0;
  *(uint *)(param_1 + 0xbd7c) = 0;
  return;
}
