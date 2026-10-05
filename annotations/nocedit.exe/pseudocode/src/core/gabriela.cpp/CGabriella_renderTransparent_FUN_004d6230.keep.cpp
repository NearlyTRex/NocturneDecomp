// Name: core_gabriela.cpp_CGabriella_renderTransparent_FUN_004d6230
// Address: 004d6230
// MANUAL RECONSTRUCTION
// Address Range: [[004d6230, 004d6259]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_renderTransparent_FUN_004d6230(CGabriella *this_ptr)

#include "nocturne.h"

int __cdecl core_gabriela_cpp_CGabriella_renderTransparent_FUN_004d6230(CGabriella *this_ptr)

{
  CWeapon *this_ptr_00;
  
#if !NOCTURNE_AUTHENTIC_HERO_ACTIONS
  nocturne_hero_gabriella_hold_weapon(this_ptr);
#endif
  this_ptr_00 = (this_ptr->base).inventory.selected_weapon;
#if !NOCTURNE_AUTHENTIC_HERO_ACTIONS
  nocturne_hero_gabriella_release_weapon(this_ptr);
#endif
  (*((this_ptr_00->base).vtable._ub)->renderTransparent)(&this_ptr_00->base);
  core_charactr_cpp_CCharacter_renderTransparent_FUN_0042b0e0((CCharacter *)this_ptr);
  return 1;
}
