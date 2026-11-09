// Name: core_ammo.cpp_FUN_0040e0c0
// Address: 0040e0c0
// Address Range: [[0040e0c0, 0040e0db]]
// Convention: unknown
// Signature: void core_ammo_cpp_FUN_0040e0c0(void)

#include "nocturne.h"

void core_ammo_cpp_FUN_0040e0c0(void)

{
  CAmmoMana *this_ptr;
  
  this_ptr = (CAmmoMana *)FUN_005a3cb2(800);
  if (this_ptr == (CAmmoMana *)0x0) {
    return;
  }
  core_ammo_cpp_CAmmoMana_ctor_FUN_0040e0f0(this_ptr);
  return;
}
