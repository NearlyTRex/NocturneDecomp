// Name: core_enemy.cpp_CEnemy_FUN_004aa170
// Address: 004aa170
// Address Range: [[004aa170, 004aa24f]]
// Convention: __cdecl
// Signature: int core_enemy.cpp_CEnemy_FUN_004aa170(CEnemy * this_ptr)

#include "nocturne.h"

int __cdecl core_enemy_cpp_CEnemy_FUN_004aa170(CEnemy *this_ptr)

{
  int extraout_EAX;
  int extraout_EAX_00;
  CActorPropertyList *in_stack_00000008;
  
  core_charactr_cpp_CCharacter_FUN_0042f730(&this_ptr->base);
  core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  *(uint *)(extraout_EAX + 0x58) = 1;
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  return extraout_EAX_00;
}
