// Name: core_charactr.cpp_CCharacter_spawnFlies_FUN_00429e60
// Address: 00429e60
// Address Range: [[00429e60, 00429e80]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_spawnFlies_FUN_00429e60(CCharacter *this_ptr,int fly_count,float spawn_radius)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_spawnFlies_FUN_00429e60(CCharacter *this_ptr,int fly_count,float spawn_radius)

{
  if (this_ptr->fire_count != 0) {
    return;
  }
  core_actor_cpp_CDemonActor_spawnFlies_FUN_00409db0(&this_ptr->base,fly_count,spawn_radius);
  return;
}
