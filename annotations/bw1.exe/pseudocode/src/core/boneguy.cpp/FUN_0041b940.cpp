// Name: core_boneguy.cpp_FUN_0041b940
// Address: 0041b940
// Address Range: [[0041b940, 0041bb1c]]
// Convention: unknown
// Signature: void core_boneguy_cpp_FUN_0041b940(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_boneguy_cpp_FUN_0041b940(CEnemy *param_1)

{
  byte *this_ptr;
  int iVar1;
  CSkeleton *this_ptr_00;
  CDeformableModel *pCVar2;
  
  this_ptr = &param_1->field_0x158;
  core_skeleton_cpp_FUN_00569b20((CDeformableModelInstance *)this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                          ((CDeformableModelInstance *)this_ptr);
  DAT_007c4ff0 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"CBip01 Head" + 1,1);
  _DAT_007c4ffc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_007c5000 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R ForeArm",1);
  DAT_007c5004 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 L UpperArm",1);
  DAT_007c5008 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_007c500c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Foot",1);
  _DAT_007c5010 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Foot",1);
  DAT_007c4ff4 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 L Hand",1);
  DAT_007c4ff8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 R Hand",1);
  DAT_007c5014 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 Spine",1);
  DAT_007c5018 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 Spine2",1);
  DAT_007c4ff0 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 Head",1);
  DAT_007c5004 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 L UpperArm",1);
  DAT_007c5008 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 R UpperArm",1);
  DAT_007c5014 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 Spine",1);
  DAT_007c5018 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 Spine2",1);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                     ((CDeformableModelInstance *)this_ptr);
  iVar1 = *(int *)&pCVar2->field_0xc00;
  *(int *)&param_1[1].field_0x7c = iVar1;
  if (0x14 < iVar1) {
    _DAT_01d1d400 = "..\\core\\boneguy.cpp";
    _DAT_01d1d404 = 0x130;
    core_main_c_FUN_005030e0("CBoneGuy::explode - Not enough containers");
  }
  *(int *)&param_1->field_0x25a8 = DAT_007c4ff4;
  *(int *)&param_1->field_0x2620 = DAT_007c4ff8;
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(param_1);
  *(uint *)&param_1[1].field_0x10 = 0;
  return;
}
