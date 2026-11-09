// Name: core_health.cpp_factoryFuncHealthItem_FUN_004cda40
// Address: 004cda40
// Address Range: [[004cda40, 004cda5b]]
// Convention: unknown
// Signature: void core_health_cpp_factoryFuncHealthItem_FUN_004cda40(void)

#include "nocturne.h"

void core_health_cpp_factoryFuncHealthItem_FUN_004cda40(void)

{
  CHealthItem *this_ptr;
  
  this_ptr = (CHealthItem *)FUN_005b8be2(0x43c);
  if (this_ptr == (CHealthItem *)0x0) {
    return;
  }
  core_health_cpp_CHealthItem_ctor_FUN_004cda70(this_ptr);
  return;
}
