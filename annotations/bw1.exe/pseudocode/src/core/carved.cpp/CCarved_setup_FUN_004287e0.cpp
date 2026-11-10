// Name: core_carved.cpp_CCarved_setup_FUN_004287e0
// Address: 004287e0
// Address Range: [[004287e0, 00428a7e]]
// Convention: __cdecl
// Signature: void __cdecl core_carved_cpp_CCarved_setup_FUN_004287e0(CCarved *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_carved_cpp_CCarved_setup_FUN_004287e0(CCarved *this_ptr)

{
  int iVar1;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,"COMBATMODEHARD");
  if (iVar1 == 0) {
    *(uint *)&this_ptr->field_0xc2f0 = 0x3f400000;
  }
  else {
    *(uint *)&this_ptr->field_0xc2f0 = 0x3f800000;
  }
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                          ((CDeformableModelInstance *)&this_ptr->field_0x158);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Head",1);
  *(int *)&this_ptr->field_0xc28c = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                    (this_ptr_00,"Bip01 L Forearm",1);
  *(int *)&this_ptr->field_0xc298 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                    (this_ptr_00,"Bip01 R ForeArm",1);
  *(int *)&this_ptr->field_0xc29c = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                    (this_ptr_00,"Bip01 L UpperArm",1);
  *(int *)&this_ptr->field_0xc2a0 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                    (this_ptr_00,"Bip01 R UpperArm",1);
  *(int *)&this_ptr->field_0xc2a4 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Foot",1);
  *(int *)&this_ptr->field_0xc2a8 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Foot",1);
  *(int *)&this_ptr->field_0xc2ac = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Hand",1);
  *(int *)&this_ptr->field_0xc290 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Hand",1);
  *(int *)&this_ptr->field_0xc294 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine",1);
  *(int *)&this_ptr->field_0xc2b0 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine2",1);
  *(int *)&this_ptr->field_0xc2b4 = iVar1;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                          ((CDeformableModelInstance *)&this_ptr->field_0x158);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_01,"larm01",1);
  *(int *)&this_ptr->field_0xc2b8 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_01,"l4arm01",1);
  *(int *)&this_ptr->field_0xc2bc = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_01,"rarm01",1);
  *(int *)&this_ptr->field_0xc2c0 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_01,"r4arm01",0);
  *(int *)&this_ptr->field_0xc2c4 = iVar1;
  if (iVar1 < 0) {
    *(uint *)&this_ptr->field_0xc2c4 = 0x3b;
  }
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_01,"waist01",0);
  *(int *)&this_ptr->field_0xc2c8 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_01,"torso01",1);
  *(int *)&this_ptr->field_0xc2cc = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_01,"head01",1);
  *(uint *)&this_ptr->field_0x2384 = 0;
  *(int *)&this_ptr->field_0xc2d0 = iVar1;
  *(uint *)&this_ptr->field_0x25a8 = *(uint *)&this_ptr->field_0xc290;
  *(uint *)&this_ptr->field_0x25ac = *(uint *)&this_ptr->field_0xc2bc;
  *(uint *)&this_ptr->field_0x2620 = *(uint *)&this_ptr->field_0xc294;
  *(uint *)&this_ptr->field_0x2624 = *(uint *)&this_ptr->field_0xc2c4;
  core_enemy_cpp_CEnemy_setup_FUN_004a0510((CEnemy *)this_ptr);
  if ((-1 < *(int *)&this_ptr->field_0xc2c8) && (*(float *)&this_ptr->field_0x3000 < 0.0)) {
    *(float *)&this_ptr->field_0x3000 = *(float *)&this_ptr->field_0x2490 + (float)_DAT_005d52d5;
  }
  *(uint *)&this_ptr->field_0xc288 = 0;
  *(uint *)&this_ptr->field_0xc2dc = 0;
  *(uint *)&this_ptr->field_0xc2e0 = 0;
  *(uint *)&this_ptr->field_0xc2d8 = 0;
  return;
}
