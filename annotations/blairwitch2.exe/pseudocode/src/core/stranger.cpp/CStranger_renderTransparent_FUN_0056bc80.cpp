// Name: core_stranger.cpp_CStranger_renderTransparent_FUN_0056bc80
// Address: 0056bc80
// Address Range: [[0056bc80, 0056bcb4]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_renderTransparent_FUN_0056bc80(CStranger *this_ptr)

#include "nocturne.h"

int __cdecl core_stranger_cpp_CStranger_renderTransparent_FUN_0056bc80(CStranger *this_ptr)

{
  CWeapon *this_ptr_00;
  
  core_charactr_cpp_CCharacter_renderTransparent_FUN_004268b0((CCharacter *)this_ptr);
  this_ptr_00 = this_ptr->weapon;
  if (this_ptr_00 == (CWeapon *)0x0) {
    return 1;
  }
  (*((this_ptr_00->base).vtable._ub)->renderTransparent)(&this_ptr_00->base);
  return 1;
}
