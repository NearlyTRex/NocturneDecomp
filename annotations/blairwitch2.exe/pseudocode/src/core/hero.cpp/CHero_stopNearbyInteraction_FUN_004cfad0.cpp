// Name: core_hero.cpp_CHero_stopNearbyInteraction_FUN_004cfad0
// Address: 004cfad0
// Address Range: [[004cfad0, 004cfaff]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_stopNearbyInteraction_FUN_004cfad0(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_stopNearbyInteraction_FUN_004cfad0(CHero *this_ptr)

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
