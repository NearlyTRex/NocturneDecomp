// Name: core_charactr.cpp_CCharacter_spawnFlies_FUN_00433e50
// Address: 00433e50
// Address Range: [[00433e50, 00433e70]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_spawnFlies_FUN_00433e50(CCharacter *this_ptr,int fly_count,float spawn_radius)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_spawnFlies_FUN_00433e50(CCharacter *this_ptr,int fly_count,float spawn_radius)

{
  if (this_ptr->fire_count != 0) {
    return;
  }
  core_actor_cpp_CDemonActor_spawnFlies_FUN_00409c00(&this_ptr->base,fly_count,spawn_radius);
  return;
}
