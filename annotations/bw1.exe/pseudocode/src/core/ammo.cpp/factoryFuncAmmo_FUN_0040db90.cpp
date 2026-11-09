// Name: core_ammo.cpp_factoryFuncAmmo_FUN_0040db90
// Address: 0040db90
// Address Range: [[0040db90, 0040dbab]]
// Convention: unknown
// Signature: void core_ammo_cpp_factoryFuncAmmo_FUN_0040db90(void)

#include "nocturne.h"

void core_ammo_cpp_factoryFuncAmmo_FUN_0040db90(void)

{
  CAmmo *this_ptr;
  
  this_ptr = (CAmmo *)FUN_005c0f32(0x31c);
  if (this_ptr == (CAmmo *)0x0) {
    return;
  }
  core_ammo_cpp_CAmmo_ctor_FUN_0040dbc0(this_ptr);
  return;
}
