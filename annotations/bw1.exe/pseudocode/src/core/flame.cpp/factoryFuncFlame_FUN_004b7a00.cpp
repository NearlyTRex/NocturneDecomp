// Name: core_flame.cpp_factoryFuncFlame_FUN_004b7a00
// Address: 004b7a00
// Address Range: [[004b7a00, 004b7a1b]]
// Convention: unknown
// Signature: void core_flame_cpp_factoryFuncFlame_FUN_004b7a00(void)

#include "nocturne.h"

void core_flame_cpp_factoryFuncFlame_FUN_004b7a00(void)

{
  CFlame *this_ptr;
  
  this_ptr = (CFlame *)FUN_005c0f32(0x2a4);
  if (this_ptr == (CFlame *)0x0) {
    return;
  }
  core_flame_cpp_CFlame_ctor_FUN_004b7a30(this_ptr);
  return;
}
