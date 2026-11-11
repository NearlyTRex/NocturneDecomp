// Name: core_batman.cpp_factoryFuncBatman_FUN_00412750
// Address: 00412750
// Address Range: [[00412750, 0041276b]]
// Convention: unknown
// Signature: void core_batman_cpp_factoryFuncBatman_FUN_00412750(void)

#include "nocturne.h"

void core_batman_cpp_factoryFuncBatman_FUN_00412750(void)

{
  CBatman *this_ptr;
  
  this_ptr = (CBatman *)operator_new(0xc328);
  if (this_ptr == (CBatman *)0x0) {
    return;
  }
  core_batman_cpp_CBatman_ctor_FUN_00412780(this_ptr);
  return;
}
