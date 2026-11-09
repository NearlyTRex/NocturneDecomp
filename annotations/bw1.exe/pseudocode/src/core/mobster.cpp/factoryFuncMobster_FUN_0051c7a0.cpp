// Name: core_mobster.cpp_factoryFuncMobster_FUN_0051c7a0
// Address: 0051c7a0
// Address Range: [[0051c7a0, 0051c7bb]]
// Convention: unknown
// Signature: void core_mobster_cpp_factoryFuncMobster_FUN_0051c7a0(void)

#include "nocturne.h"

void core_mobster_cpp_factoryFuncMobster_FUN_0051c7a0(void)

{
  CMobster *this_ptr;
  
  this_ptr = (CMobster *)FUN_005c0f32(0xc340);
  if (this_ptr == (CMobster *)0x0) {
    return;
  }
  core_mobster_cpp_CMobster_ctor_FUN_0051c7d0(this_ptr);
  return;
}
