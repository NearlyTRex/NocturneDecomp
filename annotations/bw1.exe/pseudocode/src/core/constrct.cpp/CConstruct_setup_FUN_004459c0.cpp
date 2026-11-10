// Name: core_constrct.cpp_CConstruct_setup_FUN_004459c0
// Address: 004459c0
// Address Range: [[004459c0, 00445c60]]
// Convention: __cdecl
// Signature: void __cdecl core_constrct_cpp_CConstruct_setup_FUN_004459c0(CConstruct *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_constrct_cpp_CConstruct_setup_FUN_004459c0(CConstruct *this_ptr)

{
  byte *this_ptr_00;
  int iVar1;
  CSkeleton *this_ptr_01;
  CDeformableModel *this_ptr_02;
  float10 fVar2;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,"COMBATMODEHARD");
  if (iVar1 == 0) {
    *(uint *)&this_ptr->field_0xca68 = 0x3f400000;
  }
  else {
    *(uint *)&this_ptr->field_0xca68 = 0x3f800000;
  }
  core_enemy_cpp_CEnemy_setup_FUN_004a0510((CEnemy *)this_ptr);
  this_ptr_00 = &this_ptr->field_0x158;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20
            ((CDeformableModelInstance *)this_ptr_00);
  fVar2 = (float10)*(float *)&this_ptr->field_0x2538;
  round();
  *(int *)&this_ptr->field_0xc390 = (int)ROUND(fVar2);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                          ((CDeformableModelInstance *)this_ptr_00);
  DAT_007dc5b0 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_01,"Bip01 Head",1);
  DAT_007dc5b4 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Dummy05",1)
  ;
  _DAT_007dc5c8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Forearm",1);
  _DAT_007dc5cc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R ForeArm",1);
  _DAT_007dc5d0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_007dc5d4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_007dc5d8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Foot",1);
  _DAT_007dc5dc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Foot",1);
  DAT_007dc5b8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_01,"Bip01 L Hand",1);
  _DAT_007dc5bc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Hand",1);
  DAT_007dc5c0 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_01,"Bip01 R Finger0",1);
  _DAT_007dc5c4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Finger0",1);
  DAT_007dc5e0 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_01,"Bip01 Spine",1);
  _DAT_007dc5e4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine1",1);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                          ((CDeformableModelInstance *)this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,&DAT_005d6dff,1);
  *(int *)&this_ptr->field_0xc2cc = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"torso",1);
  *(int *)&this_ptr->field_0xc2d0 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"lforearm",1);
  *(int *)&this_ptr->field_0xc2d4 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,&DAT_005d6e13,1);
  *(int *)&this_ptr->field_0xc2d8 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"rforearm",1);
  *(int *)&this_ptr->field_0xc2dc = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,&DAT_005d6e21,1);
  *(int *)&this_ptr->field_0xc2e0 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"waist",1);
  *(int *)&this_ptr->field_0xc2e4 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"lthigh",1);
  *(int *)&this_ptr->field_0xc2ec = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"lshin",1);
  *(int *)&this_ptr->field_0xc2f0 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"rthigh",1);
  *(int *)&this_ptr->field_0xc2f4 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"rshin",1);
  *(uint *)&this_ptr->field_0xc304 = 0;
  *(int *)&this_ptr->field_0xc2f8 = iVar1;
  return;
}
