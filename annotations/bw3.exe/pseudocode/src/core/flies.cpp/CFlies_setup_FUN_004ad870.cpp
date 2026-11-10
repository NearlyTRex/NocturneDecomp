// Name: core_flies.cpp_CFlies_setup_FUN_004ad870
// Address: 004ad870
// Address Range: [[004ad870, 004ad8ac]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_CFlies_setup_FUN_004ad870(CFlies *this_ptr)

#include "nocturne.h"

void __cdecl core_flies_cpp_CFlies_setup_FUN_004ad870(CFlies *this_ptr)

{
  int fly_index;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408890(&this_ptr->base);
  fly_index = 0;
  if (0 < this_ptr->fly_count) {
    do {
      core_flies_cpp_CFlies_initFly_FUN_004ae280(this_ptr,fly_index);
      fly_index = fly_index + 1;
    } while (fly_index < this_ptr->fly_count);
  }
  this_ptr->is_visible = 1;
  return;
}
