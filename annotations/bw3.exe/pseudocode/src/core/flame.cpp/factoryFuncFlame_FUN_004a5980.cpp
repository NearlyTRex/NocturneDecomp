// Name: core_flame.cpp_factoryFuncFlame_FUN_004a5980
// Address: 004a5980
// Address Range: [[004a5980, 004a599b]]
// Convention: unknown
// Signature: void core_flame_cpp_factoryFuncFlame_FUN_004a5980(void)

#include "nocturne.h"

void core_flame_cpp_factoryFuncFlame_FUN_004a5980(void)

{
  CFlame *this_ptr;
  
  this_ptr = (CFlame *)debugAllocTracked1(0x2a4);
  if (this_ptr == (CFlame *)0x0) {
    return;
  }
  core_flame_cpp_CFlame_ctor_FUN_004a59b0(this_ptr);
  return;
}
