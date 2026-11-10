// Name: core_conveyor.cpp_CConstruct_setup_FUN_00436be0
// Address: 00436be0
// Address Range: [[00436be0, 00436e36]]
// Convention: __cdecl
// Signature: void __cdecl core_conveyor_cpp_CConstruct_setup_FUN_00436be0(CConstruct *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_conveyor_cpp_CConstruct_setup_FUN_00436be0(CConstruct *this_ptr)

{
  byte *this_ptr_00;
  CSkeleton *this_ptr_01;
  CDeformableModel *this_ptr_02;
  int iVar1;
  float10 fVar2;
  
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0((CEnemy *)this_ptr);
  this_ptr_00 = &this_ptr->field_0x2b4;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
            ((CDeformableModelInstance *)this_ptr_00);
  fVar2 = (float10)*(float *)&this_ptr->field_0x25a8;
  round();
  *(int *)&this_ptr->field_0x10c10 = (int)ROUND(fVar2);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                          ((CDeformableModelInstance *)this_ptr_00);
  DAT_007c254c = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 Head",1);
  DAT_007c2560 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 L Forearm",1);
  _DAT_007c2564 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R ForeArm",1);
  DAT_007c2568 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 L UpperArm",1);
  DAT_007c256c = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_007c2570 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Foot",1);
  _DAT_007c2574 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Foot",1);
  _DAT_007c2550 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Hand",1);
  DAT_007c2554 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 R Hand",1);
  _DAT_007c2558 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Finger0",1);
  _DAT_007c255c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Finger0",1);
  DAT_007c2578 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 Spine",1);
  _DAT_007c257c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine1",1);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                          ((CDeformableModelInstance *)this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,&DAT_005cdd19,1);
  *(int *)&this_ptr->field_0x10b60 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"torso",1);
  *(int *)&this_ptr->field_0x10b64 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"lforearm",1);
  *(int *)&this_ptr->field_0x10b68 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,&DAT_005cdd2d,1);
  *(int *)&this_ptr->field_0x10b6c = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"rforearm",1);
  *(int *)&this_ptr->field_0x10b70 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,&DAT_005cdd3b,1);
  *(int *)&this_ptr->field_0x10b74 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"waist",1);
  *(int *)&this_ptr->field_0x10b78 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"lthigh",1);
  *(int *)&this_ptr->field_0x10b80 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"lshin",1);
  *(int *)&this_ptr->field_0x10b84 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"rthigh",1);
  *(int *)&this_ptr->field_0x10b88 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"rshin",1);
  *(uint *)&this_ptr->field_0x10b5c = 0;
  *(int *)&this_ptr->field_0x10b8c = iVar1;
  return;
}
