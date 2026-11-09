// Name: core_glass.cpp_factoryFuncGlass_FUN_004c9b70
// Address: 004c9b70
// Address Range: [[004c9b70, 004c9b8b]]
// Convention: unknown
// Signature: void core_glass_cpp_factoryFuncGlass_FUN_004c9b70(void)

#include "nocturne.h"

void core_glass_cpp_factoryFuncGlass_FUN_004c9b70(void)

{
  CGlass *this_ptr;
  
  this_ptr = (CGlass *)FUN_005a3cb2(0xb70);
  if (this_ptr == (CGlass *)0x0) {
    return;
  }
  core_glass_cpp_CGlass_ctor_FUN_004c9ba0(this_ptr);
  return;
}
