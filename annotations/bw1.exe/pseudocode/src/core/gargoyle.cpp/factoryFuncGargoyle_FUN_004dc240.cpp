// Name: core_gargoyle.cpp_factoryFuncGargoyle_FUN_004dc240
// Address: 004dc240
// Address Range: [[004dc240, 004dc25b]]
// Convention: unknown
// Signature: void core_gargoyle_cpp_factoryFuncGargoyle_FUN_004dc240(void)

#include "nocturne.h"

void core_gargoyle_cpp_factoryFuncGargoyle_FUN_004dc240(void)

{
  CGargoyle *this_ptr;
  
  this_ptr = (CGargoyle *)debugAllocTracked1(0xc2c4);
  if (this_ptr == (CGargoyle *)0x0) {
    return;
  }
  core_gargoyle_cpp_CGargoyle_ctor_FUN_004dc270(this_ptr);
  return;
}
