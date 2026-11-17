// Name: core_boneguy.cpp_CBoneGuy_setup_FUN_0041b940
// Address: 0041b940
// Address Range: [[0041b940, 0041bb1c]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_setup_FUN_0041b940(CBoneGuy *this_ptr)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_CBoneGuy_setup_FUN_0041b940(CBoneGuy *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  int iVar1;
  CSkeleton *this_ptr_01;
  CDeformableModel *pCVar2;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr_00);
  g_INT_ARRAY_007c4ff0[0] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Head",1);
  g_INT_ARRAY_007c4ff0[3] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L ForeArm",1);
  g_INT_ARRAY_007c4ff0[4] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R ForeArm",1);
  g_INT_ARRAY_007c4ff0[5] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L UpperArm",1);
  g_INT_ARRAY_007c4ff0[6] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R UpperArm",1);
  g_INT_ARRAY_007c4ff0[7] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Foot",1);
  g_INT_ARRAY_007c4ff0[8] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Foot",1);
  g_INT_ARRAY_007c4ff0[1] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Hand",1);
  g_INT_ARRAY_007c4ff0[2] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Hand",1);
  g_INT_ARRAY_007c4ff0[9] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine",1);
  g_INT_ARRAY_007c4ff0[10] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine2",1);
  g_INT_ARRAY_007c4ff0[0] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Head",1);
  g_INT_ARRAY_007c4ff0[5] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L UpperArm",1);
  g_INT_ARRAY_007c4ff0[6] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R UpperArm",1);
  g_INT_ARRAY_007c4ff0[9] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine",1);
  g_INT_ARRAY_007c4ff0[10] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine2",1);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(this_ptr_00);
  iVar1 = pCVar2->num_parts;
  this_ptr->box_count = iVar1;
  if (0x14 < iVar1) {
    g_CHAR_PTR_01d1d400 = "..\\core\\boneguy.cpp";
    g_INT_01d1d404 = 0x130;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CBoneGuy::explode - Not enough containers");
  }
  (this_ptr->base).base.carry_hands[0].bone_index = g_INT_ARRAY_007c4ff0[1];
  (this_ptr->base).base.carry_hands[1].bone_index = g_INT_ARRAY_007c4ff0[2];
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(&this_ptr->base);
  this_ptr->sfx_handle = 0;
  return;
}
