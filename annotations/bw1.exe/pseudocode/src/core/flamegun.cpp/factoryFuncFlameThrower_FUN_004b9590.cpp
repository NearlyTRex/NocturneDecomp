// Name: core_flamegun.cpp_factoryFuncFlameThrower_FUN_004b9590
// Address: 004b9590
// Address Range: [[004b9590, 004b95ab]]
// Convention: unknown
// Signature: void core_flamegun_cpp_factoryFuncFlameThrower_FUN_004b9590(void)

#include "nocturne.h"

void core_flamegun_cpp_factoryFuncFlameThrower_FUN_004b9590(void)

{
  CFlameThrower *this_ptr;
  
  this_ptr = (CFlameThrower *)operator_new(0x588);
  if (this_ptr == (CFlameThrower *)0x0) {
    return;
  }
  core_flamegun_cpp_CFlameThrower_ctor_FUN_004b95c0(this_ptr);
  return;
}
