// Name: core_werewolf.cpp_CWerewolf_FUN_005f20d0
// Address: 005f20d0
// Address Range: [[005f20d0, 005f21da]]
// Convention: __cdecl
// Signature: void core_werewolf.cpp_CWerewolf_FUN_005f20d0(CWerewolf * this_ptr)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_FUN_005f20d0(CWerewolf *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(&this_ptr->base_enemy);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e670(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  if (*(int *)(this_ptr->field6_0xbed8 + 0x10) == 0) {
    if (this_ptr->type != 2) {
      return;
    }
  }
  else {
    core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
    if (this_ptr->type != 2) {
      return;
    }
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  return;
}
