// Name: core_hero.cpp_CHero_FUN_004f3580
// Address: 004f3580
// Address Range: [[004f3580, 004f35af]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_FUN_004f3580(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_FUN_004f3580(CHero *this_ptr)

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
