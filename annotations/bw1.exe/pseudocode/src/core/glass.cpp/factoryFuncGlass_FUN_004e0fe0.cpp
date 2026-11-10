// Name: core_glass.cpp_factoryFuncGlass_FUN_004e0fe0
// Address: 004e0fe0
// Address Range: [[004e0fe0, 004e0ffb]]
// Convention: unknown
// Signature: void core_glass_cpp_factoryFuncGlass_FUN_004e0fe0(void)

#include "nocturne.h"

void core_glass_cpp_factoryFuncGlass_FUN_004e0fe0(void)

{
  CGlass *this_ptr;
  
  this_ptr = (CGlass *)debugAllocTracked1(0xb40);
  if (this_ptr == (CGlass *)0x0) {
    return;
  }
  core_glass_cpp_CGlass_ctor_FUN_004e1010(this_ptr);
  return;
}
