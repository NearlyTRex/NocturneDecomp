// Name: core_ammo.cpp_FUN_0040eb40
// Address: 0040eb40
// Address Range: [[0040eb40, 0040eb5b]]
// Convention: unknown
// Signature: void core_ammo_cpp_FUN_0040eb40(void)

#include "nocturne.h"

void core_ammo_cpp_FUN_0040eb40(void)

{
  CAmmo *this_ptr;
  
  this_ptr = (CAmmo *)FUN_0056497c(0x314);
  if (this_ptr == (CAmmo *)0x0) {
    return;
  }
  core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(this_ptr);
  return;
}
