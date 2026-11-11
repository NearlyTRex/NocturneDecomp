// Name: core_gabriela.cpp_CGabriella_renderTransparent_FUN_004b1160
// Address: 004b1160
// Address Range: [[004b1160, 004b1190]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_renderTransparent_FUN_004b1160(CGabriella *this_ptr)

#include "nocturne.h"

int __cdecl core_gabriela_cpp_CGabriella_renderTransparent_FUN_004b1160(CGabriella *this_ptr)

{
  CWeapon *this_ptr_00;
  
  this_ptr_00 = (this_ptr->base).inventories[0].selected_weapons
                [(this_ptr->base).inventories[0].current_group];
  (*((this_ptr_00->base).vtable._ub)->renderTransparent)(&this_ptr_00->base);
  core_charactr_cpp_CCharacter_renderTransparent_FUN_004268b0((CCharacter *)this_ptr);
  return 1;
}
