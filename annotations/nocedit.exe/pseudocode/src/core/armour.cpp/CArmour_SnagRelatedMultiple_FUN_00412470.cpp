// Name: core_armour.cpp_CArmour_SnagRelatedMultiple_FUN_00412470
// Address: 00412470
// Address Range: [[00412470, 004124c3]]
// Convention: __cdecl
// Signature: void core_armour.cpp_CArmour_SnagRelatedMultiple_FUN_00412470(CArmour * this_ptr)

#include "nocturne.h"

void __cdecl core_armour_cpp_CArmour_SnagRelatedMultiple_FUN_00412470(CArmour *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(&this_ptr->base_enemy);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  return;
}
