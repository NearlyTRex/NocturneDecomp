// Name: core_carved.cpp_factoryFuncCarved_FUN_004286a0
// Address: 004286a0
// Address Range: [[004286a0, 004286bb]]
// Convention: unknown
// Signature: void core_carved_cpp_factoryFuncCarved_FUN_004286a0(void)

#include "nocturne.h"

void core_carved_cpp_factoryFuncCarved_FUN_004286a0(void)

{
  CCarved *this_ptr;
  
  this_ptr = (CCarved *)debugAllocTracked1(0xc2f4);
  if (this_ptr == (CCarved *)0x0) {
    return;
  }
  core_carved_cpp_CCarved_ctor_FUN_004286d0(this_ptr);
  return;
}
