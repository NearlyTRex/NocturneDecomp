// Name: core_blundrbs.cpp_factoryFuncBlunderbus_FUN_004103c0
// Address: 004103c0
// Address Range: [[004103c0, 004103db]]
// Convention: unknown
// Signature: void core_blundrbs_cpp_factoryFuncBlunderbus_FUN_004103c0(void)

#include "nocturne.h"

void core_blundrbs_cpp_factoryFuncBlunderbus_FUN_004103c0(void)

{
  CBlunderbus *this_ptr;
  
  this_ptr = (CBlunderbus *)FUN_005a3cb2(0x598);
  if (this_ptr == (CBlunderbus *)0x0) {
    return;
  }
  core_blundrbs_cpp_CBlunderbus_ctor_FUN_004103f0(this_ptr);
  return;
}
