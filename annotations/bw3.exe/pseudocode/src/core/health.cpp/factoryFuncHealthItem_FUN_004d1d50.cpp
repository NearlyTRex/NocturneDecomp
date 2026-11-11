// Name: core_health.cpp_factoryFuncHealthItem_FUN_004d1d50
// Address: 004d1d50
// Address Range: [[004d1d50, 004d1d6b]]
// Convention: unknown
// Signature: void core_health_cpp_factoryFuncHealthItem_FUN_004d1d50(void)

#include "nocturne.h"

void core_health_cpp_factoryFuncHealthItem_FUN_004d1d50(void)

{
  CHealthItem *this_ptr;
  
  this_ptr = (CHealthItem *)operator_new(0x2e4);
  if (this_ptr == (CHealthItem *)0x0) {
    return;
  }
  core_health_cpp_CHealthItem_ctor_FUN_004d1d80(this_ptr);
  return;
}
