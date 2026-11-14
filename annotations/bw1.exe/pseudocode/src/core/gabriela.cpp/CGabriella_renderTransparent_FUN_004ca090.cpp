// Name: core_gabriela.cpp_CGabriella_renderTransparent_FUN_004ca090
// Address: 004ca090
// Address Range: [[004ca090, 004ca0b9]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_renderTransparent_FUN_004ca090(CGabriella *this_ptr)

#include "nocturne.h"

int __cdecl core_gabriela_cpp_CGabriella_renderTransparent_FUN_004ca090(CGabriella *this_ptr)

{
  CWeapon *this_ptr_00;
  
  this_ptr_00 = (this_ptr->base).inventory.selected_weapon;
  (*((this_ptr_00->base).vtable._ub)->renderTransparent)(&this_ptr_00->base);
  core_charactr_cpp_CCharacter_renderTransparent_FUN_004301e0((CCharacter *)this_ptr);
  return 1;
}
