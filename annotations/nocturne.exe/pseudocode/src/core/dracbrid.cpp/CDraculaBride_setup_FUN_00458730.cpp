// Name: core_dracbrid.cpp_CDraculaBride_setup_FUN_00458730
// Address: 00458730
// Address Range: [[00458730, 00458a10]]
// Convention: unknown
// Signature: void core_dracbrid_cpp_CDraculaBride_setup_FUN_00458730(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dracbrid_cpp_CDraculaBride_setup_FUN_00458730(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  iVar2 = param_1 + 0x23b0;
  if (*(int *)(0x01C775EC + 0x18) == 0) {
    iVar1 = _stricmp(iVar2,"nbride2.dfm");
    if (iVar1 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
                (param_1 + 0x150,"nbride2x.dfm");
    }
    iVar1 = _stricmp(iVar2,"nbride3.dfm");
    if (iVar1 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
                (param_1 + 0x150,"nbride3x.dfm");
    }
    iVar2 = _stricmp(iVar2,"nbride4.dfm");
    if (iVar2 != 0) goto LAB_004587c5;
    pcVar5 = "nbride4x.dfm";
  }
  else {
    iVar1 = _stricmp(iVar2,"nbride2x.dfm");
    if (iVar1 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
                (param_1 + 0x150,"nbride2.dfm");
    }
    iVar1 = _stricmp(iVar2,"nbride3x.dfm");
    if (iVar1 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
                (param_1 + 0x150,"nbride3.dfm");
    }
    iVar2 = _stricmp(iVar2,"nbride4x.dfm");
    if (iVar2 != 0) goto LAB_004587c5;
    pcVar5 = "nbride4.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(param_1 + 0x150,pcVar5);
LAB_004587c5:
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  uVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(param_1 + 0x150);
  _DAT_01b4d260 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 Head",1);
  _DAT_01b4d264 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 L Hand",1)
  ;
  _DAT_01b4d268 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 R Hand",1)
  ;
  _DAT_01b4d26c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 L UpperArm",1);
  _DAT_01b4d270 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 R UpperArm",1);
  _DAT_01b4d274 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 Spine",1);
  _DAT_01b4d278 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 Spine1",1)
  ;
  _DAT_01b4d27c = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 Spine2",1)
  ;
  uVar3 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(param_1 + 0x150);
  uVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(uVar3,"larm01",1);
  *(uint *)(param_1 + 0xbd24) = uVar4;
  uVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(uVar3,"l4arm01",1)
  ;
  *(uint *)(param_1 + 0xbd28) = uVar4;
  uVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(uVar3,"rarm01",1);
  *(uint *)(param_1 + 0xbd2c) = uVar4;
  uVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(uVar3,"r4arm01",1)
  ;
  *(uint *)(param_1 + 0xbd30) = uVar4;
  uVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(uVar3,"lshin01",1)
  ;
  *(uint *)(param_1 + 0xbd34) = uVar4;
  uVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(uVar3,"rshin01",1)
  ;
  *(uint *)(param_1 + 0xbd38) = uVar4;
  uVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(uVar3,"torso01",1)
  ;
  *(uint *)(param_1 + 0xbd3c) = uVar4;
  uVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(uVar3,"waist01",1)
  ;
  *(uint *)(param_1 + 0xbd40) = uVar4;
  uVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(uVar3,"head01",1);
  *(uint *)(param_1 + 0xbd44) = uVar3;
  *(uint *)(param_1 + 0xbdcc) = 0;
  uVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40a00000,0x41200000);
  *(uint *)(param_1 + 0xbdb8) = uVar3;
  uVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40000000,0x41a00000);
  *(uint *)(param_1 + 0xbdbc) = uVar3;
  return;
}
