// Name: core_flies.cpp_factoryFuncFlies_FUN_004bfa30
// Address: 004bfa30
// Address Range: [[004bfa30, 004bfa4b]]
// Convention: unknown
// Signature: void core_flies_cpp_factoryFuncFlies_FUN_004bfa30(void)

#include "nocturne.h"

void core_flies_cpp_factoryFuncFlies_FUN_004bfa30(void)

{
  CFlies *this_ptr;
  
  this_ptr = (CFlies *)operator_new(0x2a20);
  if (this_ptr == (CFlies *)0x0) {
    return;
  }
  core_flies_cpp_CFlies_ctor_FUN_004bfa60(this_ptr);
  return;
}
