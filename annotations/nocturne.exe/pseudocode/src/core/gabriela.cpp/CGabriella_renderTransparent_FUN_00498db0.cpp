// Name: core_gabriela.cpp_CGabriella_renderTransparent_FUN_00498db0
// Address: 00498db0
// Address Range: [[00498db0, 00498dd9]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_renderTransparent_FUN_00498db0(CGabriella *this_ptr)

#include "nocturne.h"

int __cdecl core_gabriela_cpp_CGabriella_renderTransparent_FUN_00498db0(CGabriella *this_ptr)

{
  CWeapon *this_ptr_00;
  
  this_ptr_00 = (this_ptr->base).inventory.selected_weapon;
  (*((this_ptr_00->base).vtable._ub)->renderTransparent)(&this_ptr_00->base);
  core_charactr_cpp_CCharacter_renderTransparent_FUN_00427260((CCharacter *)this_ptr);
  return 1;
}
