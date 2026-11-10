// Name: core_lightgun.cpp_factoryFuncLightGun_FUN_004e29f0
// Address: 004e29f0
// Address Range: [[004e29f0, 004e2a0b]]
// Convention: unknown
// Signature: void core_lightgun_cpp_factoryFuncLightGun_FUN_004e29f0(void)

#include "nocturne.h"

void core_lightgun_cpp_factoryFuncLightGun_FUN_004e29f0(void)

{
  CLightGun *this_ptr;
  
  this_ptr = (CLightGun *)debugAllocTracked1(0x6f4);
  if (this_ptr == (CLightGun *)0x0) {
    return;
  }
  core_lightgun_cpp_CLightGun_ctor_FUN_004e2a20(this_ptr);
  return;
}
