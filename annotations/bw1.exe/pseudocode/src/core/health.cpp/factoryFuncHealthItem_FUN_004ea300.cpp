// Name: core_health.cpp_factoryFuncHealthItem_FUN_004ea300
// Address: 004ea300
// Address Range: [[004ea300, 004ea31b]]
// Convention: unknown
// Signature: void core_health_cpp_factoryFuncHealthItem_FUN_004ea300(void)

#include "nocturne.h"

void core_health_cpp_factoryFuncHealthItem_FUN_004ea300(void)

{
  CHealthItem *this_ptr;
  
  this_ptr = (CHealthItem *)FUN_005c0f32(0x2dc);
  if (this_ptr == (CHealthItem *)0x0) {
    return;
  }
  core_health_cpp_CHealthItem_ctor_FUN_004ea330(this_ptr);
  return;
}
