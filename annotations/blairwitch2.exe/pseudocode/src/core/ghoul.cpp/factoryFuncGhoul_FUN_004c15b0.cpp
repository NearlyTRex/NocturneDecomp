// Name: core_ghoul.cpp_factoryFuncGhoul_FUN_004c15b0
// Address: 004c15b0
// Address Range: [[004c15b0, 004c15cb]]
// Convention: unknown
// Signature: void core_ghoul_cpp_factoryFuncGhoul_FUN_004c15b0(void)

#include "nocturne.h"

void core_ghoul_cpp_factoryFuncGhoul_FUN_004c15b0(void)

{
  CGhoul *this_ptr;
  
  this_ptr = (CGhoul *)FUN_005b8be2(0x10b74);
  if (this_ptr == (CGhoul *)0x0) {
    return;
  }
  core_ghoul_cpp_CGhoul_ctor_FUN_004c15e0(this_ptr);
  return;
}
