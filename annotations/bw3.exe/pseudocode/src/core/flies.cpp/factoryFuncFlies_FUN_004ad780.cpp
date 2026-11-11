// Name: core_flies.cpp_factoryFuncFlies_FUN_004ad780
// Address: 004ad780
// Address Range: [[004ad780, 004ad79b]]
// Convention: unknown
// Signature: void core_flies_cpp_factoryFuncFlies_FUN_004ad780(void)

#include "nocturne.h"

void core_flies_cpp_factoryFuncFlies_FUN_004ad780(void)

{
  CFlies *this_ptr;
  
  this_ptr = (CFlies *)operator_new(0x2a20);
  if (this_ptr == (CFlies *)0x0) {
    return;
  }
  core_flies_cpp_CFlies_ctor_FUN_004ad7b0(this_ptr);
  return;
}
