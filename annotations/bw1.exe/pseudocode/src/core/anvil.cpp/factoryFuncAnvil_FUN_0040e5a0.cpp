// Name: core_anvil.cpp_factoryFuncAnvil_FUN_0040e5a0
// Address: 0040e5a0
// Address Range: [[0040e5a0, 0040e5bb]]
// Convention: unknown
// Signature: void core_anvil_cpp_factoryFuncAnvil_FUN_0040e5a0(void)

#include "nocturne.h"

void core_anvil_cpp_factoryFuncAnvil_FUN_0040e5a0(void)

{
  CAnvil *this_ptr;
  
  this_ptr = (CAnvil *)FUN_005c0f32(0x344);
  if (this_ptr == (CAnvil *)0x0) {
    return;
  }
  core_anvil_cpp_CAnvil_ctor_FUN_0040e5d0(this_ptr);
  return;
}
