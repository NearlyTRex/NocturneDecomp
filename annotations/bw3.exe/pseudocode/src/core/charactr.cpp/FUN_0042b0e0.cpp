// Name: core_charactr.cpp_FUN_0042b0e0
// Address: 0042b0e0
// Address Range: [[0042b0e0, 0042b3fd]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042b0e0(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_0042b0e0(CCharacter *param_1)

{
  char cVar1;
  CSkeleton *pCVar2;
  int iVar3;
  CCharacter *pCVar4;
  uint uVar5;
  CCharacter *pCVar6;
  byte *this_ptr;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  
  core_actor_cpp_FUN_00408890((CDemonActor *)param_1);
  *(uint *)&param_1->field_0x2504 = _DAT_005dd234;
  *(uint *)&param_1->field_0x3284 = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)&DAT_007e2b34,"stake_b.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
            ((CKeyFramedModelInstance *)&DAT_007e2b34);
  pCVar4 = param_1;
  do {
    iVar9 = *(int *)&pCVar4->field_0x25b0;
    if (iVar9 != 0) {
      pCVar6 = (CCharacter *)(**(code **)(*(int *)(iVar9 + 0x154) + 0x94))(iVar9);
      if (pCVar6 == (CCharacter *)0x0) {
        (**(code **)(*(int *)(iVar9 + 0x154) + 0x88))(iVar9,param_1);
      }
      else if (pCVar6 != param_1) {
        _DAT_01d71de0 = "..\\core\\charactr.cpp";
        _DAT_01d71de4 = 0x145;
        core_main_c_FUN_004e4330("%s is carrying %s, but %s thinks it is being carried by %s",param_1,iVar9,iVar9,pCVar6);
      }
    }
    pCVar4 = (CCharacter *)&pCVar4->field_0x78;
  } while (pCVar4 != (CCharacter *)&param_1->field_0xf0);
  if (param_1->field_0x24a8 != '\0') {
    *(uint *)&param_1->field_0x1ac = *(uint *)&param_1->field_0x27b8;
    core_skeleton_cpp_FUN_0054e6b0((CDeformableModelInstance *)&param_1->field_0x158);
    iVar9 = 0;
    pcVar8 = "bip01 head";
    pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                       ((CDeformableModelInstance *)&param_1->field_0x158);
    iVar9 = core_skeleton_cpp_FUN_00548090(pCVar2,pcVar8,iVar9);
    *(int *)&param_1->field_0x2774 = iVar9;
  }
  core_charactr_cpp_FUN_004322a0(param_1);
  if (*(int *)&param_1->field_0x27a4 != 0) {
    pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                       ((CDeformableModelInstance *)&param_1->field_0x158);
    iVar9 = 0;
    *(uint *)&param_1->field_0x33a4 = 4;
    iVar3 = _stricmp(&param_1->field_0x24a8,"shadow.dfm");
    if (iVar3 == 0) {
      iVar9 = 0x10;
    }
    if (iVar9 < *(int *)&pCVar2->field_0x1de78) {
      do {
        iVar3 = iVar9 + 1;
        core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_0042e4b0(param_1,pCVar2,iVar9);
        iVar9 = iVar3;
      } while (iVar3 < *(int *)&pCVar2->field_0x1de78);
    }
    iVar9 = 0;
    pCVar4 = param_1;
    pCVar6 = param_1;
    if (0 < *(int *)&param_1->field_0x33a0) {
      do {
        *(uint *)&pCVar4->field_0x3a04 = 4;
        *(uint *)&pCVar6->field_0x33c0 = 0x40000000;
        iVar9 = iVar9 + 1;
        pCVar4 = (CCharacter *)&pCVar4->field_0x2a4;
        pCVar6 = (CCharacter *)&pCVar6->field_0x18;
      } while (iVar9 < *(int *)&param_1->field_0x33a0);
    }
  }
  this_ptr = &param_1->field_0x2f08;
  core_cloth_cpp_CClothList_load_FUN_0043f920((CClothList *)this_ptr);
  core_cloth_cpp_CClothList_setup_FUN_0043fbc0
            ((CClothList *)this_ptr,(CVector3f *)&param_1->field_0x20,
             (CVector3f *)&param_1->field_0x30,(CDeformableModelInstance *)&param_1->field_0x158);
  core_cloth_cpp_CClothList_process_FUN_0043fc00
            ((CClothList *)this_ptr,(CVector3f *)&param_1->field_0x20,
             (CVector3f *)&param_1->field_0x30,0.05,*(float *)&param_1->field_0x2504,
             (CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433880(param_1);
  if (param_1->field_0x2544 == '\0') {
    pcVar8 = core_actor_cpp_FUN_00408870((CDemonActor *)param_1);
    pcVar8 = pcVar8 + 1;
    pcVar7 = &param_1->field_0x2544;
    do {
      cVar1 = *pcVar8;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
  }
  *(uint *)&param_1->field_0xbc64 = 0;
  if (*(int *)&param_1->field_0xcdc4 != 0) {
    *(uint *)&param_1->field_0xf8 = 0;
    *(uint *)&param_1->field_0xfc = 1;
  }
  *(uint *)&param_1->field_0x2764 = 0;
  *(uint *)&param_1->field_0x273c = 0;
  *(uint *)&param_1->field_0x2760 = 0;
  uVar5 = core_actor_cpp_FUN_0040ce40(0x3f000000,0x3f800000);
  *(uint *)&param_1->field_0x30c4 = uVar5;
  uVar5 = core_actor_cpp_FUN_0040ce40(0x3f000000,0x3f800000);
  *(uint *)&param_1->field_0x30c8 = uVar5;
  *(uint *)&param_1->field_0x30cc = 0;
  return;
}
