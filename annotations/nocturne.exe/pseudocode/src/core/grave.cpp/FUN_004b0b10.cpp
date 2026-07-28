// Name: core_grave.cpp_FUN_004b0b10
// Address: 004b0b10
// Address Range: [[004b0b10, 004b0b2b]]
// Convention: unknown
// Signature: void core_grave_cpp_FUN_004b0b10(void)

#include "nocturne.h"

void core_grave_cpp_FUN_004b0b10(void)

{
  CGrave *this_ptr;
  
  this_ptr = (CGrave *)FUN_0056497c(0x3a8);
  if (this_ptr == (CGrave *)0x0) {
    return;
  }
  core_grave_cpp_CGrave_ctor_FUN_004b0b40(this_ptr);
  return;
}
