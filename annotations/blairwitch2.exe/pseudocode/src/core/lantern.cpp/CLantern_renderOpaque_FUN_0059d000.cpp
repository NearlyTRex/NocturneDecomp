// Name: core_lantern.cpp_CLantern_renderOpaque_FUN_0059d000
// Address: 0059d000
// Address Range: [[0059d000, 0059d032]]
// Convention: __cdecl
// Signature: int __cdecl core_lantern_cpp_CLantern_renderOpaque_FUN_0059d000(CLantern *this_ptr)

#include "nocturne.h"

int __cdecl core_lantern_cpp_CLantern_renderOpaque_FUN_0059d000(CLantern *this_ptr)

{
  int iVar1;
  
  if (this_ptr->brightness <= 0.0) {
    iVar1 = core_weapon_cpp_CWeapon_renderOpaque_FUN_00589b90(&this_ptr->base);
    return iVar1;
  }
  core_lantern_cpp_FUN_0059ced0(this_ptr);
  iVar1 = core_weapon_cpp_CWeapon_renderOpaque_FUN_00589b90(&this_ptr->base);
  return iVar1;
}
