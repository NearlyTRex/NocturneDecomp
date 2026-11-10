// Name: core_flamecan.cpp_factoryFuncFlameCan_FUN_004a0690
// Address: 004a0690
// Address Range: [[004a0690, 004a06ab]]
// Convention: unknown
// Signature: void core_flamecan_cpp_factoryFuncFlameCan_FUN_004a0690(void)

#include "nocturne.h"

void core_flamecan_cpp_factoryFuncFlameCan_FUN_004a0690(void)

{
  CFlameCan *this_ptr;
  
  this_ptr = (CFlameCan *)debugAllocTracked1(0x8a0);
  if (this_ptr == (CFlameCan *)0x0) {
    return;
  }
  core_flamecan_cpp_CFlameCan_ctor_FUN_004a06c0(this_ptr);
  return;
}
