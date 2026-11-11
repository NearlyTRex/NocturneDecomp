// Name: core_grave.cpp_factoryFuncGrave_FUN_004ca0f0
// Address: 004ca0f0
// Address Range: [[004ca0f0, 004ca10b]]
// Convention: unknown
// Signature: void core_grave_cpp_factoryFuncGrave_FUN_004ca0f0(void)

#include "nocturne.h"

void core_grave_cpp_factoryFuncGrave_FUN_004ca0f0(void)

{
  CGrave *this_ptr;
  
  this_ptr = (CGrave *)operator_new(0x50c);
  if (this_ptr == (CGrave *)0x0) {
    return;
  }
  core_grave_cpp_CGrave_ctor_FUN_004ca120(this_ptr);
  return;
}
