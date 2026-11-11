// Name: core_lightgun.cpp_factoryFuncLightGun_FUN_004ffe80
// Address: 004ffe80
// Address Range: [[004ffe80, 004ffe9b]]
// Convention: unknown
// Signature: void core_lightgun_cpp_factoryFuncLightGun_FUN_004ffe80(void)

#include "nocturne.h"

void core_lightgun_cpp_factoryFuncLightGun_FUN_004ffe80(void)

{
  CLightGun *this_ptr;
  
  this_ptr = (CLightGun *)operator_new(0x598);
  if (this_ptr == (CLightGun *)0x0) {
    return;
  }
  core_lightgun_cpp_CLightGun_ctor_FUN_004ffeb0(this_ptr);
  return;
}
