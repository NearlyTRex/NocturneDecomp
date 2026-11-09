// Name: core_flamegun.cpp_factoryFuncFlameThrower_FUN_004a0ce0
// Address: 004a0ce0
// Address Range: [[004a0ce0, 004a0cfb]]
// Convention: unknown
// Signature: void core_flamegun_cpp_factoryFuncFlameThrower_FUN_004a0ce0(void)

#include "nocturne.h"

void core_flamegun_cpp_factoryFuncFlameThrower_FUN_004a0ce0(void)

{
  CFlameThrower *this_ptr;
  
  this_ptr = (CFlameThrower *)FUN_005b8be2(0x6e4);
  if (this_ptr == (CFlameThrower *)0x0) {
    return;
  }
  core_flamegun_cpp_CFlameThrower_ctor_FUN_004a0d10(this_ptr);
  return;
}
