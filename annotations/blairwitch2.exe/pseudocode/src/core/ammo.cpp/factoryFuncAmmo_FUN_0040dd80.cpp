// Name: core_ammo.cpp_factoryFuncAmmo_FUN_0040dd80
// Address: 0040dd80
// Address Range: [[0040dd80, 0040dd9b]]
// Convention: unknown
// Signature: void core_ammo_cpp_factoryFuncAmmo_FUN_0040dd80(void)

#include "nocturne.h"

void core_ammo_cpp_factoryFuncAmmo_FUN_0040dd80(void)

{
  CAmmo *this_ptr;
  
  this_ptr = (CAmmo *)operator_new(0x47c);
  if (this_ptr == (CAmmo *)0x0) {
    return;
  }
  core_ammo_cpp_CAmmo_ctor_FUN_0040ddb0(this_ptr);
  return;
}
