// Name: core_constrct.cpp_FUN_004459c0
// Address: 004459c0
// Address Range: [[004459c0, 00445c60]]
// Convention: unknown
// Signature: void core_constrct_cpp_FUN_004459c0(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_constrct_cpp_FUN_004459c0(CEnemy *param_1)

{
  byte *this_ptr;
  int iVar1;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  float10 fVar2;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,"COMBATMODEHARD");
  if (iVar1 == 0) {
    *(uint *)&param_1[1].field_0x800 = 0x3f400000;
  }
  else {
    *(uint *)&param_1[1].field_0x800 = 0x3f800000;
  }
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(param_1);
  this_ptr = &param_1->field_0x158;
  core_skeleton_cpp_FUN_00569b20((CDeformableModelInstance *)this_ptr);
  fVar2 = (float10)*(float *)&param_1->field_0x2538;
  round();
  *(int *)&param_1[1].field_0x128 = (int)ROUND(fVar2);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                          ((CDeformableModelInstance *)this_ptr);
  DAT_007dc5b0 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 Head",1);
  DAT_007dc5b4 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Dummy05",1)
  ;
  _DAT_007dc5c8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Forearm",1);
  _DAT_007dc5cc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_007dc5d0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_007dc5d4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_007dc5d8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Foot",1);
  _DAT_007dc5dc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Foot",1);
  DAT_007dc5b8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 L Hand",1);
  _DAT_007dc5bc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Hand",1);
  DAT_007dc5c0 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 R Finger0",1);
  _DAT_007dc5c4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Finger0",1);
  DAT_007dc5e0 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 Spine",1);
  _DAT_007dc5e4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine1",1);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                          ((CDeformableModelInstance *)this_ptr);
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,&DAT_005d6dff,1);
  *(int *)&param_1[1].field_0x64 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"torso",1);
  *(int *)&param_1[1].field_0x68 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"lforearm",1);
  *(int *)&param_1[1].field_0x6c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,&DAT_005d6e13,1);
  *(int *)&param_1[1].field_0x70 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"rforearm",1);
  *(int *)&param_1[1].field_0x74 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,&DAT_005d6e21,1);
  *(int *)&param_1[1].field_0x78 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"waist",1);
  *(int *)&param_1[1].field_0x7c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"lthigh",1);
  *(int *)&param_1[1].field_0x84 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"lshin",1);
  *(int *)&param_1[1].field_0x88 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"rthigh",1);
  *(int *)&param_1[1].field_0x8c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"rshin",1);
  *(uint *)&param_1[1].field_0x9c = 0;
  *(int *)&param_1[1].field_0x90 = iVar1;
  return;
}
