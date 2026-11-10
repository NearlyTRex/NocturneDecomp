// Name: core_glass.cpp_factoryFuncGlass_FUN_004c4870
// Address: 004c4870
// Address Range: [[004c4870, 004c488b]]
// Convention: unknown
// Signature: void core_glass_cpp_factoryFuncGlass_FUN_004c4870(void)

#include "nocturne.h"

void core_glass_cpp_factoryFuncGlass_FUN_004c4870(void)

{
  CGlass *this_ptr;
  
  this_ptr = (CGlass *)debugAllocTracked1(0xc9c);
  if (this_ptr == (CGlass *)0x0) {
    return;
  }
  core_glass_cpp_CGlass_ctor_FUN_004c48a0(this_ptr);
  return;
}
