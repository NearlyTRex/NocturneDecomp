// Name: core_ammo.cpp_factoryFuncAmmo_FUN_0040de30
// Address: 0040de30
// Address Range: [[0040de30, 0040de4b]]
// Convention: unknown
// Signature: void core_ammo_cpp_factoryFuncAmmo_FUN_0040de30(void)

#include "nocturne.h"

void core_ammo_cpp_factoryFuncAmmo_FUN_0040de30(void)

{
  CAmmo *this_ptr;
  
  this_ptr = (CAmmo *)debugAllocTracked1(800);
  if (this_ptr == (CAmmo *)0x0) {
    return;
  }
  core_ammo_cpp_CAmmo_ctor_FUN_0040de60(this_ptr);
  return;
}
