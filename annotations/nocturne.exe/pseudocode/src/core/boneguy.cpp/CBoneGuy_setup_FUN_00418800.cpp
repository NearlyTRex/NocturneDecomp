// Name: core_boneguy.cpp_CBoneGuy_setup_FUN_00418800
// Address: 00418800
// Address Range: [[00418800, 004189dc]]
// Convention: unknown
// Signature: void core_boneguy_cpp_CBoneGuy_setup_FUN_00418800(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_boneguy_cpp_CBoneGuy_setup_FUN_00418800(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x150;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(iVar2);
  uVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(iVar2);
  DAT_00764794 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (uVar1,"CBip01 Head" + 1,1);
  _DAT_007647a0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 L ForeArm",1);
  _DAT_007647a4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 R ForeArm",1);
  DAT_007647a8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (uVar1,"Bip01 L UpperArm",1);
  DAT_007647ac = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (uVar1,"Bip01 R UpperArm",1);
  _DAT_007647b0 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 L Foot",1)
  ;
  _DAT_007647b4 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 R Foot",1)
  ;
  DAT_00764798 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 L Hand",1);
  DAT_0076479c = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 R Hand",1);
  DAT_007647b8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 Spine",1);
  DAT_007647bc = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 Spine2",1);
  DAT_00764794 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 Head",1);
  DAT_007647a8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (uVar1,"Bip01 L UpperArm",1);
  DAT_007647ac = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (uVar1,"Bip01 R UpperArm",1);
  DAT_007647b8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 Spine",1);
  DAT_007647bc = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 Spine2",1);
  iVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(iVar2);
  iVar2 = *(int *)(iVar2 + 0xc00);
  *(int *)(param_1 + 0xbda0) = iVar2;
  if (0x14 < iVar2) {
    _DAT_01cc4800 = "..\\core\\boneguy.cpp";
    _DAT_01cc4804 = 0x12f;
    FUN_004c8440("CBoneGuy::explode - Not enough containers");
  }
  *(uint *)(param_1 + 0x24a4) = DAT_00764798;
  *(uint *)(param_1 + 0x24e8) = DAT_0076479c;
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  *(uint *)(param_1 + 0xbd34) = 0;
  return;
}
