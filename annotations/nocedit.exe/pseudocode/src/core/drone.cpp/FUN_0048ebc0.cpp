// Name: core_drone.cpp_FUN_0048ebc0
// Address: 0048ebc0
// Address Range: [[0048ebc0, 0048ec3f]]
// Convention: unknown
// Signature: undefined core_drone.cpp_FUN_0048ebc0()

#include "nocturne.h"

/* Signature: byte actors_enemy_drone.cpp_FUN_0048ebc0(uint param_1) */

void core_drone_cpp_FUN_0048ebc0(void)

{
  CDeformableModelInstance *this_ptr;
  CCharacter *pCVar1;
  CSkeleton *this_ptr_00;
  int iVar2;
  CEnemy *in_stack_00000004;
  
  this_ptr = &(in_stack_00000004->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  pCVar1 = &in_stack_00000004[1].base;
  (pCVar1->base).actor_name[8] = '\0';
  (pCVar1->base).actor_name[9] = '\0';
  (pCVar1->base).actor_name[10] = '\0';
  (pCVar1->base).actor_name[0xb] = '\0';
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bipn04");
  *(int *)(in_stack_00000004[1].base.base.actor_name + 0xc) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bipn09");
  *(int *)(in_stack_00000004[1].base.base.actor_name + 0x10) = iVar2;
  core_enemy_cpp_CEnemy_FUN_004a9650(in_stack_00000004);
  pCVar1 = &in_stack_00000004[1].base;
  (pCVar1->base).actor_name[0x14] = '\0';
  (pCVar1->base).actor_name[0x15] = '\0';
  (pCVar1->base).actor_name[0x16] = '\0';
  (pCVar1->base).actor_name[0x17] = '\0';
  pCVar1 = &in_stack_00000004[1].base;
  (pCVar1->base).actor_name[0x18] = '\0';
  (pCVar1->base).actor_name[0x19] = '\0';
  (pCVar1->base).actor_name[0x1a] = '\0';
  (pCVar1->base).actor_name[0x1b] = '\0';
  pCVar1 = &in_stack_00000004[1].base;
  (pCVar1->base).actor_name[0x1c] = '\0';
  (pCVar1->base).actor_name[0x1d] = '\0';
  (pCVar1->base).actor_name[0x1e] = '\0';
  (pCVar1->base).actor_name[0x1f] = '\0';
  return;
}
