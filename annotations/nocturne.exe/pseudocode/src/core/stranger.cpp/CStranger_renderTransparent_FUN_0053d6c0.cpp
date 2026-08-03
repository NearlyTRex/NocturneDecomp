// Name: core_stranger.cpp_CStranger_renderTransparent_FUN_0053d6c0
// Address: 0053d6c0
// Address Range: [[0053d6c0, 0053d6f4]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_renderTransparent_FUN_0053d6c0(CStranger *this_ptr)

#include "nocturne.h"

int __cdecl core_stranger_cpp_CStranger_renderTransparent_FUN_0053d6c0(CStranger *this_ptr)

{
  CWeapon *this_ptr_00;
  
  core_charactr_cpp_CCharacter_renderTransparent_FUN_00427260((CCharacter *)this_ptr);
  this_ptr_00 = this_ptr->weapon;
  if (this_ptr_00 == (CWeapon *)0x0) {
    return 1;
  }
  (*((this_ptr_00->base).vtable._ub)->renderTransparent)(&this_ptr_00->base);
  return 1;
}
