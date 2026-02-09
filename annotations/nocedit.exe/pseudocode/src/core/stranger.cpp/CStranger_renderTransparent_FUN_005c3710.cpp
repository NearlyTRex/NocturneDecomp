// Name: core_stranger.cpp_CStranger_renderTransparent_FUN_005c3710
// Address: 005c3710
// Address Range: [[005c3710, 005c3744]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_renderTransparent_FUN_005c3710(CStranger *this_ptr)

#include "nocturne.h"

int __cdecl core_stranger_cpp_CStranger_renderTransparent_FUN_005c3710(CStranger *this_ptr)

{
  CDemonActor *this_ptr_00;
  
  core_charactr_cpp_CCharacter_FUN_0042b0e0((CCharacter *)this_ptr);
  this_ptr_00 = this_ptr->weapon;
  if (this_ptr_00 == (CDemonActor *)0x0) {
    return 1;
  }
  (*((this_ptr_00->vtable)._ub)->renderTransparent)(this_ptr_00);
  return 1;
}
