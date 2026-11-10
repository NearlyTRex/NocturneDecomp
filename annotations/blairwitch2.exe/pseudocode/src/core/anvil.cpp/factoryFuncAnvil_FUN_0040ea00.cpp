// Name: core_anvil.cpp_factoryFuncAnvil_FUN_0040ea00
// Address: 0040ea00
// Address Range: [[0040ea00, 0040ea1b]]
// Convention: unknown
// Signature: void core_anvil_cpp_factoryFuncAnvil_FUN_0040ea00(void)

#include "nocturne.h"

void core_anvil_cpp_factoryFuncAnvil_FUN_0040ea00(void)

{
  CAnvil *this_ptr;
  
  this_ptr = (CAnvil *)debugAllocTracked1(0x4a0);
  if (this_ptr == (CAnvil *)0x0) {
    return;
  }
  core_anvil_cpp_CAnvil_ctor_FUN_0040ea30(this_ptr);
  return;
}
