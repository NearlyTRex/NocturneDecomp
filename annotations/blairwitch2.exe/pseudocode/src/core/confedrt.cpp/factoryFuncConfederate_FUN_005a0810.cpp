// Name: core_confedrt.cpp_factoryFuncConfederate_FUN_005a0810
// Address: 005a0810
// Address Range: [[005a0810, 005a082b]]
// Convention: unknown
// Signature: void core_confedrt_cpp_factoryFuncConfederate_FUN_005a0810(void)

#include "nocturne.h"

void core_confedrt_cpp_factoryFuncConfederate_FUN_005a0810(void)

{
  CConfederate *this_ptr;
  
  this_ptr = (CConfederate *)operator_new(0x11868);
  if (this_ptr == (CConfederate *)0x0) {
    return;
  }
  core_confedrt_cpp_CConfederate_ctor_FUN_005a0840(this_ptr);
  return;
}
