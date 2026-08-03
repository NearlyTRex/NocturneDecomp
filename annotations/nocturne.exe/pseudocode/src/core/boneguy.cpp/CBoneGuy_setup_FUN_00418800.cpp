// Name: core_boneguy.cpp_CBoneGuy_setup_FUN_00418800
// Address: 00418800
// Address Range: [[00418800, 004189dc]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_setup_FUN_00418800(CBoneGuy *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_boneguy_cpp_CBoneGuy_setup_FUN_00418800(CBoneGuy *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  int iVar1;
  CSkeleton *this_ptr_01;
  CDeformableModel *pCVar2;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr_00);
  DAT_00764794 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_01,"Bip01 Head",1);
  _DAT_007647a0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L ForeArm",1);
  _DAT_007647a4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R ForeArm",1);
  DAT_007647a8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_01,"Bip01 L UpperArm",1);
  DAT_007647ac = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_007647b0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L Foot",1);
  _DAT_007647b4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R Foot",1);
  DAT_00764798 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_01,"Bip01 L Hand",1);
  DAT_0076479c = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_01,"Bip01 R Hand",1);
  DAT_007647b8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_01,"Bip01 Spine",1);
  DAT_007647bc = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_01,"Bip01 Spine2",1);
  DAT_00764794 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_01,"Bip01 Head",1);
  DAT_007647a8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_01,"Bip01 L UpperArm",1);
  DAT_007647ac = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_01,"Bip01 R UpperArm",1);
  DAT_007647b8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_01,"Bip01 Spine",1);
  DAT_007647bc = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_01,"Bip01 Spine2",1);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(this_ptr_00);
  iVar1 = pCVar2->num_parts;
  this_ptr->box_count = iVar1;
  if (0x14 < iVar1) {
    g_CHAR_PTR_01cc4800 = "..\\core\\boneguy.cpp";
    g_INT_01cc4804 = 0x12f;
    core_main_c_FUN_004c8440("CBoneGuy::explode - Not enough containers");
  }
  (this_ptr->base).base.carry_hands[0].bone_index = DAT_00764798;
  (this_ptr->base).base.carry_hands[1].bone_index = DAT_0076479c;
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(&this_ptr->base);
  this_ptr->sfx_handle = 0;
  return;
}
