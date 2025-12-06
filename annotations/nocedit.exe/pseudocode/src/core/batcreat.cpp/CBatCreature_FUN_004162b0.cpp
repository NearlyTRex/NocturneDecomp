// Name: core_batcreat.cpp_CBatCreature_FUN_004162b0
// Address: 004162b0
// Address Range: [[004162b0, 004162ec]]
// Convention: __cdecl
// Signature: void core_batcreat.cpp_CBatCreature_FUN_004162b0(CBatCreature * this_ptr)

#include "nocturne.h"

void __cdecl core_batcreat_cpp_CBatCreature_FUN_004162b0(CBatCreature *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(&this_ptr->base_enemy);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_00000008);
  return;
}
