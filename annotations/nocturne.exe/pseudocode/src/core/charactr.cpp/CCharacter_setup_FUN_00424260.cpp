// Name: core_charactr.cpp_CCharacter_setup_FUN_00424260
// Address: 00424260
// Address Range: [[00424260, 004244a6]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setup_FUN_00424260(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_setup_FUN_00424260(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  uVar2 = _DAT_0059b094;
  *(uint *)(param_1 + 0x2dec) = 0;
  *(uint *)(param_1 + 0x240c) = uVar2;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (&DAT_007658e4,"stake_b.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&DAT_007658e4);
  iVar5 = param_1;
  do {
    iVar3 = *(int *)(iVar5 + 0x24ac);
    if (iVar3 != 0) {
      iVar4 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0x8c))(iVar3);
      if (iVar4 == 0) {
        (**(code **)(*(int *)(iVar3 + 0x14c) + 0x80))(iVar3,param_1);
      }
      else if (iVar4 != param_1) {
        _DAT_01cc4800 = "..\\core\\charactr.cpp";
        _DAT_01cc4804 = 0x10c;
        FUN_004c8440("%s is carrying %s, but %s thinks it is being carried by %s",param_1,iVar3,iVar3,iVar4);
      }
    }
    iVar5 = iVar5 + 0x44;
  } while (iVar5 != param_1 + 0x88);
  if (*(char *)(param_1 + 0x23b0) != '\0') {
    *(uint *)(param_1 + 0x1a4) = *(uint *)(param_1 + 0x2614);
    core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(param_1 + 0x150);
    uVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                      (param_1 + 0x150,"bip01 head",0);
    uVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2);
    *(uint *)(param_1 + 0x25dc) = uVar2;
  }
  core_charactr_cpp_CCharacter_computeBoundingBox_FUN_004296c0(param_1);
  if (*(int *)(param_1 + 0x260c) != 0) {
    iVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(param_1 + 0x150);
    *(uint *)(param_1 + 0x2f0c) = 4;
    iVar5 = 0;
    if (0 < *(int *)(iVar3 + 0x28558)) {
      do {
        iVar4 = iVar5 + 1;
        core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_004266a0(param_1,iVar3,iVar5);
        iVar5 = iVar4;
      } while (iVar4 < *(int *)(iVar3 + 0x28558));
    }
    iVar4 = 0;
    iVar5 = param_1;
    iVar3 = param_1;
    if (0 < *(int *)(param_1 + 0x2f08)) {
      do {
        *(uint *)(iVar3 + 0x3564) = 4;
        *(uint *)(iVar5 + 0x2f28) = 0x40000000;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x18;
        iVar3 = iVar3 + 0x29c;
      } while (iVar4 < *(int *)(param_1 + 0x2f08));
    }
  }
  iVar3 = param_1 + 0x2a8c;
  core_cloth_cpp_CClothList_load_FUN_00438270(iVar3);
  iVar5 = param_1 + 0x20;
  core_cloth_cpp_CClothList_setup_FUN_00438510(iVar3,iVar5,param_1 + 0x30,param_1 + 0x150,iVar5);
  core_cloth_cpp_CClothList_process_FUN_00438550
            (iVar3,iVar5,param_1 + 0x30,0x3d4ccccd,*(uint *)(param_1 + 0x240c),param_1 + 0x150
            );
  core_charactr_cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042a800(param_1);
  if (*(char *)(param_1 + 0x2440) != '\0') {
    *(uint *)(param_1 + 0xb63c) = 0;
    return;
  }
  iVar5 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(param_1);
  pcVar6 = (char *)(iVar5 + 1);
  pcVar7 = (char *)(param_1 + 0x2440);
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  *(uint *)(param_1 + 0xb63c) = 0;
  return;
}
