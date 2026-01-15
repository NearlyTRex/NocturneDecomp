// Name: core_werewolf.cpp_CWerewolf_FUN_005efcc0
// Address: 005efcc0
// Address Range: [[005efcc0, 005efd71]]
// Convention: __cdecl
// Signature: void core_werewolf.cpp_CWerewolf_FUN_005efcc0(CWerewolf * this_ptr)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_FUN_005efcc0(CWerewolf *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CEnemy *pCVar1;
  CSkeleton *this_ptr_01;
  int iVar2;
  float fVar3;
  
  this_ptr_00 = &(this_ptr->base_enemy).base_character.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine3");
  *(int *)this_ptr->field4_0xbec0 = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Finger1");
  *(int *)(this_ptr->field4_0xbec0 + 4) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Finger1");
  *(int *)(this_ptr->field4_0xbec0 + 8) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01jaw2");
  *(int *)(this_ptr->field4_0xbec0 + 0xc) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Head");
  *(int *)(this_ptr->field4_0xbec0 + 0x10) = iVar2;
  core_enemy_cpp_CEnemy_FUN_004a9650(&this_ptr->base_enemy);
  (this_ptr->base_enemy).base_character.base_actor.is_transparent = this_ptr->light_up_eyes;
  fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
  this_ptr->field11_0xbf00 = (int)fVar3;
  if (this_ptr->type == 0) {
    pCVar1 = &this_ptr->base_enemy;
    (pCVar1->base_character).cloth_data[0x348] = '\0';
    (pCVar1->base_character).cloth_data[0x349] = '\0';
    (pCVar1->base_character).cloth_data[0x34a] = -0x40;
    (pCVar1->base_character).cloth_data[0x34b] = '?';
  }
  this_ptr->field6_0xbed8[0] = '\0';
  this_ptr->field6_0xbed8[1] = '\0';
  this_ptr->field6_0xbed8[2] = '\0';
  this_ptr->field6_0xbed8[3] = '\0';
  fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,30.0);
  this_ptr->field6_0xbed8[8] = '\0';
  this_ptr->field6_0xbed8[9] = '\0';
  this_ptr->field6_0xbed8[10] = '\0';
  this_ptr->field6_0xbed8[0xb] = '\0';
  this_ptr->field6_0xbed8[0xc] = '\0';
  this_ptr->field6_0xbed8[0xd] = '\0';
  this_ptr->field6_0xbed8[0xe] = '\0';
  this_ptr->field6_0xbed8[0xf] = '\0';
  *(float *)(this_ptr->field6_0xbed8 + 4) = fVar3;
  return;
}
