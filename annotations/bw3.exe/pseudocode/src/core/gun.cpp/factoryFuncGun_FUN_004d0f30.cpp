// Name: core_gun.cpp_factoryFuncGun_FUN_004d0f30
// Address: 004d0f30
// Address Range: [[004d0f30, 004d0f4b]]
// Convention: unknown
// Signature: void core_gun_cpp_factoryFuncGun_FUN_004d0f30(void)

#include "nocturne.h"

void core_gun_cpp_factoryFuncGun_FUN_004d0f30(void)

{
  CGun *this_ptr;
  
  this_ptr = (CGun *)FUN_005a3cb2(0x594);
  if (this_ptr == (CGun *)0x0) {
    return;
  }
  core_gun_cpp_CGun_ctor_FUN_004d0f60(this_ptr);
  return;
}
