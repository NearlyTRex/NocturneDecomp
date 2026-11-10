// Name: core_boneguy.cpp_CBoneGuy_setup_FUN_004184c0
// Address: 004184c0
// Address Range: [[004184c0, 0041869c]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_setup_FUN_004184c0(CBoneGuy *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_boneguy_cpp_CBoneGuy_setup_FUN_004184c0(CBoneGuy *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  int iVar1;
  byte uVar2;
  ushort uVar3;
  CSkeleton *this_ptr_01;
  CDeformableModel *pCVar4;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr_00);
  DAT_007bc944 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"CBip01 Head" + 1,1);
  _DAT_007bc950 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L ForeArm",1);
  _DAT_007bc954 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R ForeArm",1);
  DAT_007bc958 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 L UpperArm",1);
  DAT_007bc95c = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_007bc960 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Foot",1);
  _DAT_007bc964 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Foot",1);
  DAT_007bc948 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 L Hand",1);
  DAT_007bc94c = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 R Hand",1);
  DAT_007bc968 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 Spine",1);
  DAT_007bc96c = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 Spine2",1);
  DAT_007bc944 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 Head",1);
  DAT_007bc958 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 L UpperArm",1);
  DAT_007bc95c = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 R UpperArm",1);
  DAT_007bc968 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 Spine",1);
  DAT_007bc96c = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 Spine2",1);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr_00);
  iVar1 = pCVar4->num_parts;
  this_ptr->box_count = iVar1;
  if (0x14 < iVar1) {
    _DAT_01d046a0 = "..\\core\\boneguy.cpp";
    _DAT_01d046a4 = 0x130;
    core_main_c_FUN_004e4500("CBoneGuy::explode - Not enough containers");
  }
  uVar2 = DAT_007bc948._1_1_;
  uVar3 = DAT_007bc948._2_2_;
  (this_ptr->base).base.carry_hands[0] = (SCarryHand)(byte)DAT_007bc948;
  (this_ptr->base).base.carry_hands[1] = (SCarryHand)uVar2;
  *(ushort *)&(this_ptr->base).base.field_0x261a = uVar3;
  *(int *)&(this_ptr->base).base.field_0x2690 = DAT_007bc94c;
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(&this_ptr->base);
  this_ptr->sfx_handle = 0;
  return;
}
