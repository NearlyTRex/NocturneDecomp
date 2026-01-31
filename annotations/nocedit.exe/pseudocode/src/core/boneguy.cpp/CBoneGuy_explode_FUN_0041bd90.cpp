// Name: core_boneguy.cpp_CBoneGuy_explode_FUN_0041bd90
// Address: 0041bd90
// Address Range: [[0041bd90, 0041bf6c]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_explode_FUN_0041bd90(CBoneGuy *this_ptr)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_CBoneGuy_explode_FUN_0041bd90(CBoneGuy *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  int iVar1;
  CSkeleton *this_ptr_01;
  CDeformableModel *pCVar2;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  DAT_00822944 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Head");
  INT_00822950 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L ForeArm");
  INT_00822954 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R ForeArm");
  INT_00822958 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L UpperArm");
  INT_0082295c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R UpperArm");
  INT_00822960 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Foot");
  INT_00822964 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Foot");
  DAT_00822948 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Hand");
  DAT_0082294c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Hand");
  DAT_00822968 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine");
  DAT_0082296c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine2");
  DAT_00822944 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Head");
  INT_00822958 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L UpperArm");
  INT_0082295c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R UpperArm");
  DAT_00822968 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine");
  DAT_0082296c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine2");
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  iVar1 = pCVar2->num_parts;
  this_ptr->box_count = iVar1;
  if (0x14 < iVar1) {
    g_CurrentFilename = "..\\core\\boneguy.cpp";
    g_CurrentLineNumber = 0x12f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CBoneGuy::explode - Not enough containers");
  }
  *(int *)(this_ptr->base).base.carry_hands[0].unk1 = DAT_00822948;
  *(int *)(this_ptr->base).base.carry_hands[1].unk1 = DAT_0082294c;
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  this_ptr->unk1[0x18] = '\0';
  this_ptr->unk1[0x19] = '\0';
  this_ptr->unk1[0x1a] = '\0';
  this_ptr->unk1[0x1b] = '\0';
  return;
}
