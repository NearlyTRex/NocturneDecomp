// Name: core_crossbow.cpp_factoryFuncCrossbow_FUN_00449740
// Address: 00449740
// Address Range: [[00449740, 0044975b]]
// Convention: unknown
// Signature: void core_crossbow_cpp_factoryFuncCrossbow_FUN_00449740(void)

#include "nocturne.h"

void core_crossbow_cpp_factoryFuncCrossbow_FUN_00449740(void)

{
  CCrossbow *this_ptr;
  
  this_ptr = (CCrossbow *)FUN_005c0f32(0x820);
  if (this_ptr == (CCrossbow *)0x0) {
    return;
  }
  core_crossbow_cpp_CCrossbow_ctor_FUN_00449770(this_ptr);
  return;
}
