// Name: core_gabriela.cpp_CGabriella_renderTransparent_FUN_004d6230
// Address: 004d6230
// Address Range: [[004d6230, 004d6259]]
// Convention: __cdecl
// Signature: int core_gabriela.cpp_CGabriella_renderTransparent_FUN_004d6230(CGabriella * this_ptr)

#include "nocturne.h"

int __cdecl core_gabriela_cpp_CGabriella_renderTransparent_FUN_004d6230(CGabriella *this_ptr)

{
  CWeapon *this_ptr_00;
  CCharacter *in_stack_00000008;
  
  this_ptr_00 = (this_ptr->base).inventory.selected_weapon;
  (*((this_ptr_00->base).vtable._ub)->renderTransparent)(&this_ptr_00->base);
  core_charactr_cpp_CCharacter_FUN_0042b0e0(in_stack_00000008);
  return 1;
}
