// Name: core_zombie.cpp_CZombie_setup_FUN_0055ec20
// Address: 0055ec20
// Address Range: [[0055ec20, 0055ef42]]
// Convention: unknown
// Signature: void core_zombie_cpp_CZombie_setup_FUN_0055ec20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_zombie_cpp_CZombie_setup_FUN_0055ec20(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1 + 0x150;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(iVar3);
  uVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(iVar3);
  uVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 Head",1);
  *(uint *)(param_1 + 0xbdb4) = uVar2;
  uVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 L ForeArm",1);
  *(uint *)(param_1 + 0xbdc0) = uVar2;
  uVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 R ForeArm",1);
  *(uint *)(param_1 + 0xbdc4) = uVar2;
  uVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 L UpperArm",1);
  *(uint *)(param_1 + 0xbdc8) = uVar2;
  uVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 R UpperArm",1);
  *(uint *)(param_1 + 0xbdcc) = uVar2;
  uVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 L Foot",1);
  *(uint *)(param_1 + 0xbdd0) = uVar2;
  uVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 R Foot",1);
  *(uint *)(param_1 + 0xbdd4) = uVar2;
  uVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 L Hand",1);
  *(uint *)(param_1 + 0xbdb8) = uVar2;
  uVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 R Hand",1);
  *(uint *)(param_1 + 0xbdbc) = uVar2;
  uVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 Spine",1);
  *(uint *)(param_1 + 0xbdd8) = uVar2;
  uVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 Spine2",1);
  *(uint *)(param_1 + 0xbddc) = uVar1;
  uVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(iVar3);
  uVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(uVar1,"larm01",1);
  *(uint *)(param_1 + 0xbde0) = uVar2;
  uVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(uVar1,"l4arm01",1)
  ;
  *(uint *)(param_1 + 0xbde4) = uVar2;
  uVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(uVar1,"rarm01",1);
  *(uint *)(param_1 + 0xbde8) = uVar2;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(uVar1,"r4arm01",0)
  ;
  *(int *)(param_1 + 0xbdec) = iVar3;
  if (iVar3 < 0) {
    *(uint *)(param_1 + 0xbdec) = 0x1d;
  }
  uVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(uVar1,"waist01",0)
  ;
  *(uint *)(param_1 + 0xbdf0) = uVar2;
  uVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(uVar1,"torso01",1)
  ;
  *(uint *)(param_1 + 0xbdf4) = uVar2;
  uVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(uVar1,"head01",1);
  *(uint *)(param_1 + 0xbdf8) = uVar1;
  *(uint *)(param_1 + 0x2304) = 0;
  iVar3 = _stricmp(param_1 + 0x23b0,"newzomb1.dfm");
  if (iVar3 == 0) {
    uVar1 = *(uint *)(param_1 + 0xbde0);
    *(uint *)(param_1 + 0xbde0) = *(uint *)(param_1 + 0xbde8);
    *(uint *)(param_1 + 0xbde8) = uVar1;
    uVar1 = *(uint *)(param_1 + 0xbde4);
    *(uint *)(param_1 + 0xbde4) = *(uint *)(param_1 + 0xbdec);
    *(uint *)(param_1 + 0xbdec) = uVar1;
  }
  *(uint *)(param_1 + 0x24a4) = *(uint *)(param_1 + 0xbdb8);
  *(uint *)(param_1 + 0x24a8) = *(uint *)(param_1 + 0xbde4);
  *(uint *)(param_1 + 0x24e8) = *(uint *)(param_1 + 0xbdbc);
  *(uint *)(param_1 + 0x24ec) = *(uint *)(param_1 + 0xbdec);
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  *(uint *)(param_1 + 0xfc) = (uint)(*(int *)(param_1 + 0xbda8) != 0);
  uVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x3f800000);
  *(uint *)(param_1 + 0xbe0c) = uVar1;
  if ((-1 < *(int *)(param_1 + 0xbdf0)) && (*(float *)(param_1 + 0x2de8) < 0.0)) {
    *(float *)(param_1 + 0x2de8) = *(float *)(param_1 + 0x2398) + (float)_DAT_00598506;
  }
  iVar3 = param_1 + 0x23b0;
  *(uint *)(param_1 + 0xbe00) = 0;
  *(uint *)(param_1 + 0xbdb0) = 0;
  iVar4 = _stricmp(iVar3,"newzchik.dfm");
  if (((iVar4 == 0) ||
      (iVar4 = _stricmp(iVar3,"zombho1.dfm"), iVar4 == 0)) ||
     (iVar3 = _stricmp(iVar3,"zombho2.dfm"), iVar3 == 0)) {
    *(uint *)(param_1 + 0xbdb0) = 1;
  }
  *(uint *)(param_1 + 0xbe08) = 0;
  *(uint *)(param_1 + 0xbe04) = 0;
  return;
}
