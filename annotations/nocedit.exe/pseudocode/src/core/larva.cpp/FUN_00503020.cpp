// Name: core_larva.cpp_FUN_00503020
// Address: 00503020
// Address Range: [[00503020, 0050305f]]
// Convention: unknown
// Signature: undefined core_larva.cpp_FUN_00503020()

#include "nocturne.h"

/* Signature: byte actors_enemy_larva.cpp_FUN_00503020(uint param_1) */

void core_larva_cpp_FUN_00503020(void)

{
  CDeformableModelInstance *this_ptr;
  CCharacter *pCVar1;
  float fVar2;
  CEnemy *in_stack_00000004;
  
  this_ptr = &(in_stack_00000004->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  pCVar1 = &in_stack_00000004[1].base;
  (pCVar1->base).actor_name[8] = '\0';
  (pCVar1->base).actor_name[9] = '\0';
  (pCVar1->base).actor_name[10] = '\0';
  (pCVar1->base).actor_name[0xb] = '\0';
  core_enemy_cpp_CEnemy_FUN_004a9650(in_stack_00000004);
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,30.0);
  *(float *)in_stack_00000004->unk2 = fVar2;
  return;
}
