// Name: core_werewolf.cpp_CWerewolf_setup_FUN_005efcc0
// Address: 005efcc0
// Address Range: [[005efcc0, 005efd71]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_setup_FUN_005efcc0(CWerewolf *this_ptr)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_setup_FUN_005efcc0(CWerewolf *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CEnemy *pCVar1;
  CSkeleton *this_ptr_01;
  int iVar2;
  float fVar3;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine3");
  this_ptr->bone_index = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Finger1");
  *(int *)this_ptr->unk3 = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Finger1");
  *(int *)(this_ptr->unk3 + 4) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01jaw2");
  *(int *)(this_ptr->unk3 + 8) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Head");
  *(int *)(this_ptr->unk3 + 0xc) = iVar2;
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  (this_ptr->base).base.base.is_transparent = this_ptr->light_up_eyes;
  fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
  this_ptr->unk6 = (int)fVar3;
  if (this_ptr->type == WEREWOLF_TYPE_TRAIN) {
    pCVar1 = &this_ptr->base;
    (pCVar1->base).cloth_data[0x348] = '\0';
    (pCVar1->base).cloth_data[0x349] = '\0';
    (pCVar1->base).cloth_data[0x34a] = -0x40;
    (pCVar1->base).cloth_data[0x34b] = '?';
  }
  this_ptr->sfx_handle = 0;
  fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,30.0);
  this_ptr->unk4[4] = '\0';
  this_ptr->unk4[5] = '\0';
  this_ptr->unk4[6] = '\0';
  this_ptr->unk4[7] = '\0';
  this_ptr->unk4[8] = '\0';
  this_ptr->unk4[9] = '\0';
  this_ptr->unk4[10] = '\0';
  this_ptr->unk4[0xb] = '\0';
  *(float *)this_ptr->unk4 = fVar3;
  return;
}
