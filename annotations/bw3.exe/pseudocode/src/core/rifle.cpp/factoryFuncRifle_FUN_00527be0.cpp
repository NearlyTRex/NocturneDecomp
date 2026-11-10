// Name: core_rifle.cpp_factoryFuncRifle_FUN_00527be0
// Address: 00527be0
// Address Range: [[00527be0, 00527bfb]]
// Convention: unknown
// Signature: void core_rifle_cpp_factoryFuncRifle_FUN_00527be0(void)

#include "nocturne.h"

void core_rifle_cpp_factoryFuncRifle_FUN_00527be0(void)

{
  CRifle *this_ptr;
  
  this_ptr = (CRifle *)debugAllocTracked1(0x5a0);
  if (this_ptr == (CRifle *)0x0) {
    return;
  }
  core_rifle_cpp_CRifle_ctor_FUN_00527c10(this_ptr);
  return;
}
