// Name: core_melee.cpp_factoryFuncMelee_FUN_004ea880
// Address: 004ea880
// Address Range: [[004ea880, 004ea89b]]
// Convention: unknown
// Signature: void core_melee_cpp_factoryFuncMelee_FUN_004ea880(void)

#include "nocturne.h"

void core_melee_cpp_factoryFuncMelee_FUN_004ea880(void)

{
  CMelee *this_ptr;
  
  this_ptr = (CMelee *)debugAllocTracked1(0x828);
  if (this_ptr == (CMelee *)0x0) {
    return;
  }
  core_melee_cpp_CMelee_ctor_FUN_004ea8b0(this_ptr);
  return;
}
