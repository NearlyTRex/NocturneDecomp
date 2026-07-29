// Name: core_melee.cpp_FUN_004cec30
// Address: 004cec30
// Address Range: [[004cec30, 004cec4b]]
// Convention: unknown
// Signature: void core_melee_cpp_FUN_004cec30(void)

#include "nocturne.h"

void core_melee_cpp_FUN_004cec30(void)

{
  CMelee *this_ptr;
  
  this_ptr = (CMelee *)FUN_0056497c(0x6c4);
  if (this_ptr == (CMelee *)0x0) {
    return;
  }
  core_melee_cpp_CMelee_ctor_FUN_004cec60(this_ptr);
  return;
}
