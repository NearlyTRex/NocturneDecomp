// Name: core_rifle.cpp_factoryFuncRifle_FUN_0053fef0
// Address: 0053fef0
// Address Range: [[0053fef0, 0053ff0b]]
// Convention: unknown
// Signature: void core_rifle_cpp_factoryFuncRifle_FUN_0053fef0(void)

#include "nocturne.h"

void core_rifle_cpp_factoryFuncRifle_FUN_0053fef0(void)

{
  CRifle *this_ptr;
  
  this_ptr = (CRifle *)debugAllocTracked1(0x584);
  if (this_ptr == (CRifle *)0x0) {
    return;
  }
  core_rifle_cpp_CRifle_ctor_FUN_0053ff20(this_ptr);
  return;
}
