// Name: core_sentinel.cpp_factoryFuncSentinel_FUN_0052a6f0
// Address: 0052a6f0
// Address Range: [[0052a6f0, 0052a70b]]
// Convention: unknown
// Signature: void core_sentinel_cpp_factoryFuncSentinel_FUN_0052a6f0(void)

#include "nocturne.h"

void core_sentinel_cpp_factoryFuncSentinel_FUN_0052a6f0(void)

{
  CSentinel *this_ptr;
  
  this_ptr = (CSentinel *)operator_new(0x10b00);
  if (this_ptr == (CSentinel *)0x0) {
    return;
  }
  core_sentinel_cpp_CSentinel_ctor_FUN_0052a720(this_ptr);
  return;
}
