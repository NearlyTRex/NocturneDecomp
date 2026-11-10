// Name: core_ghoul.cpp_factoryFuncGhoul_FUN_004ddd30
// Address: 004ddd30
// Address Range: [[004ddd30, 004ddd4b]]
// Convention: unknown
// Signature: void core_ghoul_cpp_factoryFuncGhoul_FUN_004ddd30(void)

#include "nocturne.h"

void core_ghoul_cpp_factoryFuncGhoul_FUN_004ddd30(void)

{
  CGhoul *this_ptr;
  
  this_ptr = (CGhoul *)debugAllocTracked1(0xc2e4);
  if (this_ptr == (CGhoul *)0x0) {
    return;
  }
  core_ghoul_cpp_CGhoul_ctor_FUN_004ddd60(this_ptr);
  return;
}
