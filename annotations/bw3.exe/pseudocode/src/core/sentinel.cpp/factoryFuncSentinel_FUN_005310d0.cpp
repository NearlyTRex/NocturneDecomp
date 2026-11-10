// Name: core_sentinel.cpp_factoryFuncSentinel_FUN_005310d0
// Address: 005310d0
// Address Range: [[005310d0, 005310eb]]
// Convention: unknown
// Signature: void core_sentinel_cpp_factoryFuncSentinel_FUN_005310d0(void)

#include "nocturne.h"

void core_sentinel_cpp_factoryFuncSentinel_FUN_005310d0(void)

{
  CSentinel *this_ptr;
  
  this_ptr = (CSentinel *)debugAllocTracked1(0xd05c);
  if (this_ptr == (CSentinel *)0x0) {
    return;
  }
  core_sentinel_cpp_CSentinel_ctor_FUN_00531100(this_ptr);
  return;
}
