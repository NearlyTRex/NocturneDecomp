// Name: core_flamegun.cpp_FUN_0048e990
// Address: 0048e990
// Address Range: [[0048e990, 0048e9ab]]
// Convention: unknown
// Signature: void core_flamegun_cpp_FUN_0048e990(void)

#include "nocturne.h"

void core_flamegun_cpp_FUN_0048e990(void)

{
  CFlameThrower *this_ptr;
  
  this_ptr = (CFlameThrower *)FUN_0056497c(0x580);
  if (this_ptr == (CFlameThrower *)0x0) {
    return;
  }
  core_flamegun_cpp_CFlameThrower_ctor_FUN_0048e9c0(this_ptr);
  return;
}
