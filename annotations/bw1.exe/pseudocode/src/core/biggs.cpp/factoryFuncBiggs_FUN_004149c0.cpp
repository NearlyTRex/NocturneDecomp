// Name: core_biggs.cpp_factoryFuncBiggs_FUN_004149c0
// Address: 004149c0
// Address Range: [[004149c0, 004149db]]
// Convention: unknown
// Signature: void core_biggs_cpp_factoryFuncBiggs_FUN_004149c0(void)

#include "nocturne.h"

void core_biggs_cpp_factoryFuncBiggs_FUN_004149c0(void)

{
  CBiggs *this_ptr;
  
  this_ptr = (CBiggs *)FUN_005c0f32(0xd07c);
  if (this_ptr == (CBiggs *)0x0) {
    return;
  }
  core_biggs_cpp_CBiggs_ctor_FUN_004149f0(this_ptr);
  return;
}
