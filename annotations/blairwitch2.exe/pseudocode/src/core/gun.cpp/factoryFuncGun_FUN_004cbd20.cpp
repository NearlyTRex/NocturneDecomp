// Name: core_gun.cpp_factoryFuncGun_FUN_004cbd20
// Address: 004cbd20
// Address Range: [[004cbd20, 004cbd3b]]
// Convention: unknown
// Signature: void core_gun_cpp_factoryFuncGun_FUN_004cbd20(void)

#include "nocturne.h"

void core_gun_cpp_factoryFuncGun_FUN_004cbd20(void)

{
  CGun *this_ptr;
  
  this_ptr = (CGun *)operator_new(0x6d4);
  if (this_ptr == (CGun *)0x0) {
    return;
  }
  core_gun_cpp_CGun_ctor_FUN_004cbd50(this_ptr);
  return;
}
