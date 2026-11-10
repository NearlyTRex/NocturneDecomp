// Name: core_wateract.cpp_FUN_00578ff0
// Address: 00578ff0
// Address Range: [[00578ff0, 0057900b]]
// Convention: unknown
// Signature: void core_wateract_cpp_FUN_00578ff0(void)

#include "nocturne.h"

void core_wateract_cpp_FUN_00578ff0(void)

{
  CLava *this_ptr;
  
  this_ptr = (CLava *)debugAllocTracked1(0x2b23c);
  if (this_ptr == (CLava *)0x0) {
    return;
  }
  core_wateract_cpp_CLava_ctor_FUN_00579020(this_ptr);
  return;
}
