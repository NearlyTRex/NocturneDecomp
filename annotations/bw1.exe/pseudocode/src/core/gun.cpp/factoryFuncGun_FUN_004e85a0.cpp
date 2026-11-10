// Name: core_gun.cpp_factoryFuncGun_FUN_004e85a0
// Address: 004e85a0
// Address Range: [[004e85a0, 004e85bb]]
// Convention: unknown
// Signature: void core_gun_cpp_factoryFuncGun_FUN_004e85a0(void)

#include "nocturne.h"

void core_gun_cpp_factoryFuncGun_FUN_004e85a0(void)

{
  CGun *this_ptr;
  
  this_ptr = (CGun *)debugAllocTracked1(0x578);
  if (this_ptr == (CGun *)0x0) {
    return;
  }
  core_gun_cpp_CGun_ctor_FUN_004e85d0(this_ptr);
  return;
}
