// Name: core_ghoul.cpp_factoryFuncGhoul_FUN_004c68b0
// Address: 004c68b0
// Address Range: [[004c68b0, 004c68cb]]
// Convention: unknown
// Signature: void core_ghoul_cpp_factoryFuncGhoul_FUN_004c68b0(void)

#include "nocturne.h"

void core_ghoul_cpp_factoryFuncGhoul_FUN_004c68b0(void)

{
  CGhoul *this_ptr;
  
  this_ptr = (CGhoul *)FUN_005a3cb2(0xd0d0);
  if (this_ptr == (CGhoul *)0x0) {
    return;
  }
  core_ghoul_cpp_CGhoul_ctor_FUN_004c68e0(this_ptr);
  return;
}
