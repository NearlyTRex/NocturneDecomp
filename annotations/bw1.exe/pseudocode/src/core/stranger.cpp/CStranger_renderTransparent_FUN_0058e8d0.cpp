// Name: core_stranger.cpp_CStranger_renderTransparent_FUN_0058e8d0
// Address: 0058e8d0
// Address Range: [[0058e8d0, 0058e904]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_renderTransparent_FUN_0058e8d0(CStranger *this_ptr)

#include "nocturne.h"

int __cdecl core_stranger_cpp_CStranger_renderTransparent_FUN_0058e8d0(CStranger *this_ptr)

{
  CWeapon *this_ptr_00;
  
  core_charactr_cpp_CCharacter_renderTransparent_FUN_004301e0((CCharacter *)this_ptr);
  this_ptr_00 = this_ptr->weapon;
  if (this_ptr_00 == (CWeapon *)0x0) {
    return 1;
  }
  (*((this_ptr_00->base).vtable._ub)->renderTransparent)(&this_ptr_00->base);
  return 1;
}
