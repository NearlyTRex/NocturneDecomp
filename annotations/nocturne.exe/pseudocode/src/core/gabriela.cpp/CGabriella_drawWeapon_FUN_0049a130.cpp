// Name: core_gabriela.cpp_CGabriella_drawWeapon_FUN_0049a130
// Address: 0049a130
// Address Range: [[0049a130, 0049a153]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_drawWeapon_FUN_0049a130(CGabriella *this_ptr,int drawn)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_drawWeapon_FUN_0049a130(CGabriella *this_ptr,int drawn)

{
  if (drawn != 0) {
    this_ptr->weapon_state_flags = 3;
    return;
  }
  this_ptr->weapon_state_flags = 0;
  return;
}
