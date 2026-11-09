// Name: core_flame.cpp_factoryFuncFlame_FUN_0049f150
// Address: 0049f150
// Address Range: [[0049f150, 0049f16b]]
// Convention: unknown
// Signature: void core_flame_cpp_factoryFuncFlame_FUN_0049f150(void)

#include "nocturne.h"

void core_flame_cpp_factoryFuncFlame_FUN_0049f150(void)

{
  CFlame *this_ptr;
  
  this_ptr = (CFlame *)FUN_005b8be2(0x400);
  if (this_ptr == (CFlame *)0x0) {
    return;
  }
  core_flame_cpp_CFlame_ctor_FUN_0049f180(this_ptr);
  return;
}
