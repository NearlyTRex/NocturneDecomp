// Name: core_hero.cpp_CHero_stopNearbyInteraction_FUN_004b5920
// Address: 004b5920
// Address Range: [[004b5920, 004b594f]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_stopNearbyInteraction_FUN_004b5920(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_stopNearbyInteraction_FUN_004b5920(CHero *this_ptr)

{
  CDemonActor *this_ptr_00;
  
  this_ptr_00 = this_ptr->nearby_interactive_actor;
  if (this_ptr_00 == (CDemonActor *)0x0) {
    return;
  }
  (*((this_ptr_00->vtable)._ub)->stopInteraction)(this_ptr_00,(CDemonActor *)this_ptr);
  this_ptr->nearby_interactive_actor = (CDemonActor *)0x0;
  return;
}
