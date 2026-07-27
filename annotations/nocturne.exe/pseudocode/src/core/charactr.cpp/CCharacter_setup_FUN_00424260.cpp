// Name: core_charactr.cpp_CCharacter_setup_FUN_00424260
// Address: 00424260
// Address Range: [[00424260, 004244a6]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setup_FUN_00424260(int param_1)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_setup_FUN_00424260(int param_1)

{
  char cVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  fVar2 = 9999.0f;
  *(uint *)(param_1 + 0x2dec) = 0;
  *(float *)(param_1 + 0x240c) = fVar2;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (&DAT_007658e4,"stake_b.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&DAT_007658e4);
  iVar6 = param_1;
  do {
    iVar4 = *(int *)(iVar6 + 0x24ac);
    if (iVar4 != 0) {
      iVar5 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0x8c))(iVar4);
      if (iVar5 == 0) {
        (**(code **)(*(int *)(iVar4 + 0x14c) + 0x80))(iVar4,param_1);
      }
      else if (iVar5 != param_1) {
        PTR_01cc4800 = "..\\core\\charactr.cpp";
        INT_01cc4804 = 0x10c;
        core_main_c_FUN_004c8440("%s is carrying %s, but %s thinks it is being carried by %s",param_1,iVar4,iVar4,iVar5);
      }
    }
    iVar6 = iVar6 + 0x44;
  } while (iVar6 != param_1 + 0x88);
  if (*(char *)(param_1 + 0x23b0) != '\0') {
    *(uint *)(param_1 + 0x1a4) = *(uint *)(param_1 + 0x2614);
    core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(param_1 + 0x150);
    uVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                      (param_1 + 0x150,"bip01 head",0);
    uVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3);
    *(uint *)(param_1 + 0x25dc) = uVar3;
  }
  core_charactr_cpp_CCharacter_computeBoundingBox_FUN_004296c0(param_1);
  if (*(int *)(param_1 + 0x260c) != 0) {
    iVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(param_1 + 0x150);
    *(uint *)(param_1 + 0x2f0c) = 4;
    iVar6 = 0;
    if (0 < *(int *)(iVar4 + 0x28558)) {
      do {
        iVar5 = iVar6 + 1;
        core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_004266a0(param_1,iVar4,iVar6);
        iVar6 = iVar5;
      } while (iVar5 < *(int *)(iVar4 + 0x28558));
    }
    iVar5 = 0;
    iVar6 = param_1;
    iVar4 = param_1;
    if (0 < *(int *)(param_1 + 0x2f08)) {
      do {
        *(uint *)(iVar4 + 0x3564) = 4;
        *(uint *)(iVar6 + 0x2f28) = 0x40000000;
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x18;
        iVar4 = iVar4 + 0x29c;
      } while (iVar5 < *(int *)(param_1 + 0x2f08));
    }
  }
  iVar4 = param_1 + 0x2a8c;
  core_cloth_cpp_CClothList_load_FUN_00438270(iVar4);
  iVar6 = param_1 + 0x20;
  core_cloth_cpp_CClothList_setup_FUN_00438510(iVar4,iVar6,param_1 + 0x30,param_1 + 0x150,iVar6);
  core_cloth_cpp_CClothList_process_FUN_00438550
            (iVar4,iVar6,param_1 + 0x30,0x3d4ccccd,*(uint *)(param_1 + 0x240c),param_1 + 0x150
            );
  core_charactr_cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042a800(param_1);
  if (*(char *)(param_1 + 0x2440) != '\0') {
    *(uint *)(param_1 + 0xb63c) = 0;
    return;
  }
  iVar6 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(param_1);
  pcVar7 = (char *)(iVar6 + 1);
  pcVar8 = (char *)(param_1 + 0x2440);
  do {
    cVar1 = *pcVar7;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  *(uint *)(param_1 + 0xb63c) = 0;
  return;
}
