// Name: core_ammo.cpp_FUN_0040e230
// Address: 0040e230
// Address Range: [[0040e230, 0040e24b]]
// Convention: unknown
// Signature: void core_ammo_cpp_FUN_0040e230(void)

#include "nocturne.h"

void core_ammo_cpp_FUN_0040e230(void)

{
  CAmmoManaLarge *this_ptr;
  
  this_ptr = (CAmmoManaLarge *)FUN_005a3cb2(800);
  if (this_ptr == (CAmmoManaLarge *)0x0) {
    return;
  }
  core_ammo_cpp_CAmmoManaLarge_ctor_FUN_0040e260(this_ptr);
  return;
}
