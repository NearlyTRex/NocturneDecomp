// Name: core_melee.cpp_factoryFuncMelee_FUN_00509520
// Address: 00509520
// Address Range: [[00509520, 0050953b]]
// Convention: unknown
// Signature: void core_melee_cpp_factoryFuncMelee_FUN_00509520(void)

#include "nocturne.h"

void core_melee_cpp_factoryFuncMelee_FUN_00509520(void)

{
  CMelee *this_ptr;
  
  this_ptr = (CMelee *)FUN_005c0f32(0x6cc);
  if (this_ptr == (CMelee *)0x0) {
    return;
  }
  core_melee_cpp_CMelee_ctor_FUN_00509550(this_ptr);
  return;
}
