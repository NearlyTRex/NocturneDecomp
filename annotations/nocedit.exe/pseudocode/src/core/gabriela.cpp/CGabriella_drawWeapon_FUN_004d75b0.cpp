// Name: core_gabriela.cpp_CGabriella_drawWeapon_FUN_004d75b0
// Address: 004d75b0
// Address Range: [[004d75b0, 004d75d3]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_drawWeapon_FUN_004d75b0(CGabriella *this_ptr,int drawn)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_drawWeapon_FUN_004d75b0(CGabriella *this_ptr,int drawn)

{
  if (drawn != 0) {
    this_ptr->weapon_state_flags = 3;
    return;
  }
  this_ptr->weapon_state_flags = 0;
  return;
}
