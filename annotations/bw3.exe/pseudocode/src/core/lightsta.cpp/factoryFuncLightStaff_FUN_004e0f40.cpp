// Name: core_lightsta.cpp_factoryFuncLightStaff_FUN_004e0f40
// Address: 004e0f40
// Address Range: [[004e0f40, 004e0f5b]]
// Convention: unknown
// Signature: void core_lightsta_cpp_factoryFuncLightStaff_FUN_004e0f40(void)

#include "nocturne.h"

void core_lightsta_cpp_factoryFuncLightStaff_FUN_004e0f40(void)

{
  CLightStaff *this_ptr;
  
  this_ptr = (CLightStaff *)operator_new(0x608);
  if (this_ptr == (CLightStaff *)0x0) {
    return;
  }
  core_lightsta_cpp_CLightStaff_ctor_FUN_004e0f70(this_ptr);
  return;
}
