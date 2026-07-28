// Name: core_boneguy.cpp_CBoneGuy_setup_FUN_00418800
// Address: 00418800
// Address Range: [[00418800, 004189dc]]
// Convention: unknown
// Signature: void core_boneguy_cpp_CBoneGuy_setup_FUN_00418800(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_boneguy_cpp_CBoneGuy_setup_FUN_00418800(CEnemy *param_1)

{
  CDeformableModelInstance *this_ptr;
  int iVar1;
  CCharacter *pCVar2;
  CSkeleton *this_ptr_00;
  CDeformableModel *pCVar3;
  
  this_ptr = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr);
  DAT_00764794 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_00,"Bip01 Head",1);
  _DAT_007647a0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_007647a4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R ForeArm",1);
  DAT_007647a8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_00,"Bip01 L UpperArm",1);
  DAT_007647ac = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_007647b0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Foot",1);
  _DAT_007647b4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Foot",1);
  DAT_00764798 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_00,"Bip01 L Hand",1);
  DAT_0076479c = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_00,"Bip01 R Hand",1);
  DAT_007647b8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_00,"Bip01 Spine",1);
  DAT_007647bc = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_00,"Bip01 Spine2",1);
  DAT_00764794 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_00,"Bip01 Head",1);
  DAT_007647a8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_00,"Bip01 L UpperArm",1);
  DAT_007647ac = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_00,"Bip01 R UpperArm",1);
  DAT_007647b8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_00,"Bip01 Spine",1);
  DAT_007647bc = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_00,"Bip01 Spine2",1);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(this_ptr);
  iVar1 = pCVar3->texture_sets[0].textures[0x28].textures[0].base.type;
  *(int *)(param_1[1].base.base.create_event + 4) = iVar1;
  if (0x14 < iVar1) {
    PTR_01cc4800 = "..\\core\\boneguy.cpp";
    INT_01cc4804 = 0x12f;
    core_main_c_FUN_004c8440("CBoneGuy::explode - Not enough containers");
  }
  (param_1->base).carry_hands[0].bone_index = DAT_00764798;
  (param_1->base).carry_hands[1].bone_index = DAT_0076479c;
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  pCVar2 = &param_1[1].base;
  (pCVar2->base).actor_name[0x10] = '\0';
  (pCVar2->base).actor_name[0x11] = '\0';
  (pCVar2->base).actor_name[0x12] = '\0';
  (pCVar2->base).actor_name[0x13] = '\0';
  return;
}
