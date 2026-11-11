// Name: core_prye.cpp_CPrye_renderTransparent_FUN_00522880
// Address: 00522880
// Address Range: [[00522880, 005228b4]]
// Convention: __cdecl
// Signature: int __cdecl core_prye_cpp_CPrye_renderTransparent_FUN_00522880(CPrye *this_ptr)

#include "nocturne.h"

int __cdecl core_prye_cpp_CPrye_renderTransparent_FUN_00522880(CPrye *this_ptr)

{
  CWeapon *this_ptr_00;
  
  core_charactr_cpp_CCharacter_renderTransparent_FUN_0042f510((CCharacter *)this_ptr);
  this_ptr_00 = this_ptr->weapon;
  if (this_ptr_00 == (CWeapon *)0x0) {
    return 1;
  }
  (*((this_ptr_00->base).vtable._ub)->renderTransparent)(&this_ptr_00->base);
  return 1;
}
