// Name: core_sentinel.cpp_factoryFuncSentinel_FUN_0054b9e0
// Address: 0054b9e0
// Address Range: [[0054b9e0, 0054b9fb]]
// Convention: unknown
// Signature: void core_sentinel_cpp_factoryFuncSentinel_FUN_0054b9e0(void)

#include "nocturne.h"

void core_sentinel_cpp_factoryFuncSentinel_FUN_0054b9e0(void)

{
  CSentinel *this_ptr;
  
  this_ptr = (CSentinel *)operator_new(0xc270);
  if (this_ptr == (CSentinel *)0x0) {
    return;
  }
  core_sentinel_cpp_CSentinel_ctor_FUN_0054ba10(this_ptr);
  return;
}
