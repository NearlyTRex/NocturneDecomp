// Name: core_flamecan.cpp_factoryFuncFlameCan_FUN_004a6ed0
// Address: 004a6ed0
// Address Range: [[004a6ed0, 004a6eeb]]
// Convention: unknown
// Signature: void core_flamecan_cpp_factoryFuncFlameCan_FUN_004a6ed0(void)

#include "nocturne.h"

void core_flamecan_cpp_factoryFuncFlameCan_FUN_004a6ed0(void)

{
  CFlameCan *this_ptr;
  
  this_ptr = (CFlameCan *)debugAllocTracked1(0x5e8);
  if (this_ptr == (CFlameCan *)0x0) {
    return;
  }
  core_flamecan_cpp_CFlameCan_ctor_FUN_004a6f00(this_ptr);
  return;
}
