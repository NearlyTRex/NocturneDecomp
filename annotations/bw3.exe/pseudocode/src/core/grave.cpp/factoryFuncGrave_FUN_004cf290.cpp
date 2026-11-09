// Name: core_grave.cpp_factoryFuncGrave_FUN_004cf290
// Address: 004cf290
// Address Range: [[004cf290, 004cf2ab]]
// Convention: unknown
// Signature: void core_grave_cpp_factoryFuncGrave_FUN_004cf290(void)

#include "nocturne.h"

void core_grave_cpp_factoryFuncGrave_FUN_004cf290(void)

{
  CGrave *this_ptr;
  
  this_ptr = (CGrave *)FUN_005a3cb2(0x3b0);
  if (this_ptr == (CGrave *)0x0) {
    return;
  }
  core_grave_cpp_CGrave_ctor_FUN_004cf2c0(this_ptr);
  return;
}
