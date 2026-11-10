// Name: core_carved.cpp_CCarved_setup_FUN_00425ab0
// Address: 00425ab0
// Address Range: [[00425ab0, 00425d3d]]
// Convention: __cdecl
// Signature: void __cdecl core_carved_cpp_CCarved_setup_FUN_00425ab0(CCarved *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_carved_cpp_CCarved_setup_FUN_00425ab0(CCarved *this_ptr)

{
  byte *this_ptr_00;
  CSkeleton *this_ptr_01;
  int iVar1;
  CDeformableModel *this_ptr_02;
  
  this_ptr_00 = &this_ptr->field_0x158;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
            ((CDeformableModelInstance *)this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          ((CDeformableModelInstance *)this_ptr_00);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Head",1);
  *(int *)&this_ptr->field_0xd078 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                    (this_ptr_01,"Bip01 L Forearm",1);
  *(int *)&this_ptr->field_0xd084 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                    (this_ptr_01,"Bip01 R ForeArm",1);
  *(int *)&this_ptr->field_0xd088 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                    (this_ptr_01,"Bip01 L UpperArm",1);
  *(int *)&this_ptr->field_0xd08c = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                    (this_ptr_01,"Bip01 R UpperArm",1);
  *(int *)&this_ptr->field_0xd090 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Foot",1);
  *(int *)&this_ptr->field_0xd094 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Foot",1);
  *(int *)&this_ptr->field_0xd098 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Hand",1);
  *(int *)&this_ptr->field_0xd07c = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Hand",1);
  *(int *)&this_ptr->field_0xd080 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine",1);
  *(int *)&this_ptr->field_0xd09c = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine2",1);
  *(int *)&this_ptr->field_0xd0a0 = iVar1;
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                          ((CDeformableModelInstance *)this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"larm01",1);
  *(int *)&this_ptr->field_0xd0a4 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"l4arm01",1);
  *(int *)&this_ptr->field_0xd0a8 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"rarm01",1);
  *(int *)&this_ptr->field_0xd0ac = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"r4arm01",0);
  *(int *)&this_ptr->field_0xd0b0 = iVar1;
  if (iVar1 < 0) {
    *(uint *)&this_ptr->field_0xd0b0 = 0x3b;
  }
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"waist01",0);
  *(int *)&this_ptr->field_0xd0b4 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"torso01",1);
  *(int *)&this_ptr->field_0xd0b8 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"head01",1);
  *(uint *)&this_ptr->field_0x2384 = 0;
  *(int *)&this_ptr->field_0xd0bc = iVar1;
  *(uint *)&this_ptr->field_0x25a8 = *(uint *)&this_ptr->field_0xd07c;
  *(uint *)&this_ptr->field_0x25ac = *(uint *)&this_ptr->field_0xd0a8;
  *(uint *)&this_ptr->field_0x2620 = *(uint *)&this_ptr->field_0xd080;
  *(uint *)&this_ptr->field_0x2624 = *(uint *)&this_ptr->field_0xd0b0;
  core_enemy_cpp_CEnemy_setup_FUN_00489110((CEnemy *)this_ptr);
  if ((-1 < *(int *)&this_ptr->field_0xd0b4) && (*(float *)&this_ptr->field_0x3280 < 0.0)) {
    *(float *)&this_ptr->field_0x3280 = *(float *)&this_ptr->field_0x2490 + (float)_DAT_005b7ab7;
  }
  *(uint *)&this_ptr->field_0xd074 = 0;
  *(uint *)&this_ptr->field_0xd0c8 = 0;
  *(uint *)&this_ptr->field_0xd0cc = 0;
  *(uint *)&this_ptr->field_0xd0c4 = 0;
  if (*(int *)&this_ptr->field_0x3268 != 0) {
    return;
  }
  *(uint *)&this_ptr->field_0xce5c = 0x41200000;
  *(uint *)&this_ptr->field_0xce60 = 0x40a00000;
  *(uint *)&this_ptr->field_0x2538 = 0x41a00000;
  return;
}
