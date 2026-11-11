// Name: core_flies.cpp_factoryFuncFlies_FUN_004a6a60
// Address: 004a6a60
// Address Range: [[004a6a60, 004a6a7b]]
// Convention: unknown
// Signature: void core_flies_cpp_factoryFuncFlies_FUN_004a6a60(void)

#include "nocturne.h"

void core_flies_cpp_factoryFuncFlies_FUN_004a6a60(void)

{
  CFlies *this_ptr;
  
  this_ptr = (CFlies *)operator_new(0x2b7c);
  if (this_ptr == (CFlies *)0x0) {
    return;
  }
  core_flies_cpp_CFlies_ctor_FUN_004a6a90(this_ptr);
  return;
}
