// Name: core_flamecan.cpp_factoryFuncFlameCan_FUN_004b8f40
// Address: 004b8f40
// Address Range: [[004b8f40, 004b8f5b]]
// Convention: unknown
// Signature: void core_flamecan_cpp_factoryFuncFlameCan_FUN_004b8f40(void)

#include "nocturne.h"

void core_flamecan_cpp_factoryFuncFlameCan_FUN_004b8f40(void)

{
  CFlameCan *this_ptr;
  
  this_ptr = (CFlameCan *)debugAllocTracked1(0x5e8);
  if (this_ptr == (CFlameCan *)0x0) {
    return;
  }
  core_flamecan_cpp_CFlameCan_ctor_FUN_004b8f70(this_ptr);
  return;
}
