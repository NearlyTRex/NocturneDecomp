// Name: core_constrct.cpp_CConstruct_setup_FUN_004425f0
// Address: 004425f0
// Address Range: [[004425f0, 004429d2]]
// Convention: __cdecl
// Signature: void __cdecl core_constrct_cpp_CConstruct_setup_FUN_004425f0(CConstruct *this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004428a4) */
/* WARNING: Removing unreachable block (ram,0x0044296f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_constrct_cpp_CConstruct_setup_FUN_004425f0(CConstruct *this_ptr)

{
  byte *this_ptr_00;
  uint uVar1;
  int iVar2;
  CSkeleton *this_ptr_01;
  CDeformableModel *this_ptr_02;
  float10 fVar3;
  
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (0x01C6E360,"COMBATMODEHARD");
  if (iVar2 == 0) {
    *(uint *)&this_ptr->field_0xd858 = 0x3f400000;
  }
  else {
    *(uint *)&this_ptr->field_0xd858 = 0x3f800000;
  }
  core_enemy_cpp_CEnemy_setup_FUN_00489110((CEnemy *)this_ptr);
  this_ptr_00 = &this_ptr->field_0x158;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
            ((CDeformableModelInstance *)this_ptr_00);
  fVar3 = (float10)*(float *)&this_ptr->field_0x2538;
  round();
  *(int *)&this_ptr->field_0xd17c = (int)ROUND(fVar3);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          ((CDeformableModelInstance *)this_ptr_00);
  DAT_007f8e64 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                           (this_ptr_01,"Bip01 Head",1);
  DAT_007f8e68 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Dummy05",1)
  ;
  _DAT_007f8e7c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Forearm",1);
  _DAT_007f8e80 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R ForeArm",1);
  _DAT_007f8e84 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_007f8e88 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_007f8e8c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Foot",1);
  _DAT_007f8e90 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Foot",1);
  DAT_007f8e6c = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                           (this_ptr_01,"Bip01 L Hand",1);
  _DAT_007f8e70 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Hand",1);
  DAT_007f8e74 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                           (this_ptr_01,"Bip01 R Finger0",1);
  _DAT_007f8e78 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Finger0",1);
  DAT_007f8e94 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                           (this_ptr_01,"Bip01 Spine",1);
  _DAT_007f8e98 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine1",1);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                          ((CDeformableModelInstance *)this_ptr_00);
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,&DAT_005b9506,1);
  *(int *)&this_ptr->field_0xd0b8 = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"torso",1);
  *(int *)&this_ptr->field_0xd0bc = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"lforearm",1);
  *(int *)&this_ptr->field_0xd0c0 = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,&DAT_005b951a,1);
  *(int *)&this_ptr->field_0xd0c4 = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"rforearm",1);
  *(int *)&this_ptr->field_0xd0c8 = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,&DAT_005b9528,1);
  *(int *)&this_ptr->field_0xd0cc = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"waist",1);
  *(int *)&this_ptr->field_0xd0d0 = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"lthigh",1);
  *(int *)&this_ptr->field_0xd0d8 = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"lshin",1);
  *(int *)&this_ptr->field_0xd0dc = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"rthigh",1);
  *(int *)&this_ptr->field_0xd0e0 = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"rshin",1);
  *(uint *)&this_ptr->field_0xd0f0 = 0;
  *(int *)&this_ptr->field_0xd0e4 = iVar2;
  if (*(int *)&this_ptr->field_0x3268 == 0) {
    uVar1 = *(uint *)&this_ptr->field_0xd84c;
    if (uVar1 == 0) {
      *(uint *)&this_ptr->field_0xce5c = 0x41200000;
      *(uint *)&this_ptr->field_0xce60 = 0x41200000;
      *(uint *)&this_ptr->field_0x2538 = 0x42340000;
      fVar3 = (float10)*(float *)&this_ptr->field_0x2538;
      round();
      *(int *)&this_ptr->field_0xd17c = (int)ROUND(fVar3);
      return;
    }
    if (1 < uVar1) {
      if (uVar1 == 2) {
        *(uint *)&this_ptr->field_0xce5c = 0x41a00000;
        *(uint *)&this_ptr->field_0xce60 = 0x41200000;
        *(uint *)&this_ptr->field_0x2538 = 0x42820000;
        *(uint *)&this_ptr->field_0xd85c = 2;
        fVar3 = (float10)*(float *)&this_ptr->field_0x2538;
        round();
        *(int *)&this_ptr->field_0xd17c = (int)ROUND(fVar3);
        return;
      }
      fVar3 = (float10)*(float *)&this_ptr->field_0x2538;
      round();
      *(int *)&this_ptr->field_0xd17c = (int)ROUND(fVar3);
      return;
    }
    *(uint *)&this_ptr->field_0xce5c = 0x41700000;
    *(uint *)&this_ptr->field_0xce60 = 0x41200000;
    *(uint *)&this_ptr->field_0xd85c = 3;
    *(uint *)&this_ptr->field_0x2538 = 0x425c0000;
    fVar3 = (float10)*(float *)&this_ptr->field_0x2538;
    round();
    *(int *)&this_ptr->field_0xd17c = (int)ROUND(fVar3);
    return;
  }
  uVar1 = *(uint *)&this_ptr->field_0xd84c;
  if (uVar1 == 0) {
    *(uint *)&this_ptr->field_0xd17c = 0x2d;
    return;
  }
  if (1 < uVar1) {
    if (uVar1 == 2) {
      *(uint *)&this_ptr->field_0xd17c = 0x41;
      return;
    }
    return;
  }
  *(uint *)&this_ptr->field_0xd17c = 0x37;
  return;
}
