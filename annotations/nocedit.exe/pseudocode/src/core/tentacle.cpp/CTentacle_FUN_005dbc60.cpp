// Name: core_tentacle.cpp_CTentacle_FUN_005dbc60
// Address: 005dbc60
// Address Range: [[005dbc60, 005dbcbc]]
// Convention: __cdecl
// Signature: void __cdecl core_tentacle_cpp_CTentacle_FUN_005dbc60(CTentacle *this_ptr)

#include "nocturne.h"

void __cdecl core_tentacle_cpp_CTentacle_FUN_005dbc60(CTentacle *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(&this_ptr->base);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  return;
}
