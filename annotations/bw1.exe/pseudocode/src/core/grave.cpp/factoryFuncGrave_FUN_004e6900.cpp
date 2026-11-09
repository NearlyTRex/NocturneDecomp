// Name: core_grave.cpp_factoryFuncGrave_FUN_004e6900
// Address: 004e6900
// Address Range: [[004e6900, 004e691b]]
// Convention: unknown
// Signature: void core_grave_cpp_factoryFuncGrave_FUN_004e6900(void)

#include "nocturne.h"

void core_grave_cpp_factoryFuncGrave_FUN_004e6900(void)

{
  CGrave *this_ptr;
  
  this_ptr = (CGrave *)FUN_005c0f32(0x3b0);
  if (this_ptr == (CGrave *)0x0) {
    return;
  }
  core_grave_cpp_CGrave_ctor_FUN_004e6930(this_ptr);
  return;
}
