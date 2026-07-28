// Name: core_drone.cpp_CDrone_setup_FUN_004629b0
// Address: 004629b0
// Address Range: [[004629b0, 00462a2f]]
// Convention: unknown
// Signature: void core_drone_cpp_CDrone_setup_FUN_004629b0(CEnemy *param_1)

#include "nocturne.h"

void core_drone_cpp_CDrone_setup_FUN_004629b0(CEnemy *param_1)

{
  CDeformableModelInstance *this_ptr;
  CEnemy *pCVar1;
  CCharacter *pCVar2;
  CSkeleton *this_ptr_00;
  int iVar3;
  
  this_ptr = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr);
  pCVar1 = param_1 + 1;
  (pCVar1->base).base.actor_name[0] = '\0';
  (pCVar1->base).base.actor_name[1] = '\0';
  (pCVar1->base).base.actor_name[2] = '\0';
  (pCVar1->base).base.actor_name[3] = '\0';
  iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bipn04",1);
  *(int *)(param_1[1].base.base.actor_name + 4) = iVar3;
  iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bipn09",1);
  *(int *)(param_1[1].base.base.actor_name + 8) = iVar3;
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  pCVar2 = &param_1[1].base;
  (pCVar2->base).actor_name[0xc] = '\0';
  (pCVar2->base).actor_name[0xd] = '\0';
  (pCVar2->base).actor_name[0xe] = '\0';
  (pCVar2->base).actor_name[0xf] = '\0';
  pCVar2 = &param_1[1].base;
  (pCVar2->base).actor_name[0x10] = '\0';
  (pCVar2->base).actor_name[0x11] = '\0';
  (pCVar2->base).actor_name[0x12] = '\0';
  (pCVar2->base).actor_name[0x13] = '\0';
  pCVar2 = &param_1[1].base;
  (pCVar2->base).actor_name[0x14] = '\0';
  (pCVar2->base).actor_name[0x15] = '\0';
  (pCVar2->base).actor_name[0x16] = '\0';
  (pCVar2->base).actor_name[0x17] = '\0';
  return;
}
