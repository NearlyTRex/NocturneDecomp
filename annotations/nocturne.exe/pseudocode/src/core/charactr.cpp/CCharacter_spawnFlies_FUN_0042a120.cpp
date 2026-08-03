// Name: core_charactr.cpp_CCharacter_spawnFlies_FUN_0042a120
// Address: 0042a120
// Address Range: [[0042a120, 0042a140]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_spawnFlies_FUN_0042a120(CCharacter *this_ptr,int fly_count,float spawn_radius)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_spawnFlies_FUN_0042a120(CCharacter *this_ptr,int fly_count,float spawn_radius)

{
  if (this_ptr->fire_count != 0) {
    return;
  }
  core_actor_cpp_CDemonActor_spawnFlies_FUN_0040b090(&this_ptr->base,fly_count,spawn_radius);
  return;
}
