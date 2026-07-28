// Name: core_flamecan.cpp_FUN_0048e340
// Address: 0048e340
// Address Range: [[0048e340, 0048e35b]]
// Convention: unknown
// Signature: void core_flamecan_cpp_FUN_0048e340(void)

#include "nocturne.h"

void core_flamecan_cpp_FUN_0048e340(void)

{
  CFlameCan *this_ptr;
  
  this_ptr = (CFlameCan *)FUN_0056497c(0x5d8);
  if (this_ptr == (CFlameCan *)0x0) {
    return;
  }
  core_flamecan_cpp_CFlameCan_ctor_FUN_0048e370(this_ptr);
  return;
}
