// Name: core_flame.cpp_FUN_0048cf30
// Address: 0048cf30
// Address Range: [[0048cf30, 0048cf4b]]
// Convention: unknown
// Signature: void core_flame_cpp_FUN_0048cf30(void)

#include "nocturne.h"

void core_flame_cpp_FUN_0048cf30(void)

{
  CFlame *this_ptr;
  
  this_ptr = (CFlame *)FUN_0056497c(0x29c);
  if (this_ptr == (CFlame *)0x0) {
    return;
  }
  core_flame_cpp_CFlame_ctor_FUN_0048cf60(this_ptr);
  return;
}
