// Name: core_robin.cpp_factoryFuncRobin_FUN_005a5e40
// Address: 005a5e40
// Address Range: [[005a5e40, 005a5e5b]]
// Convention: unknown
// Signature: void core_robin_cpp_factoryFuncRobin_FUN_005a5e40(void)

#include "nocturne.h"

void core_robin_cpp_factoryFuncRobin_FUN_005a5e40(void)

{
  CRobin *this_ptr;
  
  this_ptr = (CRobin *)operator_new(0x11858);
  if (this_ptr == (CRobin *)0x0) {
    return;
  }
  core_robin_cpp_CRobin_ctor_FUN_005a5e70(this_ptr);
  return;
}
