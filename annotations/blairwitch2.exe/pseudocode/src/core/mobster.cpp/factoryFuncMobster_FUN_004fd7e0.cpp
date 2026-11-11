// Name: core_mobster.cpp_factoryFuncMobster_FUN_004fd7e0
// Address: 004fd7e0
// Address Range: [[004fd7e0, 004fd7fb]]
// Convention: unknown
// Signature: void core_mobster_cpp_factoryFuncMobster_FUN_004fd7e0(void)

#include "nocturne.h"

void core_mobster_cpp_factoryFuncMobster_FUN_004fd7e0(void)

{
  CMobster *this_ptr;
  
  this_ptr = (CMobster *)operator_new(0x10bd0);
  if (this_ptr == (CMobster *)0x0) {
    return;
  }
  core_mobster_cpp_CMobster_ctor_FUN_004fd810(this_ptr);
  return;
}
