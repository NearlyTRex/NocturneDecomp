// Name: core_melee.cpp_factoryFuncMelee_FUN_004e6f60
// Address: 004e6f60
// Address Range: [[004e6f60, 004e6f7b]]
// Convention: unknown
// Signature: void core_melee_cpp_factoryFuncMelee_FUN_004e6f60(void)

#include "nocturne.h"

void core_melee_cpp_factoryFuncMelee_FUN_004e6f60(void)

{
  CMelee *this_ptr;
  
  this_ptr = (CMelee *)FUN_005a3cb2(0x6e8);
  if (this_ptr == (CMelee *)0x0) {
    return;
  }
  core_melee_cpp_CMelee_ctor_FUN_004e6f90(this_ptr);
  return;
}
